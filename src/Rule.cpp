#include "Rule.hpp"

void Rule::setCharacterSet(CharacterSetEnum value)
{
    this->character_set = value;
}
CharacterSetEnum Rule::getCharacterSet()
{
    return this->character_set;
}

Rule::Rule()
{
    this->setCharacterSet(CharacterSetEnum::ASCII);
}
Rule::~Rule(){ }

std::string Rule::apply(std::string value)
{
    return this->doApply(value);
}
