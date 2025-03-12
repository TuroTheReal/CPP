#pragma once

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		std::string const		_name;
		bool					_isSigned;
		unsigned int const		_rGradeSign;
		unsigned int const		_rGradeExec;

	public:
		AForm();
		AForm(std::string name, unsigned int isSigned, \
			unsigned int rGradeSign, unsigned int rGradeExec);
		AForm(AForm const& copy);
		virtual ~AForm();

		AForm&	operator=(AForm const& rhs);

		std::string const	getName() const { return _name; }
		bool				getIsSigned() const { return _isSigned; }
		unsigned int		getRGradeSign() const { return _rGradeSign; }
		unsigned int		getRGradeExec() const { return _rGradeExec; }

		void				beSigned(Bureaucrat& Bureau);
		void				beExecuted(Bureaucrat const & Bureau) const;
		virtual void		execute( Bureaucrat const & executor ) const = 0;

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw()
				{ return "Grade is too low";}
		};
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw()
				{ return "Grade is too high";}
		};
		class AlreadySigned : public std::exception{
			public:
				virtual const char* what() const throw()
				{ return "This form is AlreadySigned";}
		};
};

std::ostream&	operator<<(std::ostream& o, AForm const& rhs);

#endif
