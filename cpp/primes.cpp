#include <iostream>

// allows us to shorten some functions like in std::cout we dont need to put std::
using namespace std;

// function that checks if a number is prime
bool is_prime(int num){
    // loops through a range from 2 to num and checks if num is divisible by any number
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // checks if the first 50 numbers are prime, and prints only the prime numbers!
    for (int i = 2; i < 50; i++){
        if (is_prime(i)){
            cout << i << endl;
        }
    }
}
