/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:57:54 by enorie            #+#    #+#             */
/*   Updated: 2024/07/05 14:25:24 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	std::string	str;
	if (argc > 1)
	{
		for (int i = 1; argv[i]; ++i)
		{
			str = argv[i];
			for (int i = 0; str[i]; ++i)
				std::cout << (char)toupper(str[i]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
