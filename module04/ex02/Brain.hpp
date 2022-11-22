/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:19:49 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 10:51:31 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__
#include <iostream>

class Brain{
private:
    std::string ideas[100];
public:
    Brain ();
    Brain (const Brain &a);
    Brain & operator = (const Brain &a);
    ~Brain ();

/*----------------------------------------------------------------------------*/
    void    setIdeas(const std::string (&arr)[100]);
    
/*----------------------------------------------------------------------------*/
    const std::string   (&getIdeas(void) const)[100];

};

#endif

