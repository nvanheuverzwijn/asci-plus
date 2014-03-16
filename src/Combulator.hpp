#ifndef COMBULATOR_H
#define COMBULATOR_H

#include <string>
#include <list>
#include "Rule.hpp"


class Combulator
{
    public:
        Combulator(std::string victim = "");
        ~Combulator();

        std::string getVictim();
        void setVictim(std::string value);

        std::list<Rule*> getRules();
        void addRule(Rule* rule);
        void removeRule(Rule& rule);
        std::string apply();
    protected:
        std::string victim;
        std::list<Rule*> rules;
};
#endif
