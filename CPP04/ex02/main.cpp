/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:17:59 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:29:41 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
// AAnimal *animal = new AAnimal();
Dog dog;
dog.getBrain()->getIdeas()[0] = "hello doggie";
Dog dog1;
dog1 = dog;
Dog dog2(dog1);
std::cout << dog.getBrain()->getIdeas()[0] << std::endl;
std::cout << dog1.getBrain()->getIdeas()[0] << std::endl;
std::cout << dog2.getBrain()->getIdeas()[0] << std::endl;
std::cout << dog.getBrain() << std::endl;
std::cout << dog1.getBrain() << std::endl;
std::cout << dog2.getBrain() << std::endl;
Cat cat;
cat.getBrain()->getIdeas()[0] = "hello cat";
Cat cat1;
cat1 = cat;
Cat cat2(cat1);
std::cout << cat.getBrain()->getIdeas()[0] << std::endl;
std::cout << cat1.getBrain()->getIdeas()[0] << std::endl;
std::cout << cat2.getBrain()->getIdeas()[0] << std::endl;
std::cout << cat.getBrain() << std::endl;
std::cout << cat1.getBrain() << std::endl;
std::cout << cat2.getBrain() << std::endl;
return 0;
}
