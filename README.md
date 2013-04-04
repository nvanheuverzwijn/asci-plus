asci+
=====

The project was originally supposed to be called ascii+ but a wild typo appeared and I couldn't defeat it.

Depedency
---------

This project depends on the c++ Boost library program_options version 1.53.0: http://www.boost.org/

You can find the boost library using your package manager: `apt-cache search libboost-program-options`

Compiling
---------


`g++ -Wall -fexceptions  -O2 -I/usr/local/boost_1_53_0/  -c main.cpp i-o main.o`
`g++ -L/usr/local/boost_1_53_0/stage/lib/  -o asci+ main.o   -s  -lboost_program_options`

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


