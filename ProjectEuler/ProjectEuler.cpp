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

    std::vector<long long int> vect;
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

    std::cout << "Problem 3 answer: " << vect.back() << std::endl;
}

// Problem 4 - Largest palindrome made from the product of 2, 3-digit numbers
bool isPalindrome(int n) {
    // to reverse number
    int nRev = 0;
    int remainder = 0;
    int temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        nRev = nRev * 10 + remainder;
        temp = temp / 10;
    }

    // check if the reverse is equal to number
    if (n == nRev) {return true;}
    return false;
}

void problem4() {
    int largest = 0;
    int pair[2] = { 0,0 };
    int product = 0;
    // Create 2 loop that works from the bottom of the 3 range range
    // and one that works from the top range down
    for (int i = 0; i < 999; i++) {
        for (int j = 999; j > 0; j--) {
            product = i * j;
            if (isPalindrome(product) && product > largest) {
                largest = product;
                pair[0] = i;
                pair[1] = j;
            }
        }
    }
    std::cout << "Problem 4 answer: ";
    std::cout << pair[0] << " x " << pair[1];
    std::cout << " = " << largest << std::endl;
}

int main()
{
    problem1();
    problem2();
    problem3();
    problem4();
}
