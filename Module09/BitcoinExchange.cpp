#include "BitcoinExchange.hpp"

/*----------------------------------------------------------------------------*/
BitcoinExchange::BitcoinExchange (){
    std::cout << "BitcoinExchange: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
bool    BitcoinExchange::is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

/*----------------------------------------------------------------------------*/
bool    BitcoinExchange::is_key_value_valid(std::string &key, std::string &val){
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
    intval = stoi(tmp);
    if (tmp.empty() || tmp.length() != 2 || !is_digits(tmp) || intval < 1  || intval > 12)
        invalid_input = true;
    tmp.clear();
    //++++++++++++++++++++ check DAY +++++++++++++++++++
    std::getline(ss, tmp, ' ');
    intval = stoi(tmp);
    if (tmp.empty() || tmp.length() != 2 || !is_digits(tmp) || intval < 1  || intval > 31)
        invalid_input = true;
    //++++++++++++++++++++ check Value ++++++++++++++++++

    double rate;
    //++++++++++++++++++++ check val +++++++++++++++++++
    rate = stod(val);
    if (val.empty()|| !is_digits(val))
       invalid_input = true;
    if (invalid_input)
        std::cout << "Error: bad input => " << 

    if(rate > INT_MAX){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }



    return true;
}

/*----------------------------------------------------------------------------*/
bool    BitcoinExchange::is_value_valid(std::string &val){
    double rate;
    //++++++++++++++++++++ check val +++++++++++++++++++
    rate = stod(val);
    if (val.empty()|| !is_digits(val)){
        return false;
    }
    if(rate > INT_MAX){
        std::cout << "Error: too large a number." << std::endl;
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
    key = "";
    rate = "";
    std::cout << "BitcoinExchange:: calc_print: " << std::endl;
}

/*----------------------------------------------------------------------------*/
void    BitcoinExchange::open_read_input(const char *input_file_name){
    std::fstream file(input_file_name, std::ios::in);

    if (!file.is_open()){
        std::cout << "BitcoinExchange:: Could not open db file!" << std::endl;
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
            rate.erase(0, rate.find_first_not_of(" \n\r\t"));                                                                                               
            rate.erase(rate.find_last_not_of(" \n\r\t")+1); 
            std::cout << "("<< rate << ")" << std::endl;
            std::cout << "Key: " << key << " | Value" << rate << std::endl;
            if (!is_key_value_valid(key, rate))
                continue;
            // calc_print(key, rate);
            key.clear();
            key.clear();
            line.clear();
        }else
            i++;
    }
    file.close();
}

/*----------------------------------------------------------------------------*/
BitcoinExchange::~BitcoinExchange (){
    std::cout << "BitcoinExchange: Destructor called!" << std::endl;
}

