/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:10:56 by             #+#    #+#             */
/*   Updated: 2024/09/03 10:43:59 by            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _gradeSign(150), _gradeExec(150), _signed(0) {}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(0)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &cpy) : _name(cpy.getName()), _gradeSign(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec()), _signed(cpy._signed)
{}

AForm &AForm::operator=(const AForm &cpy)
{
	if (this == &cpy)
		return (*this);
	return (*this);
}

AForm::~AForm() {}

std::string	AForm::getName() const
{
	return (_name);
}

int	AForm::getGradeExec() const
{
	return (_gradeExec);
}

int	AForm::getGradeSign() const
{
	return (_gradeSign);
}

bool	AForm::isSigned() const
{
	return (_signed);
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _gradeSign)
		std::cout << b.getName() << " couldn't sign " << _name << " because bureaucrat's grade is too low." << std::endl;
	else if (_signed)
		std::cout << b.getName() << " couldn't sign " << _name << " because it's already signed." << std::endl;
	else
	{
		std::cout << b.getName() << " signed " << _name << std::endl;
		_signed = 1;
	}
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low!");
};

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high!");
};

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
};

std::ostream	&operator<<(std::ostream &stream, AForm const &cpy)
{
	stream << cpy.getName() << " can be signed at grade " << cpy.getGradeSign() << ", executed at grade " << cpy.getGradeExec();
	if (cpy.isSigned())
		stream << ", is signed.";
	else
		stream << ", is not signed.";
	return (stream);
}
