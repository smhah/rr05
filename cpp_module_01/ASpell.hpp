#pragma once
#include <iostream>
#include "ATarget.hpp"

class ASpell {
	public:
		ASpell(std::string const & name, std::string const & effect);
		std::string const & getName() const;
		std::string const & getEffect() const;
		virtual ASpell * clone() const = 0;
		void	launch(ATarget const & target) const;
		~ASpell();
	protected:
		std::string _name;
		std::string _effect;
		ASpell();
		ASpell(ASpell const &other);
		ASpell &operator=(ASpell const &other);
};