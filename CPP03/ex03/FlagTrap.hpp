#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FlagTrap: virtual public ClapTrap{

	public:
		FlagTrap();
		FlagTrap(std::string newName);
		~FlagTrap();
		void highFivesGuys();
};

#endif