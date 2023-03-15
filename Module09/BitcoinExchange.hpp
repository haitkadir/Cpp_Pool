#ifndef __BITCOINEXCHANGE_H__
#define __BITCOINEXCHANGE_H__
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <exception>

class BitcoinExchange{
private:
    std::multimap<std::string, std::string> db;
    bool    is_digits(const std::string &str);
    bool    is_key_value_valid(std::string &key, std::string &val);
    void    calc_print(std::string &key, std::string &rate);
public:
    BitcoinExchange ();
    ~BitcoinExchange ();
    void    open_read_db(const char *db_file_name);
    void    open_read_input(const char *input_file_name);
};

#endif

