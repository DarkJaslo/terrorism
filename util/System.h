#ifndef System_h
#define System_h

#include <iostream>
#include <string>

namespace System{
    namespace out{
        void println(const std::string& text){
            std::cout << text << std::endl;
        }
    };
};

template<typename T>
class ArrayList{};

int Integer(int n){ return n;}

#endif