#include<bits/stdc++.h>
#include"fib.hpp"

using namespace std ; 

int main(){
    fib Fibo ; 
    for ( int i = 0 ; i < 10 ; i++ ) {
        int n ; cin >> n ; 
        cout << Fibo.FibonacciRecursion( n ) << ' ' ; 
        cout << Fibo.FibonacciMatrix( n ) << ' ';  
        cout << Fibo.FibonacciDynamic(n) << ' ' ; 
        cout << '\n' ; 
    }
    return 0 ; 
}