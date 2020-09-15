#include <iostream>
#include "arrayTracker.h"
#include "sortSolution.h"
#include "sortTester.h"

using namespace std;

int main(){
    int averageUseCount = 0;
    int numberOfRuns = 10;

    arrayTracker* anArrayPtr;
    sortSolution studentSolution;
    sortTester studentTester;

    for(int i=0; i<numberOfRuns; i++){
        anArrayPtr = new arrayTracker(10, 100+i);
        studentSolution.badSort(anArrayPtr);
        averageUseCount += anArrayPtr->getUseCount();
        anArrayPtr->displayArray();
        if(!studentTester.checkSorted(anArrayPtr)){
            cout << "FAILED TO SORT!\n";
        }
        delete anArrayPtr;
    }

    cout << "BadSort average actions: " << (float)averageUseCount/numberOfRuns << "\n";
    anArrayPtr->displayArray();

}
