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

class Conversion
{
	private :
				int		_int;
				char	_char;
				double	_double;
				float	_float;
				
	public :
			Conversion(const std::string av);
			~Conversion(void);
};

#endif
