/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:12:02 by haitkadi          #+#    #+#             */
/*   Updated: 2022/10/18 19:12:05 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


int main(int ac, char **av){

  if (ac > 1){
    for(int i = 1; av[i]; i++){
      for(int j = 0; av[i][j]; j++){
        if (islower(av[i][j])){
          std::cout << (char)toupper(av[i][j]);
        }else
          std::cout << av[i][j];
      }
    }
  }
  else if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << std::endl;
}

