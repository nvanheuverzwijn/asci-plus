#include "../enums/CharacterSetEnum.hpp"
#include "UnsupportedCharacterSetException.hpp"

UnsupportedCharacterSetException::UnsupportedCharacterSetException(CharacterSetEnum character_set, std::string message): RuleException(message)
{
    this->setCharacterSet(character_set);
}

void UnsupportedCharacterSetException::setCharacterSet(CharacterSetEnum value)
{
    this->character_set = value;
}

CharacterSetEnum UnsupportedCharacterSetException::getCharacterSet()
{
    return this->character_set;
}
std::string UnsupportedCharacterSetException::getcharacterSetAsString()
{
    return CharacterSetNames[this->getCharacterSet()];
}
