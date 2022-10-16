#include "ASpell.hpp"

ASpell::ASpell(std::string const & name, std::string const & effect) : _name(name), _effect(effect)
{
    std::cout<<name<<": This looks like another boring Spelly day."<<std::endl;
}


ASpell::~ASpell()
{
    std::cout<<_name<<": My job Spelly here is done!"<<std::endl;
}


std::string const & ASpell::getName(void) const
{
    return _name;
}


std::string const & ASpell::getEffect(void) const
{
    return _effect;
}

void	ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this);
}

ASpell * ASpell::clone() const
{

}