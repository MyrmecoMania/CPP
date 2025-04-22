/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:39:30 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 11:31:55 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base	*generate(void)
{
	int i = rand() % 3;
	switch (i)
	{
		case 0:
			std::cout << "Created A" << std::endl;
			return new A;
		case 1:
			std::cout << "Created B" << std::endl;
			return new B;
		case 2:
			std::cout << "Created C" << std::endl;
			return new C;
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Argument is a class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Argument is a class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Argument is a class C" << std::endl;
}

void	identify(Base& p)
{
	Base t;
	try {
		t = dynamic_cast<A&>(p);
		std::cout << "Argument is a class A" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		t = dynamic_cast<B&>(p);
		std::cout << "Argument is a class B" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		t = dynamic_cast<C&>(p);
		std::cout << "Argument is a class C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main()
{
	for(int i = 0; i < 10; i++)
	{
		Base *Test = generate();
		identify(Test);
		identify(*Test);
		delete (Test);
	}
	return (0);
}
