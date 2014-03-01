#ifndef RULE_EXCEPTION_H
#define RULE_EXCEPTION_H

#include <string>
#include "CombulatorException.hpp"

class RuleException: public CombulatorException
{
    public:
        RuleException(std::string message);
        virtual ~RuleException() throw();
};

#endif
