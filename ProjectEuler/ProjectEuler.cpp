#include <iostream>

// Problem 1 - Multiples of 3 or 5


int problem1 () {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    std::cout << "Problem 1 answer: "<< problem1() << std::endl;
}
