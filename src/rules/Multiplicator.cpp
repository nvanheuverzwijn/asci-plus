#include "Multiplicator.hpp"
#include "../exceptions/UnsupportedCharacterSetException.hpp"

int Multiplicator::getMultiplier()
{
    return this->multiplier;
}
void Multiplicator::setMultiplier(int value)
{
    this->multiplier = value;
}

Multiplicator::Multiplicator(int multiplier): Rule()
{
    this->setMultiplier(multiplier);
}
Multiplicator::~Multiplicator(){}

std::string Multiplicator::doApply(std::string value)
{
    if(this->getCharacterSet() == CharacterSetEnum::UTF8)
    {
        throw UnsupportedCharacterSetException(CharacterSetEnum::UTF8, "UTF8 character set has not been implemented yet.");
    }

    std::string new_value("");
    for (std::string::iterator i = value.begin(); i != value.end(); i++)
    {
        int character = 0;
        character = *i * this->getMultiplier();
        while(character > 128)
        {
            character -= 128;
        }
        new_value += ((char)character);
    }
    return new_value;
}
