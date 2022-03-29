#include <iostream>

// Problem 1 - Multiples of 3 or 5
void problem1 () {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum+=i;
        }
    }
    std::cout << "Problem 1 answer: " << sum << std::endl;
}

// Problem 2 - Even Fibonacci Sequence
void problem2() {
    int sum = 0;

    int prev = 0;
    int cur = 1;
    int term = prev + cur;

    while (term < 4000000){
        if (term % 2 == 0) {
            sum += term;
        }

        prev = cur;
        cur = term;
        term = cur + prev;
    }

    std::cout << "Problem 2 answer: " << sum << std::endl;
}

int main()
{
    problem1();
    problem2();
}
