#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private :
		std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(PresidentialPardonForm const& rhs);

		void	execute(Bureaucrat const & executor) const;
};

#endif