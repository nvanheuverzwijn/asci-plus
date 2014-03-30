#include "Combulator.hpp"

std::string Combulator::getVictim()
{
    return this->victim;
}
void Combulator::setVictim(std::string value)
{
    this->victim = value;
}

Combulator::Combulator(std::string victim)
{
    this->setVictim(victim);
}
Combulator::~Combulator()
{
    this->getRules().clear();
}

std::list<Rule*>& Combulator::getRules()
{
    return this->rules;
}
void Combulator::addRule(Rule* rule)
{
    this->getRules().push_back(rule);
}
void Combulator::removeRule(Rule& rule)
{
    this->getRules().clear();
}
std::string Combulator::apply()
{
    std::string result = this->getVictim();
    for (std::list<Rule*>::iterator it = this->getRules().begin(); it != this->getRules().end(); it++)
    {
        result = (*it)->apply(result);
    }
    return result;
}