/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:31:41 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/16 16:49:09 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_CLASS_HPP
# define DATA_CLASS_HPP

# include <iostream>
# include <stdint.h>
class Data
{
	private :
				unsigned int	_age;
				unsigned int	_nbChild;
	public :
				Data(void);
				Data(unsigned int age, unsigned int nbChild);
				Data(const Data &data);
				virtual ~Data(void);

				unsigned int	getAge(void)const;
				unsigned int	getNbChild(void)const;
			
				Data	&operator=(const Data &Data);
};

#endif
