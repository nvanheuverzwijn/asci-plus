#include <string>
#include "RuleException.hpp"
#include "CombulatorException.hpp"

RuleException::RuleException(std::string message): CombulatorException(message)
{
}

RuleException::~RuleException() throw()
{
}
