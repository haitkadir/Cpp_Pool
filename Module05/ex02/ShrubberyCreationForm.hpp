/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:28:09 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:28:38 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {
private:
    const std::string _target;
public:
    ShrubberyCreationForm ();
    ShrubberyCreationForm (const std::string target);
    ShrubberyCreationForm (const ShrubberyCreationForm &a);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);
    ~ShrubberyCreationForm (); 
    void    execute(Bureaucrat const & executor) const;
};


#endif

