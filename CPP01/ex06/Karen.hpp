/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:36:43 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/26 09:01:06 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen {

	public:
		Karen( void );
		~Karen( void );
		int complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	
	typedef struct	s_lookup {
		std::string str;
		void		(Karen::*f)();
	}				t_lookup;
};

#endif