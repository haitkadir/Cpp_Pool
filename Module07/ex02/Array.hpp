/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:15:49 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/27 23:15:50 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__
#include <iostream>

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _len;
public:
/*----------------------------------------------------------------------------*/
    Array() : _len(0)
    {
        this->_arr = new T[0];
    }

/*----------------------------------------------------------------------------*/
    Array(unsigned int len)
    {
        if (static_cast<int>(len) > 0)
        {
            this->_arr = new T[len]();
            this->_len = len;
        }
        else
            throw std::runtime_error("Array::Can'tAllocBytesTooHighOrTooLow");
    }

/*----------------------------------------------------------------------------*/
    Array(const Array &a)
    {
        if (a._arr && a._len)
        {
            this->_arr = new T[a._len]();
            this->_len = a._len;
            for (int i = 0; i < static_cast<int>(a._len); i++)
            {
                this->_arr[i] = a._arr[i];
            }
        }
        else
        {
            this->_arr = NULL;
            this->_len = 0;
        }
    }

/*----------------------------------------------------------------------------*/
    Array &operator=(const Array &a)
    {
        if (this != &a)
        {
            if (a._arr && a._len)
            {
                this->_arr = new T[a._len]();
                this->_len = a._len;
                for (int i = 0; i < static_cast<int>(a._len); i++)
                {
                    this->_arr[i] = a._arr[i];
                }
            }
            else
            {
                this->_arr = NULL;
                this->_len = 0;
            }
        }
        return (*this);
    }

    /*----------------------------------------------------------------------------*/
    T &operator[](unsigned int index) const
    {
        if (index >= 0 && index < this->_len)
            return this->_arr[index];
        else
            throw std::runtime_error("Array::IndexOutOfBounds");
    }

    /*----------------------------------------------------------------------------*/
    int size() const
    {
        return this->_len;
    }

    /*----------------------------------------------------------------------------*/
    ~Array()
    {
        delete[] this->_arr;
    }
};

#endif
