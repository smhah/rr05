#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook
{
    private:
        std::map<std::string, ASpell *> _map;
        SpellBook(SpellBook const & other);
        SpellBook & operator=(SpellBook const & other);
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell * spell);
        void forgetSpell(std::string const & spell);
        ASpell * createSpell(std::string const & spell);
};