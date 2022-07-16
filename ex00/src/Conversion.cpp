/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:30:53 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 03:26:33 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.class.hpp"

Conversion::Conversion(const std::string av)  : _target(av)
{
	std::cout << "Constructor called for " << av << "." << std::endl;

	this->_type = this->checkVar();
	std::cout << this->_type << std::endl;
}

Conversion::~Conversion(void)
{
	std::cout << "Destructor called." << std::endl;
}

std::string	Conversion::checkVar(void)const 
{
	if (this->_target.empty())
		throw Conversion::StringEmpty();
	if (this->_target.size() == 1 && (this->_target[0] > 47 && this->_target[0] < 58))
		return ("int");
	else if (this->_target.size() == 1 && (this->_target[0] > 32 && this->_target[0] < 127))
		return ("char");
	else if (this->_target.find_first_not_of("0123456789") == std::string::npos)
		return ("int");
	std::cout << "HEHE" << std::endl;
	return ("IDK");
}
