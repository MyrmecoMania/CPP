/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:13:36 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 11:24:58 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool static	isOnlyDigit(std::string &str) {
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

template <typename T> void static printContainer(T vec, long int last) {
  std::cout << "Before: ";
  for (typename T::iterator it = vec.begin(); it != vec.end(); it++) {
    if (it == vec.end())
			std::cout << it->first << " " << it->second;
		else
			std::cout << it->first << " " << it->second << " ";
	}
  if (last > 0)
    std::cout << last;
	std::cout << std::endl;
}

template <typename T> void static printContainerFirst(T vec) {
  std::cout << "After:  ";
	for (typename T::iterator it = vec.begin(); it != vec.end(); it++) {
		if (it == vec.begin())
			std::cout << *it;
		else
			std::cout << " " << *it;
	}
	std::cout << std::endl;
}
template <typename T> void static mergeVec(T &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::vector<std::pair<unsigned int, unsigned int> > L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i].first <= R[j].first)
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
        k++;
    }
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}
void static mergeList(std::list<std::pair<unsigned int, unsigned int> > &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::list<std::pair<unsigned int, unsigned int> >::iterator access;
    std::vector<std::pair<unsigned int, unsigned int> > L(n1), R(n2);
    for (int i = 0; i < n1; i++) {
      access = arr.begin();
      std::advance(access, left + i);
      L[i] = *access;
    }
    for (int j = 0; j < n2; j++) {
      access = arr.begin();
      std::advance(access, mid + 1 +j);
      R[j] = *access;
    }
    int i = 0, j = 0;
    int k = left;
    access = arr.begin();
    while (i < n1 && j < n2) {
        if (L[i].first <= R[j].first)
            *access = L[i++];
        else
            *access = R[j++];
        std::advance(access, 1);
        k++;
    }
    access = arr.begin();
    while (i < n1) {
        *access = L[i++];
        std::advance(access, 1);
    }
    while (j < n2) {
        *access = R[j++];
        std::advance(access, 1);
    }
}

void static binaryInsertList(unsigned int i, std::list<unsigned int> &finalList) {
  long int low = 0;
  long int high = finalList.size() - 1;
  std::list<unsigned int>::iterator access;
  while (low <= high) {
        int mid = low + (high - low) / 2;
        access = finalList.begin();
        advance(access, mid);
        if (i == *access) {
            advance(access, 1);
            finalList.insert(access, i);
            return ;
        }
        else if (i > *access)
            low = mid + 1;
        else
            high = mid - 1;
    }
    access = finalList.begin();
    advance(access, low);
    finalList.insert(access, i);
    return ;
}

