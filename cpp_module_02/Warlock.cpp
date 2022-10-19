#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title) : _name(name), _title(title)
{
    std::cout<<name<<": This looks like another boring day."<<std::endl;
}


Warlock::~Warlock()
{
    std::cout<<_name<<": My job here is done!"<<std::endl;
}


std::string const & Warlock::getName(void) const
{
    return _name;
}


std::string const & Warlock::getTitle(void) const
{
    return _title;
}


void Warlock::setTitle(std::string const & title)
{
    _title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " <<_name << ", "<< _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    _book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
    _book.forgetSpell(spell); 
}

void Warlock::launchSpell(std::string spell_name, ATarget const & target)
{
    ATarget const *test = 0;
    if(test == &target)
        return;
    ASpell * spell = _book.createSpell(spell_name);
    if(spell)
    {
        spell->launch(target);
    }
}