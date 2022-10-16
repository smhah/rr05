#include "ATarget.hpp"

ATarget::ATarget(std::string const & type) : _type(type)
{
    std::cout<< type <<": This looks like my type"<<std::endl;
}


ATarget::~ATarget()
{
    std::cout<< _type <<": My Type here is done!"<<std::endl;
}


std::string const & ATarget::getType(void) const
{
    return _type;
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
    std::cout << _type << " has been " << spell.getEffect() << std::endl;
}

ATarget * ATarget::clone() const
{

}