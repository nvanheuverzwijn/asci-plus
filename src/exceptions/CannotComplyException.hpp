#ifndef CANNOT_COMPLY_EXCEPTION_H
#define CANNOT_COMPLY_EXCEPTION_H

#include <string>
#include "RuleException.hpp"

class CannotComplyException: public RuleException
{
    public:
        CannotComplyException(std::string message);
};

#endif
