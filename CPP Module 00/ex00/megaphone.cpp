#include <iostream>

int	main(int ac, char **av){
	int	i;
	int	j;

	if (ac == 1)
		return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0;
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (std::islower(av[i][j]))
				av[i][j] = std::toupper(av[i][j]);
			j++;
		}
		if (i == ac - 1)
			std::cout << av[i];
		else
			std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}