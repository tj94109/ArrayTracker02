#ifndef SORT_TESTER_CPP
#define SORT_TESTER_CPP
#include "sortTester.h"

sortTester::sortTester()
{

}

bool sortTester::checkSorted(arrayTracker *anArrayPtr){
    for(int i=0; i < anArrayPtr->getArraySize()-1; i++){
        if (anArrayPtr->getItem(i)>anArrayPtr->getItem(i+1)){
            return false;
        }
    }
    return true;
}

#endif
