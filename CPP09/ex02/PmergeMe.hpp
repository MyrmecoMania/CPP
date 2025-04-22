/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:13:38 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 11:03:38 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <utility>
#include <iostream>
#include <stdlib.h>
#include <sys/time.h>
#include <algorithm> 

class PmergeMe {
	public:
		PmergeMe(char **argv);
		~PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		PmergeMe &operator=(const PmergeMe &cpy);
  private:
    PmergeMe();
    bool  isAlreadyPresent(unsigned int number);
    std::vector<std::pair<unsigned int, unsigned int> >  _vec;
    std::list<std::pair<unsigned int, unsigned int> >  _lis;
    std::vector<unsigned int>  _finalVec;
    std::list<unsigned int>  _finalList;
    void	sortList(int i);
		void	sortVector(int i);
    long int   LastElement;
};
