/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:07:14 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 15:19:10 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T> class Array {
	public:
		Array(unsigned int n);
		Array(const Array<T> &cpy);
		Array<T>	&operator=(const Array<T> &cpy);
		T	&operator[](const int i) const;
		~Array();
		int	size() const;
		T	*getArray() const;
	private:
		Array();
		int	_size;
		T	*_array;
};

template <class T>int	Array<T>::size() const {
	return (_size);
}

template <class T>T	*Array<T>::getArray() const {
	return (_array);
}

template <class T> Array<T>::Array() : _size(0) {
	_array = new T[0];
}

template <class T> Array<T>::~Array() {
	if (_array)
		delete[] _array;
}

template <class T> Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[n];
}

template <class T> Array<T>::Array(const Array<T> &cpy) {
	_size = cpy.size();
	_array = new T[cpy.size()];
	for(int i = 0; i < _size; i++)
		_array[i] = cpy[i];
}

template <class T> Array<T>	&Array<T>::operator=(const Array<T> &cpy) {
	if (_array)
		delete[] _array;
	_size = cpy.size();
	_array = new T[cpy.size()];
	for(int i = 0; i < _size; i++)
		_array[i] = cpy[i];
	return (*this);
}

template <class T> T	&Array<T>::operator[](const int i) const {
	if (i >= 0 && i < _size)
		return (_array[i]);
	else
		throw std::out_of_range("Out of bonds");
}
