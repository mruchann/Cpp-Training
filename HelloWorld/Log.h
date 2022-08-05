#if 1 // instructions to the compiler 

void Log(const char* _ ); // only type matters in declaration.

#endif

// don't put function definitions in header files, if you include them more than one, you'll get an error.
// put the function declaration into the .h file, then include it when needed.
// then put the function definition into one of the .cpp files. Linker will handle it.
