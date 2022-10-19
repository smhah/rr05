#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(std::string const & name, std::string const & effect) : _name(name), _effect(effect)
{
}

ASpell::ASpell(ASpell const & other)
{
    *this = other;
}

ASpell & ASpell::operator=(ASpell const & other)
{
    _effect = other._effect;
    _name = other._name;
    return *this;
}

ASpell::~ASpell()
{
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
