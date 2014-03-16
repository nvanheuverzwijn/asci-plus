#ifndef UNSUPPORTED_CHARACTER_SET_EXCEPTION_H
#define UNSUPPORTED_CHARACTER_SET_EXCEPTION_H

#include <string>
#include "../enums/CharacterSetEnum.hpp"
#include "RuleException.hpp"

class UnsupportedCharacterSetException: public RuleException
{
    public:
        UnsupportedCharacterSetException(CharacterSetEnum character_set, std::string message);
        CharacterSetEnum getCharacterSet();
        std::string getCharacterSetAsString();
    protected:
        CharacterSetEnum character_set;
        void setCharacterSet(CharacterSetEnum value);
};

#endif
