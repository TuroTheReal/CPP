#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const		_name;
		bool					_isSigned;
		unsigned int const		_rGradeSign;
		unsigned int const		_rGradeExec;

	public:
		Form();
		Form(std::string name, unsigned int isSigned, \
			unsigned int rGradeSign, unsigned int rGradeExec);
		Form(Form const& copy);
		~Form();

		Form&	operator=(Form const& rhs);

		std::string const	getName() const { return _name; }
		bool				getIsSigned() const { return _isSigned; }
		unsigned int		getRGradeSign() const { return _rGradeSign; }
		unsigned int		getRGradeExec() const { return _rGradeExec; }

		void				beSigned(Bureaucrat& Bureau);

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
				{ return "this form is already signed";}
		};
};

std::ostream&	operator<<(std::ostream& o, Form const& rhs);

#endif
