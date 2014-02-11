asci+
=====

The project was originally supposed to be called ascii+ but a wild typo appeared and I couldn't defeat it.

Depedency
---------

This project depends on the c++ Boost library program_options version 1.53.0: http://www.boost.org/

You can find the boost library using your package manager: `apt-cache search libboost-program-options`

Compiling
---------


`g++ -Wall -fexceptions  -O2 -c main.cpp -o main.o`

`g++ -o asci+ main.o -s -lboost_program_options`

Usage
-----

Help options:
`./asci+ --help`

output:

<pre>
Allowed options:
  --help                      : produce this help message
  -i [ --increment ] arg (=1) : the increment that will be added to each 
                              character of the passed string
  --input-string arg          : a string that will be incremented
</pre>

Using it:
`./asci+ -i 1 "test"`

output:

`uftu`


