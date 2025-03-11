#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private :
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(RobotomyRequestForm const& rhs);

		void	execute(Bureaucrat const & executor) const;
};

#endif