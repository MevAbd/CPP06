/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:05:07 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 17:26:55 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A.class.hpp"
# include "B.class.hpp"
# include "C.class.hpp"
# include <ctime>
# include <cstdlib>
# include <iostream>

Base	*generate(void)
{
	srand(time(NULL));

	int	i = rand() % 3;
	if (i == 1)
		return (new A());
	if (i == 2)
		return (new B());
	return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main(void)
{
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}
