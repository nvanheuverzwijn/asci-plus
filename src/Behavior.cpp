#include "Behavior.hpp"

Behavior::Behavior()
{
}

Behavior::~Behavior()
{
}

//Properties

ProcessorStringData* Behavior::getData()
{
    return this->data;
}
void Behavior::setData(ProcessorStringData* value)
{
    this->data = value;
}

//Method

std::string Behavior::execute()
{
    return "";
}


