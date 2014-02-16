#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include <string>
#include "ProcessorStringData.hpp"

class Behavior
{
    public:
       Behavior();
       ~Behavior();
        virtual std::string execute();

        ProcessorStringData* getData();
        void setData(ProcessorStringData* value);
    protected:
        ProcessorStringData* data;
};

#endif

