/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:55:33 by ygille            #+#    #+#             */
/*   Updated: 2025/02/24 11:29:16 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <cstdlib>

# include "Contact.hpp"
# include "PhoneBook.hpp"

# define M_CLEAR		"\033[2J\033[1;1H"
# define M_WELCOME		"Welcome to My Awesome PhoneBook !"
# define M_CHOOSE_OP 	"What to do ? (ADD, SEARCH, EXIT)"
# define M_PROMPT		"->"
# define M_GOODBYE		"Thanks for using My Awesome PhoneBook !"

void	choose_op(PhoneBook *book);
void	op_add(PhoneBook *book);
void	op_search(PhoneBook *book);

#endif