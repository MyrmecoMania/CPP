/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:49:54 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:57:36 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw Bureaucrat::GradeTooLowException();
	else if (!isSigned())
		throw AForm::FormNotSignedException();
    std::ofstream fs1(std::string(_target + "_shrubbery").c_str());
	for (int j = 0; j < 3; j++)
	{
		fs1 <<
		"                     . . ." << std::endl <<
		"              .        .  .     ..    ." << std::endl <<
		"           .                 .         .  ." << std::endl <<
		"                            ." << std::endl <<
		"                          .                .." << std::endl <<
		"           .          .            .              ." << std::endl <<
		"          .            '.,        .               ." << std::endl <<
		"          .              'b      *" << std::endl <<
		"           .              '$    #.                .." << std::endl <<
		"           .    .           $:   #:               ." << std::endl <<
		"         ..      .  ..      *#  @):        .   . ." << std::endl <<
		"                       .     :@,@):   ,.**:'   ." << std::endl <<
		"          .      .,         :@@*: ..**'      .   ." << std::endl <<
		"                   '#o.    .:(@'.@*'  ." << std::endl <<
		"           .  .       'bq,..:,@@*'   ,*      .  ." << std::endl <<
		"                     ,p$q8,:@)'  .p*'      ." << std::endl <<
		"               .     '  . '@@Pp@@*'    .  ." << std::endl <<
		"                .  . ..    Y7'.'     .  ." << std::endl <<
		"                          :@):." << std::endl <<
		"                        .:@:'." << std::endl <<
		"                      .::(@:." << std::endl <<
		std::endl;
	}
	fs1.close();
	std::cout << executor.getName() << " executed " << _name << "." << std::endl;

}
