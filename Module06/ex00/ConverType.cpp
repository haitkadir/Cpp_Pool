/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConverType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:49:42 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 22:19:22 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConverType.hpp"

/*----------------------------------------------------------------------------*/
ConverType::ConverType (std::string input){
    this->_input = input;
}

/*----------------------------------------------------------------------------*/
void    ConverType::toChar(void){
    try
    {
        if (this->_input.length() == 1){
            std::stringstream sstr;
            sstr << (int)this->_input.at(0);
            this->_input = sstr.str();
            char ch_value = static_cast<char>(std::stoi(this->_input));
            if(std::isprint(ch_value))
                std::cout << "char: '" << ch_value << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }else {
            int value = std::stoi(this->_input);
            if (isascii(value))
            {
                char ch_value = static_cast<char>(value);
                if(std::isprint(ch_value))
                    std::cout << "char: '" << ch_value << "'" << std::endl;
                else
                    std::cout << "char: Non displayable" << std::endl;
            }
            else
                std::cout << "char: Impossible" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "char: Imposible" << std::endl;
    }
    
}

/*----------------------------------------------------------------------------*/
void    ConverType::toInt(void){
    try
    {
        int i_value = static_cast<int>(std::stoi(this->_input));
        std::cout << "Int: " << i_value << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Int: Imposible" << std::endl;
    }
    
}

/*----------------------------------------------------------------------------*/
void    ConverType::toFloat(void){
    try
    {
        float f_value = static_cast<float>(std::stof(this->_input));
        std::cout << "Float: " << f_value << (f_value == (int)f_value ? ".0f" : "f") << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Float: Imposible" << std::endl;
    }
}

/*----------------------------------------------------------------------------*/
void    ConverType::toDouble(void){
    try
    {
        double d_value = static_cast<double>(std::stod(this->_input));
        std::cout << "Double: " << d_value << (d_value == (int)d_value ? ".0" : "") << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Double: Imposible" << std::endl;
    }
}

