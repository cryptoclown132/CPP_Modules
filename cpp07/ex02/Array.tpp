/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:27:08 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/11 10:27:08 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _arr(new T[0]), _size(0) {} 

template <typename T>
Array<T>::Array(unsigned int size) : _arr(new T[size]), _size(size) {}

template <typename T>
Array<T>::Array(Array const &array) : _size(0), _arr(new T[0])
{
	*this = array;
}

template <typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &array)
{
	if (this == &array)
		return *this;
	if (_arr)
		delete [] _arr;
	_size = array.size();
	_arr = new T[array._size];
	for (unsigned int i = 0; i < array.size(); i++)
	{
		if (array._arr[i])
			_arr[i] = array._arr[i];
		else
			_arr[i] = 0;
	}
	return *this;
}

template <typename T>
unsigned int	Array<T>::size() const{
	return _size;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) const{

	if (index >= _size)
		throw OutOfBoundsException();
	return _arr[index];
}

template <typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw(){
	return "Index is out of bounds!";
}
