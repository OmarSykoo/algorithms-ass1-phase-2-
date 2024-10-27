#include<vector>
using namespace std ; 
#ifndef _SEARCHALGO_H_
#define _SEARHCALGO_H_

class SearchAlgo {
  private :
    vector<int> arr ;
    vector<int> sortedArr ; 
    bool BinaryRecUtility( int ,int , int) ;
    bool IteraTiveRecUtility( int , int ) ;  
  public : 
    SearchAlgo( vector<int> arr ) ; 
    bool BinaryItr( int ) ; 
    bool BinaryRec( int ) ;
    bool IterativeItr( int ) ;  
    bool IterativeRec( int ) ;  
};


#endif