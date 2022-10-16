#pragma once
#include <iostream>

class Warlock {
    public:
        Warlock(std::string const & name, std::string const & title);
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const & title);
        void introduce() const;
        ~Warlock();
    private:
        std::string _name;
        std::string _title;
        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
};