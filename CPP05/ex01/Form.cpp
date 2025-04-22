/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:10:56 by enorie            #+#    #+#             */
/*   Updated: 2024/10/08 13:02:05 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _gradeSign(150), _gradeExec(150), _signed(0) {}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(0)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &cpy) : _name(cpy.getName()), _gradeSign(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec()), _signed(cpy._signed)
{}

Form &Form::operator=(const Form &cpy)
{
	if (this == &cpy)
		return (*this);
	return (*this);
}

Form::~Form() {}

std::string	Form::getName() const
{
	return (_name);
}

int	Form::getGradeExec() const
{
	return (_gradeExec);
}

int	Form::getGradeSign() const
{
	return (_gradeSign);
}

bool	Form::isSigned() const
{
	return (_signed);
}

void	Form::beSigned(Bureaucrat &b)
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

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low!");
};

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high!");
};

std::ostream	&operator<<(std::ostream &stream, Form const &cpy)
{
	stream << cpy.getName() << " can be signed at grade " << cpy.getGradeSign() << ", executed at grade " << cpy.getGradeExec();
	if (cpy.isSigned())
		stream << ", is signed.";
	else
		stream << ", is not signed.";
	return (stream);
}
