#include <iostream>
#include "arrayTracker.h"
using namespace std;

void badSort(arrayTracker* anArrayPtr){ // made pass by reference so as to NOT make a copy everytime
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

int main(){
    int averageUseCount = 0;
    int numberOfRuns = 10;

    arrayTracker* anArrayPtr;
    for(int i=0; i<numberOfRuns; i++){
        anArrayPtr = new arrayTracker(10, 100+i);
        badSort(anArrayPtr);
        averageUseCount += anArrayPtr->getUseCount();
        anArrayPtr->displayArray();
        delete anArrayPtr;
    }



    cout << "BadSort average actions: " << (float)averageUseCount/numberOfRuns << "\n";
    anArrayPtr->displayArray();

}
