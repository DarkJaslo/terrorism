// Objectively better than Haskell.
template<int N>
class Fibonacci
{
public:
    constexpr static long long value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template<>
class Fibonacci<0>
{
public:
    constexpr static long long value = 0;
};

template<>
class Fibonacci<1>
{
public:
    constexpr static long long value = 1;
};

#include <iostream>

int main()
{
    std::cout << Fibonacci<90>::value << "\n";
}