#ifndef MULTIPLICATOR_H
#define MULTIPLICATOR_H

#include "../Rule.hpp"
#include <string>

class Multiplicator: public Rule
{
    public:
        Multiplicator(int multiplier = 1);
        virtual ~Multiplicator();
        int getMultiplier();
        void setMultiplier(int value);
    protected:
        int multiplier;
        virtual std::string doApply(std::string);
};

#endif
