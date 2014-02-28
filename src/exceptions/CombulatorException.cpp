#include <string>
#include <exception>
#include "CombulatorException.hpp"

CombulatorException::CombulatorException(std::string msg): std::exception()
{
    
}

CombulatorException::~CombulatorException() throw()
{
}

std::string CombulatorException::getMessage()
{
    return this->message;
}
void CombulatorException::setMessage(std::string value)
{
    this->message = value;
}


std::string CombulatorException::what()
{
    return this->getMessage();
}
