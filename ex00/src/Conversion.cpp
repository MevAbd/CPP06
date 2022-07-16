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

Conversion::Conversion(const std::string av)
{
	std::cout << "Constructor called for " << av << "." << std::endl;
}

Conversion::~Conversion(void)
{
	std::cout << "Destructor called." << std::endl;
}
