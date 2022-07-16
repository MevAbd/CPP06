/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:27:02 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 02:33:25 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.class.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "My program needs one argument." << std::endl;
		return (1);
	}
//	try
//	{
		Conversion conv(av[1]);
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
	return (0);
}
