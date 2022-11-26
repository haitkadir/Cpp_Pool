/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:50:44 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/26 22:54:51 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/*----------------------------------------------------------------------------*/
Base::~Base (){
    std::cout << "Base: Destructor called!" << std::endl;
}



/*----------------------------------------------------------------------------*/
Base * generate(void){
    Base    *ptr;
    
    srand(time(NULL));
    int random = 1 + (rand() % 3);
    switch (random)
    {
    case 1:
        ptr = new A();
        std::cout << "Creates A()" << std::endl;
        break;
    case 2:
        ptr = new B();
        std::cout << "Creates B()" << std::endl;
        break;
    case 3:
        ptr = new C();
        std::cout << "Creates C()" << std::endl;
        break;

    default:
        return NULL;
        break;
    }

    return ptr;
}

/*----------------------------------------------------------------------------*/
void identify(Base* p){
    if(!p)
        return;
    if (dynamic_cast<A*>(p)){
        std::cout << "A" << std::endl;
    }
    if (dynamic_cast<B*>(p)){
        std::cout << "B" << std::endl;
    }
    if (dynamic_cast<C*>(p)){
        std::cout << "C" << std::endl;
    }
}

/*----------------------------------------------------------------------------*/
void identify(Base& p){
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }

    // ------------B--------------------------
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    
    // ------------C--------------------------
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
}