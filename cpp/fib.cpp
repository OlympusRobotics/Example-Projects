#include <iostream>

using namespace std

// declaring a function that will call itself! - recursion!
// this function is pretty much calculating fibonacci from the ground up
// for example - if fib(3) is called, it will create fib(2) and fib(1) calls.
// fib(2) will call again since its not one of the base cases, fib(1) + fib(0). these will return 1 and 0 respectively, which will add to 1 and be
// returned by fib(2). fib(1) will immediately return 1 since its a base case.
// 1 + 1 = 2 and this is the fourth number in the fibonacci series! 
int fib(int x) {
    // base cases that will return
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    // call itself if its not at the end of the tree
    return fib(x-1)+fib(x-2);
}

int main(){
    cout << fib(6);
    return 0;
}
