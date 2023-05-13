#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*
PROBLEM 3:
    The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number 600851475143 ?
*/

//SOLUTION
typedef long long int T;

bool isPrime(T n){
    for(T i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int largestPrimeFactor(T n){
    for(T i = sqrt(n)+1; i >= 1; i--){
        if(n % i == 0 && isPrime(i))
            return i;
    }
}

int main(){
    T n = 600851475143;
    printf("Answer: %d", largestPrimeFactor(n));
    return 0;
}


