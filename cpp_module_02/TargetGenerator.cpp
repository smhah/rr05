#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{   
}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator itb = _map.begin();
    std::map<std::string, ATarget *>::iterator ite = _map.end();
    while(itb != ite)
    {
        delete(itb->second);
        itb++;
    }
    _map.clear();
}

void TargetGenerator::learnTargetType(ATarget *spell)
{
    if(spell)
        _map.insert(std::pair<std::string, ATarget *>(spell->getType(), spell->clone()));
}

void TargetGenerator::forgetTargetType(std::string const & spell)
{
    std::map<std::string, ATarget*>::iterator it = _map.find(spell);
    if(it != _map.end())
       delete(it->second);
    _map.erase(spell);
}

ATarget* TargetGenerator::createTarget(std::string const & spell)
{
    std::map<std::string, ATarget*>::iterator it = _map.find(spell);
    if(it != _map.end())
       return(_map[spell]);
    return NULL;
}