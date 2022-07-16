/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:26:49 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 03:35:35 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_CLASS_HPP
# define CONVERSION_CLASS_HPP

# include <iostream>
# include <exception>

class Conversion
{
	private :
			const std::string	_target;
			std::string	_type;
	public :
			Conversion(const std::string av);
			~Conversion(void);

			std::string	checkVar(void) const;

			class StringEmpty : public std::exception
			{
				const char *what() const throw() {return "Need not empty argument.";}
			};
};

#endif
