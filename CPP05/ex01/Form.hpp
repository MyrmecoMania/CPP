/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:10:36 by enorie            #+#    #+#             */
/*   Updated: 2024/09/03 10:40:34 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form	{

	private:
		const std::string	_name;
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_signed;
	public:
		Form();
		Form(std::string name, int gradeSign, int gardeExec);
		Form(const Form &cpy);
		~Form();
		Form &operator=(const Form &cpy);


		void		beSigned(Bureaucrat &b);
		std::string	getName() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		bool		isSigned() const;

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

};

std::ostream	&operator<<(std::ostream &stream, Form const &cpy);
