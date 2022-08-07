// A translation unit is the basic unit of compilation in C++.
// .hpp - .cpp
// If we declare a function in a seperate file, we'll increse the number of translation unit.
// '#' -> preprocessor directive
// '#pragma once' -> only include this file once in a one translation unit.
// '#pragma once' prevents include chain, redefining something...'
// '#pragma once' > ifndef... 

/*
In .hpp files:

#ifndef _LOG_H
#define _LOG_H
.
.
. Some function declaration or struct definition
.
.
#endif

*/

