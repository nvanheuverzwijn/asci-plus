#include "StringProcessor.hpp"

StringProcessor::StringProcessor()
{
}

StringProcessor::~StringProcessor()
{
}

std::string StringProcessor::process()
{
    std::string da_input = this->getInput();
    // get behaviors and executes them

    this->setOutput("");
    return this->getOutput();
}

std::string StringProcessor::getInput()
{
    return this->input;
}
void StringProcessor::setInput(std::string value)
{
    this->input = value;
}

std::string StringProcessor::getOutput()
{
    return this->output;
}
void StringProcessor::setOutput(std::string value)
{
    this->output = value;
}
