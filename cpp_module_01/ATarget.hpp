#pragma once
#include <iostream>
#include "ASpell.hpp"

class ATarget {
    public:
        ATarget(std::string const & type);
        virtual std::string const & getType() const;
        virtual ATarget * clone() const = 0;
        ~ATarget();
        void getHitBySpell(ASpell const & spell) const;
    protected:
        std::string _type;
        ATarget();
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);
};