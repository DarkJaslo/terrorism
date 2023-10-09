#include <iostream>

/*Works in all cases*/
bool isPrime(int n){
    {
        if(n % 2 != 0){
            if(n % 3 != 0){
                if(n % 5 != 0){
                    if(n % 7 != 0){
                        if(n % 11 != 0){
                            if(n % 13 != 0){
                                if(n % 17 != 0){
                                    if(n % 19 != 0){
                                        if(n % 23 != 0){
                                            if(n % 29 != 0){
                                                if(n % 31 != 0){
                                                    if(n % 37 != 0){
                                                        if(n % 39 != 0){
                                                            if(n % 41 != 0){
                                                                if(n % 43 != 0){
                                                                    if(n % 47 != 0){
                                                                        if(n % 53 != 0){
                                                                            if(n % 59 != 0){
                                                                                std::cout << n << " is prime!!" << std::endl;
                                                                                return true;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
}

int main(){
    if(true){
        int n;
        std::cout << "Enter a positive number:" << std::endl;
        std::cin >> n;
        isPrime(n) ? std::cout << n << " is prime" : std::cout << n << " is not prime";
        std::cout << std::endl;
    }
    else{
        std::cout << "It's false today" << std::endl;
    }
}