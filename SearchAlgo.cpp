#include<vector>
#include<algorithm>
#include"SearchAlgo.hpp"
using namespace std ; 

SearchAlgo::SearchAlgo( vector<int> arr ) {
    this->arr = arr ; 
    this->sortedArr = arr ; 
    sort( sortedArr.begin() , sortedArr.end() ) ; 
} 

bool SearchAlgo::BinaryItr( int value ){
    int l = 0 ; 
    int r = sortedArr.size() - 1 ; 
    while ( l <= r ) {
        int mid = ( l + r ) / 2 ; 
        if ( sortedArr[mid] == value )
            return true ; 
        else if ( sortedArr[mid] > value ) { 
            r = mid - 1 ; 
        } else { 
            l = mid + 1 ; 
        }
    }
    return false ; 
}

bool SearchAlgo::BinaryRec( int value ) {
    return BinaryRecUtility( value , 0 , sortedArr.size() - 1 ) ;  
}

bool SearchAlgo::BinaryRecUtility( int value ,int l  , int r ) { 

    int mid = ( l + r ) / 2 ; 

    if ( l > r )
        return false ;  
    if ( sortedArr[mid] == value )
        return true ;
    else if ( sortedArr[mid] > value )
        return BinaryRecUtility( value , l , mid - 1 ) ; 
    else 
        return BinaryRecUtility( value , mid + 1 , r ) ; 
}

bool SearchAlgo::IterativeItr( int value ) {
    for ( int i = 0 ; i < arr.size() ; i++ ){
        if ( arr[i] == value )
            return true ; 
    }
    return false ; 
}

bool SearchAlgo::IterativeRec( int value ) {
    return IteraTiveRecUtility( value , 0 ) ; 
} 


bool SearchAlgo::IteraTiveRecUtility( int value , int index ){
    if ( index >= arr.size() )
        return false ; 
    if ( arr[index] == value )
        return true ; 
    else 
        return IteraTiveRecUtility( value , index + 1 ) ; 
} 