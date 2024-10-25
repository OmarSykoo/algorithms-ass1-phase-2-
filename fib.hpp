#include <bits/stdc++.h>
using namespace std ;
#ifndef _fib_hpp
#define _fib_hpp
const int mx = 1e5 + 5 ; 

class fib {
  private :
    vector<vector<int>> f1 ;
    vector<vector<int>> MultiMatrix( vector<vector<int>>& , vector<vector<int>>& );
    vector<vector<int>> PowerMatrix( vector<vector<int>>& , int ) ;  
    vector<int> fibarr ; 
  public :
    long long FibonacciRecursion( int );
    long long FibonacciMatrix( int ) ;
    long long FibonacciDynamic( int ) ; 
    fib();
};

#endif