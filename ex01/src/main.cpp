/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:26:23 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 16:53:24 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.class.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		*data;
	uintptr_t	serialized;
	Data		*deserialized;

	data = new Data();
	std::cout << "data ptr = " << data << std::endl;
	std::cout << "age   = " << data->getAge() << std::endl;
	std::cout << "Child = " << data->getNbChild() << std::endl << std::endl;

	serialized = serialize(data);
	std::cout << "serialize(data ptr) = " << serialized << std::endl << std::endl;

	deserialized = deserialize(serialized);
	std::cout << "deserialize(data ptr) = " << deserialized << std::endl;
	std::cout << "age   = " << data->getAge() << std::endl;
	std::cout << "Child = " << data->getNbChild() << std::endl << std::endl;

	delete data;
	return (0);
}
