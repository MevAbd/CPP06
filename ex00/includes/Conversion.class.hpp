/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:26:49 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 16:22:52 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_CLASS_HPP
# define CONVERSION_CLASS_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
# include <limits>

class Conversion
{
	private :
			char				_char;
			int					_int;
			std::string			_type;
			float				_float;
			double				_double;	
			const std::string	_target;
	public :
			Conversion(void);
			Conversion(const std::string av);
			Conversion(const Conversion &rhs);
			~Conversion(void);

			int					getInt(void)const;

			char				getChar(void)const;

			double				getDouble(void)const;

			float				getFloat(void)const;

			void				convert(void);
			void				fromInt(void);
			void				fromChar(void);
			void				fromFloat(void);
			void				fromDouble(void);
			void				printChar(void)const;
			void				printInt(void)const;
			void				printFloat(void)const;
			void				printDouble(void)const;

			std::string			getType(void)const;
			std::string			checkVar(void) const;

			Conversion &operator=(const Conversion &rhs);
	
			class StringEmpty : public std::exception
			{
				const char *what() const throw() {return "Need not empty argument.";}
			};
			class BadType : public std::exception
			{
				const char *what() const throw() {return "Need char, int, float or double.";}
			};
};

#endif
