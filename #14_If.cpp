#include <iostream>

int main()
{
    int a = 33;
    std::string today = "tuesday";

    switch (a)
    {
    case 13:
        if (today == "tuesday") {
            today = "thursday";
    case 33:
            std::cout << "Today is " << today << " " << a << "th" << std::endl;
        }
        break;
    default:
        throw;
    }
}