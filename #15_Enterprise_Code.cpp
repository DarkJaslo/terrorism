#include <iostream>

int main()
{
    // What does this print?
    bool const* x {};
    auto a = new long((long long)(typeof(main())*)((bool*)(x ? malloc(std::move(2)) : malloc(0)) == std::move(x = new bool(2))));

    delete x;
    std::cout << *a << std::endl;
    delete a;
}