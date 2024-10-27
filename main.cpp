#include<bits/stdc++.h>
#include"fib.hpp"
#include"SearchAlgo.hpp"

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
    vector<int> arr = { 4 , 3 , 1 , 2 , 6 , 9 } ;
    SearchAlgo search( arr );
    int t ; cin >> t ; 
    while ( t-- ) { 
        int x ; cin >> x ; 
        
        if ( search.BinaryItr(x) ) cout << "FOUND\n" ; 
        else cout << "NOTFOUND\n" ; 
        
        if ( search.BinaryRec(x) ) cout << "FOUND\n" ;
        else cout << "NOTFOUND\n" ; 
        
        if ( search.IterativeItr(x) ) cout << "FOUND\n" ;
        else cout << "NOTFOUND\n" ; 

        if ( search.IterativeRec(x) ) cout << "FOUND\n" ;
        else cout << "NOTFOUND\n" ; 
    }
    return 0 ; 
}