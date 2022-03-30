#include <iostream>
#include <vector>
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

// Problem 3 - Largest Prime Factor
void problem3() {

    std::vector<int> vect;
    long long int n = 600851475143;

    // loop until n is not divisible by 2
    while (n % 2 == 0)
    {
        vect.push_back(2);
        n = n / 2;
    }
 
    // n must be odd here
    for (long long int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            vect.push_back(i);
            n = n / i;
        }
    }

    // if n is a prime number greater than 2
    if (n > 2)
        vect.push_back(n);

    std::cout << "Problem 2 answer: " << vect.back() << std::endl;
}


int main()
{
    problem1();
    problem2();
    problem3();
}
