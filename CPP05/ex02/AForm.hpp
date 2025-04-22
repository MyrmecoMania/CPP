/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:10:36 by enorie            #+#    #+#             */
/*   Updated: 2024/09/03 10:41:19 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm	{

	protected:
		const std::string	_name;
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_signed;
		std::string			_target;
	public:
		AForm();
		AForm(std::string name, int gradeSign, int gardeExec);
		AForm(const AForm &cpy);
		virtual ~AForm();
		AForm &operator=(const AForm &cpy);


		void			beSigned(Bureaucrat &b);
    virtual void	execute(Bureaucrat const & executor) const = 0;
		std::string		getName() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		bool			isSigned() const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

  class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &stream, AForm const &cpy);
