#ifndef RULE_H
#define RULE_H

#include "enums/CharacterSetEnum.hpp"
#include <string>

class Rule
{
    public:
        Rule();
        virtual ~Rule();

        std::string apply(std::string value);

        void setCharacterSet(CharacterSetEnum value);
        CharacterSetEnum getCharacterSet();
    protected:
        CharacterSetEnum character_set;

        virtual std::string doApply(std::string value) = 0;
};

#endif
