#ifndef SORT_SOLUTION_CPP
#define SORT_SOLUTION_CPP

#include "sortSolution.h"

sortSolution::sortSolution()
{

}

void sortSolution::badSort(arrayTracker* anArrayPtr){ // made pass by reference so as to NOT make a copy everytime
    bool haveDoneSwap = true;
    int temp = 0;

    while(haveDoneSwap){
        haveDoneSwap = false;
        for(int i = 0; i<anArrayPtr->getArraySize()-1; i++){
            if(anArrayPtr->getItem(i) > anArrayPtr->getItem(i+1)){
                haveDoneSwap = true;
                temp = anArrayPtr->getItem(i);
                anArrayPtr->setItem(i, anArrayPtr->getItem(i+1));
                anArrayPtr->setItem(i+1, temp);
            }
       }

    }
}




#endif
