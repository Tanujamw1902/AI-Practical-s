#include <iostream>
using namespace std;

int main(){
    int n = 7;
    bool isPrime= true;

    for(int i =2; i <= n-1; i++){
        if(n % i== 0){ // i is a factor of n; i completely divides n; n is non-prime
            isPrime =false;
            break;
        }
    }

    if(isPrime){
        cout << "Number is Prime" << endl;

    }else{
        cout << "Number is not Prime" << endl;
    }
    return 0;
}