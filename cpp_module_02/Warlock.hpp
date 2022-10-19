#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock {
	public:
		Warlock(std::string const & name, std::string const & title);
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const & title);
		void introduce() const;
		void learnSpell(ASpell * spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, ATarget const & target);
		~Warlock();
	private:
		std::string _name;
		std::string _title;
		SpellBook _book;
		std::map<std::string, ASpell *> _map;
		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);
};