/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:35:50 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/20 18:35:51 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl lev;

	lev.complain("DEBUG");
	lev.complain("INFO");
	lev.complain("WARNING");
	lev.complain("ERROR");
    return 0;
}