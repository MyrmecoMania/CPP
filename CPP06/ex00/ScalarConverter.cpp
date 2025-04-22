/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:50:25 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 11:30:49 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
	*this = cpy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &cpy)
{
	if (this == &cpy)
		return (*this);
	return (*this);
}

static	bool	isSpecial( std::string literal, std::string specials[] )
{
	for(int i = 0; i < 6; i++)
		if (specials[i] == literal)
			return true;
	return false;
}

void	ScalarConverter::convert( std::string literal )
{
	std::string	fchar;
	int			fint = 0;
	float		ffloat = 0;
	double		fdouble = 0;
	std::string	specials[] = {"nan", "-inf", "+inf", "nanf", "+inff", "-inff"};
	if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		fchar = literal[0];
		fint = static_cast<int>(fchar[0]);
		ffloat = static_cast<float>(fchar[0]);
		fdouble = static_cast<double>(fchar[0]);
	}
	else
	{
		fint = std::atoi(literal.c_str());
		if (fint > 0 && fint < 256 && std::isprint(fint))
			fchar = static_cast<char>(fint);
		else if (isSpecial(literal, specials))
			fchar = "impossible";
		else
			fchar = "Non displayable";
    if (literal[literal.length() - 1] == 'f')
    {
      ffloat = std::atof(literal.c_str());
      fdouble = static_cast<double>(ffloat);
    }
    else
    {
     fdouble = std::atof(literal.c_str());
     ffloat = static_cast<float>(fdouble);
    }
	}
	if (fchar.length() == 1)
		std::cout << "char: '" << fchar << "'" << std::endl;
	else
		std::cout << "char: " << fchar << std::endl;
  if (fchar == "impossible")
	  std::cout << "int: " << "impossible" << std::endl;
  else
    std::cout << "int: " << fint << std::endl;
  if (ffloat - static_cast<int>(ffloat) == 0)
  {
	  std::cout << "float: " << ffloat << ".0f" << std::endl;
	  std::cout << "double: " << fdouble << ".0" << std::endl;
  }
  else
   {
	  std::cout << "float: " << ffloat << "f" << std::endl;
	  std::cout << "double: " << fdouble << std::endl;
  }
}
