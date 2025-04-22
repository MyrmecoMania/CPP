/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:32 by enorie            #+#    #+#             */
/*   Updated: 2024/07/06 15:04:13 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	print_error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int	replace(std::string in, std::string s1, std::string s2)
{
	std::fstream	fs1;
	std::fstream	fs2;
	std::string		line;
	std::string		temp;
	size_t			where;

	fs1.open(in.c_str(), std::fstream::in);
	if (!fs1)
		return (print_error("Infile does not exist"));
	fs2.open(std::string(in + ".replace").c_str(), std::fstream::out);
	if (!fs2)
		return (print_error("Could not create replace file"));
	while (getline(fs1, line))
	{
		while ((where = line.find(s1, 0)) != std::string::npos)
		{
			temp = line.substr(where + s1.size());
			line.erase(where, line.size());
			line += s2 + temp;  
		}
		fs2 << line;
		if (!fs1.eof())
			fs2 << std::endl;
	}
	fs1.close();
	fs2.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		return (replace(argv[1], argv[2], argv[3]));
	else
		return (print_error("Wrong number of args"));
};
