#ifndef INCREMENTOR_H
#define INCREMENTOR_H

#include "../Rule.hpp"
#include <string>

class Incrementor: public Rule
{
    public:
        Incrementor(int increment = 1);
        virtual ~Incrementor();
        int getIncrement();
        void setIncrement(int value);
    protected:
        int increment;
        virtual std::string doApply(std::string);
};

#endif
