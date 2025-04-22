/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:26 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:47:05 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
class AForm;

Bureaucrat::Bureaucrat() : _name("Default Bureau"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy.getName()), _grade(cpy.getGrade())
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
	_grade = cpy.getGrade();
	return (*this);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low!");
};

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high!");
};

void	Bureaucrat::decrement()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::increment()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void  Bureaucrat::signForm(AForm &f)
{
	f.beSigned(*this);
}

void	Bureaucrat::executeForm(const AForm &form)
{
	form.execute(*this);
}

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &cpy)
{
	stream << cpy.getName() << ", bureaucrat grade " << cpy.getGrade() << ".";
	return (stream);
}
