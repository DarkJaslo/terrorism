#include <iostream>

int main()
{
    std::cout << "State your age:\n";
    int age;
    std::cin >> age;
    
    if (age < 0)
    {
        std::cout << "Provide a positive number.\n";
        main();
    }
    else
        std::cout << "You are " << age << " years old." << std::endl;
}