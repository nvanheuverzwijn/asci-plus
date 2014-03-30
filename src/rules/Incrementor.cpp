#include "Incrementor.hpp"
#include "../exceptions/UnsupportedCharacterSetException.hpp"

int Incrementor::getIncrement()
{
    return this->increment;
}
void Incrementor::setIncrement(int value)
{
    this->increment = value;
}

Incrementor::Incrementor(int increment): Rule()
{
    this->setIncrement(increment);
}
Incrementor::~Incrementor(){}

std::string Incrementor::doApply(std::string value)
{
    if(this->getCharacterSet() == CharacterSetEnum::UTF8)
    {
        throw UnsupportedCharacterSetException(CharacterSetEnum::UTF8, "UTF8 character set has not been implemented yet.");
    }

    std::string new_value("");
    for (std::string::iterator i = value.begin(); i != value.end(); i++)
    {
        int character = 0;
        character = *i + this->getIncrement();
        while(character > 128)
        {
            character -= 128;
        }
        new_value += ((char)character);
    }
    return new_value;
}
