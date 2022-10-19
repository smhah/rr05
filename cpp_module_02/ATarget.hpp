#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    public:
        ATarget();
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);
        ATarget(std::string const & type);
        std::string const & getType() const;
        virtual ATarget * clone() const = 0;
        virtual ~ATarget();
        void getHitBySpell(ASpell const & spell) const;
    protected:
        std::string _type;
};