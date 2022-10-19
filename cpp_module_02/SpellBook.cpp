#include "SpellBook.hpp"

SpellBook::SpellBook()
{   
}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator itb = _map.begin();
    std::map<std::string, ASpell *>::iterator ite = _map.end();
    while(itb != ite)
    {
        delete(itb->second);
        itb++;
    }
    _map.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
    if(spell)
        _map.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const & spell)
{
    std::map<std::string, ASpell*>::iterator it = _map.find(spell);
    if(it != _map.end())
       delete(it->second);
    _map.erase(spell);
}

ASpell* SpellBook::createSpell(std::string const & spell)
{
    std::map<std::string, ASpell*>::iterator it = _map.find(spell);
    if(it != _map.end())
       return(_map[spell]);
    return NULL;
}