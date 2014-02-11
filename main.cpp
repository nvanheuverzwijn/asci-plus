#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <boost/program_options.hpp>

using namespace std;

int main(int argc, char* argv[])
{

    int increment;
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
            boost::program_options::value<int>(&increment)->default_value(1),
            ": the increment that will be added to each character of the passed string"
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
        return 1;
    }

    if(input_string.length() != 0)
    {
        for (std::string::iterator i = input_string.begin(); i != input_string.end(); i++)
        {
            cout << ((char)(*i + increment));
        }
        cout << "\n";
    }

    return 0;
}
