#include <iostream>

template <typename T>
constexpr T& thingie(T& lhs, T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int main()
{
    int a = 2; int b = 3;
    thingie(a, b) = 4;

    std::cout << a << "," << b << std::endl;
    return thingie(b, a) = 2;
}