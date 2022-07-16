/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:35:42 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 16:51:21 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.class.hpp"

Data::Data(void) : _age(25), _nbChild(0)
{
	return ;
}

Data::Data(unsigned int age, unsigned int nbChild) : _age(age), _nbChild(nbChild)
{
	std::cout << "Constructor called" << std::endl;
}

Data::Data(const Data &data)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = data;
}

Data::~Data(void)
{
	std::cout << "Destructor called" << std::endl;
}

Data	&Data::operator=(const Data &data)
{
	if (this == &data)
		return (*this);
	this->_age = data.getAge();
	this->_nbChild = data.getNbChild();
	return (*this);
}

unsigned int	Data::getAge(void)const
{
	return (this->_age);
}

unsigned int	Data::getNbChild(void)const
{
	return (this->_nbChild);
}
