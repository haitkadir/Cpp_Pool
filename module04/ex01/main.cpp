/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:14:05 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/22 15:14:06 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){

    Animal *animals[10];

    for(int i = 0; i < 10; i++){
        std::cout << i + 1 << " \n";
        if (i < 5)
            animals[i] = new(std::nothrow) Dog();
        else
            animals[i] = new(std::nothrow) Cat();
    }

    std::cout << "\n\nDeletion starts here\n\n";

    for(int i = 0; i < 10; i++){
        std::cout << i + 1 << " \n";
        delete  animals[i];
    }

// ---------------------------------------------------------------
//     std::string ideas[100];

//     for(int i = 0; i < 100; i++){
//         ideas[i] = std::to_string(i + 1);
//     }

//     Dog one;
//     Dog two;

//     one.getBrain().setIdeas(ideas);
//     std::cout << "one: " << one._brain << std::endl;
//     std::cout << "two: " << two._brain << std::endl;
//     std::cout << std::endl;
//     two = one;
//     std::cout << "one: " << one._brain << std::endl;
//     std::cout << "two: " << two._brain << std::endl;

//    const std::string (&twoIdeas)[100] = (two.getBrain().getIdeas());

//     for(int i = 0; i < 100; i++){
//         std::cout << twoIdeas[i] << std::endl;
//     }

    return 0;
}