void static binaryInsertVec(unsigned int i, std::vector<unsigned int> &finalVec) {
  long int low = 0;
  long int high = finalVec.size() - 1;
  while (low <= high) {
        int mid = low + (high - low) / 2;
        if (i == finalVec[mid]) {
            finalVec.insert(finalVec.begin() + mid + 1, i);
            return ;
        }
        else if (i > finalVec[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    finalVec.insert(finalVec.begin() + low, i);
    return ;
}

template <typename T> void static mergeSortVec(T &arr, int left, int right) {
	if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSortVec(arr, left, mid);
    mergeSortVec(arr, mid + 1, right);
    mergeVec(arr, left, mid, right);
}

void static mergeSortList(std::list<std::pair<unsigned int, unsigned int> > &arr, int left, int right) {
	if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSortList(arr, left, mid);
    mergeSortList(arr, mid + 1, right);
    mergeList(arr, left, mid, right);
}

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(char **argv) {
	LastElement = -1;
	int i = 1;
	int temp;
	int temp1;
	struct timeval t1, t2;
	double vec, deq, pars;
	gettimeofday(&t1, NULL);
	while (argv[i]) {
		std::string msg = argv[i];
		if (!isOnlyDigit(msg))
			throw std::runtime_error("Error: Wrong arg: " + msg);
		temp = atoi(argv[i]);
		if ((temp == 0 && (argv[i][0] != 0 || msg.size() != 1))) 
			throw std::runtime_error("Error: Wrong arg: " + msg);
		if (temp > 2147483647)
			throw std::runtime_error("Error: number too high: " + msg);
		if (isAlreadyPresent(temp))
			throw std::runtime_error("Error: number entered twice: " + msg);
		if (argv[i + 1])
		{
			std::string msg1 = argv[i + 1];
			if (!isOnlyDigit(msg1))
				throw std::runtime_error("Error: Wrong arg: " + msg1);
			temp1 = atoi(argv[i + 1]);			
			if ((temp1 == 0 && (argv[i + 1][0] != 0 || msg1.size() != 1)))
				throw std::runtime_error("Error: Wrong arg: " + msg1);
			if (temp1 > 2147483647)
				throw std::runtime_error("Error: number too high: " + msg1);
			if (isAlreadyPresent(temp1))
				throw std::runtime_error("Error: number entered twice: " + msg1);
		}
		if (argv[i + 1]) {
			_vec.push_back(std::make_pair(temp, temp1));
			_lis.push_back(std::make_pair(temp, temp1));
			i++;
		}
		else
			LastElement = temp;
		i++;
	}
	printContainer(_vec, LastElement);
	gettimeofday(&t2, NULL);
	pars = (t2.tv_sec - t1.tv_sec) * 1000000 + (t2.tv_usec - t1.tv_usec);
	gettimeofday(&t1, NULL);
	sortVector(i);
	gettimeofday(&t2, NULL);
	vec = pars + ((t2.tv_sec - t1.tv_sec) * 1000000 + (t2.tv_usec - t1.tv_usec));
	gettimeofday(&t1, NULL);
	sortList(i);
	gettimeofday(&t2, NULL);
	deq = pars + ((t2.tv_sec - t1.tv_sec) * 1000000 + (t2.tv_usec - t1.tv_usec));
	printContainerFirst(_finalVec);
	std::cout << "Time to process a range of " << _finalVec.size() << " elements with std::vector : " << vec << " us" << std::endl;
	std::cout << "Time to process a range of " << _finalList.size() << " elements with std::list : " << deq << " us" << std::endl;
}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &cpy) {
	if (&cpy == this)
		*this = cpy;
}
PmergeMe	&PmergeMe::operator=(const PmergeMe &cpy) {
	if (&cpy == this)
		return (*this);
	return (*this);
}
bool	PmergeMe::isAlreadyPresent(unsigned int number) {
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _vec.begin(); it != _vec.end(); it++) {
			if (it->first == number || it->second == number)
				return (true);
	}
	return (false);
}
void	PmergeMe::sortList(int i) {
  std::list<std::pair<unsigned int, unsigned int> >::iterator access;
  long int jacob[] = { 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765, 2863311531, 5726623061, 11453246123};
  if (i <= 2) {
    _finalList.insert(_finalList.begin(), LastElement);
    return ;
  }
  for (std::list<std::pair<unsigned int, unsigned int> >::iterator it = _lis.begin(); it != _lis.end(); it++) {
    if (it->first < it->second)
      std::swap(it->first, it->second);
  }
  mergeSortList(_lis, 0 , _lis.size() - 1);
  for (std::list<std::pair<unsigned int, unsigned int> >::iterator it = _lis.begin(); it != _lis.end(); it++) {
    _finalList.push_back(it->first);
  }
  if (_lis.begin()->second)
    _finalList.insert(_finalList.begin(), _lis.begin()->second);
  int j = 0;
  long int lowerBound = 2;
  long int upperBound;
  while (jacob[j]) {
    if (j > 0  && jacob[j - 1] > static_cast<long int>(_lis.size())) {
      if (LastElement > 0)
        binaryInsertList(LastElement, _finalList);
      return ;
    }
    if (j > 0)
      lowerBound = jacob[j - 1] + 1;
    if (jacob[j] > static_cast<long int>(_lis.size()))
      upperBound = _lis.size();
    else
      upperBound = jacob[j];
    while (upperBound >= lowerBound) {
      access = _lis.begin();
      advance(access, --upperBound);
      binaryInsertList(access->second, _finalList);
    }
    j++;
  }
}
void	PmergeMe::sortVector(int i) {
  long int jacob[] = { 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765, 2863311531, 5726623061, 11453246123};
  if (i <= 2) {
    _finalVec.insert(_finalVec.begin(), LastElement);
    return ;
  }
  for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _vec.begin(); it != _vec.end(); it++) {
    if (it->first < it->second)
      std::swap(it->first, it->second);
  }
  mergeSortVec(_vec, 0 , _vec.size() - 1);
  for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _vec.begin(); it != _vec.end(); it++) {
    _finalVec.push_back(it->first);
  }
  if (_vec.begin()->second)
    _finalVec.insert(_finalVec.begin(), _vec.begin()->second);
  int j = 0;
  long int lowerBound = 2;
  long int upperBound;
  while (jacob[j]) {
    if (j > 0  && jacob[j - 1] > static_cast<long int>(_vec.size())) {
      if (LastElement > 0)
        binaryInsertVec(LastElement, _finalVec);
      return ;
    }
    if (j > 0)
      lowerBound = jacob[j - 1] + 1;
    if (jacob[j] > static_cast<long int>(_vec.size()))
      upperBound = _vec.size();
    else
      upperBound = jacob[j];
    while (upperBound >= lowerBound) {
      binaryInsertVec(_vec[--upperBound].second, _finalVec);
    }
    j++;
  }
}
