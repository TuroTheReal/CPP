#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string const	_name;
		unsigned int		_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();

		Bureaucrat&		operator=(Bureaucrat const& rhs);

		std::string		getName() const;
		unsigned int	getGrade() const;

		void			downGrade();
		void			upGrade();

		void			signForm(Form& form);

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
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs);

#endif