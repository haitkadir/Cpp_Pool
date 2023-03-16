#include "BitcoinExchange.hpp"

/*----------------------------------------------------------------------------*/
BitcoinExchange::BitcoinExchange () {}

/*----------------------------------------------------------------------------*/
BitcoinExchange::BitcoinExchange (const BitcoinExchange &a){
    this->db = a.db;
}

/*----------------------------------------------------------------------------*/
BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange &a){
    if (this != &a){
        this->db = a.db;
    }
    return *this;
}
/*----------------------------------------------------------------------------*/
BitcoinExchange::~BitcoinExchange () {}


/*----------------------------------------------------------------------------*/
bool    BitcoinExchange::is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

bool    BitcoinExchange::is_intOrDouble(const std::string &str)
{
    std::istringstream iss(str);
    int num;
    if (iss >> num && iss.eof())
        return true;
    else {
        std::istringstream iss2(str);
        double num2;
        if (iss2 >> num2 && iss2.eof())
            return true;
    }
    return false;
}

/*----------------------------------------------------------------------------*/
void    BitcoinExchange::stringTrim(std::string &str, const char *to_trim){
    str.erase(0, str.find_first_not_of(to_trim));                                                                                               
    str.erase(str.find_last_not_of(to_trim)+1);
}


/*----------------------------------------------------------------------------*/
bool    BitcoinExchange::is_key_value_valid(std::string &key, std::string &val, std::string &line){
    bool invalid_input = false;
    std::string tmp;
    std::stringstream ss(key);
    int intval;
    //++++++++++++++++++++ check YEAR +++++++++++++++++++
    std::getline(ss, tmp, '-');
    if (tmp.empty() || tmp.length() != 4 || !is_digits(tmp))
        invalid_input = true;
    tmp.clear();
    //++++++++++++++++++++ check MONTH +++++++++++++++++++
    std::getline(ss, tmp, '-');
    if (is_intOrDouble(tmp)){
        intval = stoi(tmp);
        if (tmp.empty() || tmp.length() != 2 || !is_digits(tmp) || intval < 1  || intval > 12)
            invalid_input = true;
        tmp.clear();
        //++++++++++++++++++++ check DAY +++++++++++++++++++
        std::getline(ss, tmp, ' ');
        intval = stoi(tmp);
        if (tmp.empty() || tmp.length() != 2 || !is_digits(tmp) || intval < 1  || intval > 31)
            invalid_input = true;
    }else
        invalid_input = true;

    //++++++++++++++++++++ check Value ++++++++++++++++++
    if (val.empty()|| !is_intOrDouble(val))
       invalid_input = true;

    if (invalid_input){
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }
    double  rate = stod(val);
    if(rate > 1000){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    if(rate < 0){
        std::cout << "Error: not a positive number. " << std::endl;
        return false;
    }
    return true;
}

/*----------------------------------------------------------------------------*/
void    BitcoinExchange::open_read_db(const char *db_file_name){
    std::fstream file(db_file_name, std::ios::in);

    if (!file.is_open()){
        std::cout << "BitcoinExchange:: Could not open db file!" << std::endl;
        exit(1);
    }
    std::string line;
    std::string key, rate;
    int i = 0;
    while(std::getline(file, line)){
        if (i != 0){
            std::stringstream ss;
            ss << line;
            std::getline(ss, key, ',');
            std::getline(ss, rate, ',');
            this->db.insert(std::pair<std::string, std::string>(key, rate));
            key.clear();
            key.clear();
        }else
            i++;
    }
    file.close();
}

/*----------------------------------------------------------------------------*/
void    BitcoinExchange::calc_print(std::string &key, std::string &rate){
    std::map<std::string, std::string>::iterator it;
    double exchange;
    if (this->db.count(key))
        exchange = stod(this->db.at(key));
    else{
        it = this->db.lower_bound(key);
        if (it != this->db.begin())
            --it;
        exchange = stod(it->second);
    }
    double d_rate = stod(rate);
    std::cout << key << " => " << d_rate  << " = " << d_rate * exchange << std::endl;
}

/*----------------------------------------------------------------------------*/
void    BitcoinExchange::open_read_input(const char *input_file_name){
    std::fstream file(input_file_name, std::ios::in);

    if (!file.is_open()){
        std::cout << "BitcoinExchange:: Could not open input file!" << std::endl;
        exit(1);
    }
    std::string line;
    std::string key, rate;
    int i = 0;
    while(std::getline(file, line)){
        if (i != 0){
            std::stringstream ss(line);
            std::getline(ss, key, '|');
            std::getline(ss, rate, '|');
            stringTrim(key, " \n\r\t");
            stringTrim(rate, " \n\r\t");
            if (is_key_value_valid(key, rate, line))
                calc_print(key, rate);
            key.clear();
            key.clear();
            line.clear();
        }else
            i++;
    }
    file.close();
}


