#pragma once
#include <iostream>
#include <string>
class Debug
{
private:
    static void Log(const char* format) // base function
    {
        std::cout << format;
    }

public:
    //Debug::Log("Yeet % Yoot % Yuut %, a %", "Potato", 5, v.GetValueAsString(), v2.GetValueAsString());

    template<typename T, typename... Targs>
    static void Log(const char* format, T value, Targs... args) // recursive variadic function
    {
        for (; *format != '\0'; format++) {
            if (*format == '%') {
                std::cout << value;
                Log(format + 1, args...); // recursive call
                return;
            }
            std::cout << *format;
        }
    }
};

