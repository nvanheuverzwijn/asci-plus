#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <boost/program_options.hpp>
#include "Combulator.hpp"
#include "rules/Incrementor.hpp"
#include "rules/Multiplicator.hpp"

using namespace std;

int main(int argc, char* argv[])
{

    int increment;
    int multiply;
    string input_string;
    boost::program_options::variables_map arguments;
    boost::program_options::options_description options_descriptor("Allowed options");

    options_descriptor.add_options()
        (
            "help,h",
            ": produce this help message"
        )
        (
            "increment,i",
            boost::program_options::value<int>(&increment)->default_value(0),
            ": the increment that will be added to each character of the passed string"
        )
        (
            "multiply,m",
            boost::program_options::value<int>(&multiply)->default_value(1),
            ": the multiplier with which each character shall be multiplied"
        )
        (
            "input-string",
            boost::program_options::value<string>(&input_string)->default_value(""),
            ": a string that will be incremented"
        )
    ;

    boost::program_options::positional_options_description p;
    p.add("input-string", -1);


    boost::program_options::store(
        boost::program_options::command_line_parser(argc, argv).options(options_descriptor).allow_unregistered().positional(p).run(),
        arguments
    );
    boost::program_options::notify(arguments);


    if(arguments.count("help"))
    {
        cout << options_descriptor << "\n";
    }
    else if(input_string.length() != 0)
    {
        Combulator* c = new Combulator(input_string);
        if(arguments.count("increment"))
        {
            Incrementor* incrementor = new Incrementor(increment);
            c->addRule(incrementor); 
        }
        if(arguments.count("multiply"))
        {
            Multiplicator* multiplicator = new Multiplicator(multiply);
            c->addRule(multiplicator); 
        }
        cout << c->apply();
    }
    else
    {
        cout << options_descriptor << "\n";
    }
    return 0;
}
