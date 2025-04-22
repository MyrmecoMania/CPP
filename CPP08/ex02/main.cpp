/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:14:47 by enorie            #+#    #+#             */
/*   Updated: 2024/10/28 17:24:29 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(51);
	stack.push(8);
	stack.push(45);
	stack.push(7);
	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;
	std::list<int> li;

	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(51);
	li.push_back(8);
	li.push_back(45);
	li.push_back(7);
	for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
