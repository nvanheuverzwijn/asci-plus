#ifndef COMBULATOR_EXCEPTION_H
#define COMBULATOR_EXCEPTION_H

#include <exception>
#include <string>

class CombulatorException : public std::exception
{
    public:
        CombulatorException(std::string msg);
        ~CombulatorException() throw();
        virtual std::string what(); 
        std::string getMessage();
    protected:
        std::string message;
        void setMessage(std::string value);
};

#endif
