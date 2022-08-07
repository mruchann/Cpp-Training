#include <iostream> // includes std object.
void Log(const char* _ ); // only type matters in declaration.

// a function should be declared before it is used.

// don't put function definitions in header files, if you include them more than one, you'll get an error.
// put the function declaration into the .hpp file, then include it when needed.
// then put the function definition into one of the .cpp files. Linker will handle it.
