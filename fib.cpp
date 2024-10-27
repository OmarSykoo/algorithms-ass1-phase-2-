#include "fib.hpp"

long long fib::FibonacciRecursion(int n) {
    if (n <= 2)
        return 1; 
    return FibonacciRecursion(n - 1) + FibonacciRecursion(n - 2);
}


vector<vector<int>> fib::MultiMatrix(vector<vector<int>>& mtx1, vector<vector<int>>& mtx2) {
    vector<vector<int>> result(2, vector<int>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = mtx1[i][0] * mtx2[0][j] + mtx1[i][1] * mtx2[1][j];
        }
    }
    return result;
}

vector<vector<int>> fib::PowerMatrix(vector<vector<int>>& mtx, int n) {
    if (n <= 1)
        return mtx;

    vector<vector<int>> halfMtx = PowerMatrix(mtx, n / 2);
    vector<vector<int>> fullMtx = MultiMatrix(halfMtx, halfMtx);

    if (n % 2 != 0)
        fullMtx = MultiMatrix(fullMtx, mtx);

    return fullMtx;
}   

fib::fib() {
    f1 = vector<vector<int>>(2, vector<int>(2, 0));
    f1[0][0] = 1; f1[0][1] = 1;
    f1[1][0] = 1; f1[1][1] = 0;
    fibarr = vector<int>(mx, 0);
}

//      [ fn+1 , fn ]       [ 1 , 1 ]      [ 2 , 1 ]
// fn = [           ]  f1 = [       ] f2 = [       ] 
//      [ fn  , fn-1]       [ 1 , 0 ]      [ 1 , 1 ]

long long fib::FibonacciMatrix( int n ){
    if ( n <= 1 )
        return 1 ;
    vector<vector<int>> result = f1 ; 
    result = PowerMatrix( result , n  ) ;
    return result[0][1] ; 
} 

long long fib::FibonacciDynamic( int n ){
    if ( fibarr[n] )
        return fibarr[n] ; 
    if ( n <= 2 )
        return 1 ; 
    fibarr[n] = FibonacciDynamic( n - 1 ) + FibonacciDynamic( n - 2 ) ;
    return fibarr[n] ;  
}

