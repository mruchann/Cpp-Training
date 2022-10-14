#include <iostream>

// use `m_` when naming member variables in a class, you can differentiate better from local variables.
// first use the functions and variables and fill the gaps. -> Like API design
// use more than one private or public keyword in a class if it increases the readability.

class Log {
public:
    /* this is very perfect candidate for using enums, we have integers for level state.
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
    */
   enum Level 
   {
        LevelError, LevelWarning, LevelInfo // 0, 1, 2 respectively
   };
private:
    // if you make m_LogLevel int, you cannot restrict the values it can get
    // int m_LogLevel = Info; // at first, everything will be printed.
    Level m_Level = LevelInfo; // restricted to 0, 1, 2

public:
    void SetLevel(Level level)
    {
        m_Level = level;
    }
    void Error(const char* message)
    {
        if(m_Level >= LevelError) // you can still do comparison
            std::cout << "[ERROR]: " << message << std::endl;
    }
    void Warn(const char* message)
    {
        if(m_Level >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    void Info(const char* message)
    {
        if(m_Level >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    // this is not an enum class, it's not namespace. Just for now treat it as int.
    // value in enum and function have same name, problem! There is no solution, change the variable names in enum.
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    return 0;
}