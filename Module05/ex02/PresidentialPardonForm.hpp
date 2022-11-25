/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:27:33 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:28:38 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {
private:
    const std::string _target;
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (const std::string target);
    PresidentialPardonForm (const PresidentialPardonForm &a);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
    ~PresidentialPardonForm (); 
    void    execute(Bureaucrat const & executor) const;
};


#endif

