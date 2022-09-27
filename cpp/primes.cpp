#include <iostream>

using namespace std;

bool is_prime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    for (int i = 2; i < 50; i++){
        if (is_prime(i)){
            cout << i << endl;
        }
    }
}