#ifndef STRING_PROCESSOR_H
#define STRING_PROCESSOR_H

#include <string>

class StringProcessor
{
    public:
        StringProcessor();
        ~StringProcessor();
        std::string process();

        std::string getInput(); 
        void setInput(std::string value);
        std::string getOutput();
    protected:
        std::string input;
        std::string output;

        void setOutput(std::string value);
    private:
};

#endif
