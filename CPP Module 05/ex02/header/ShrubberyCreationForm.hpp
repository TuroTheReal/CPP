#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private :
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& rhs);

		void	execute(Bureaucrat const & executor) const;
};

#endif