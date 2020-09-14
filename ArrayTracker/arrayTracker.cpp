#ifndef ARRAYTRACKER_CPP
#define ARRAYTRACKER_CPP

#include<iostream>
#include "arrayTracker.h"

using namespace std;

arrayTracker::arrayTracker(){
    useCount = 0;
    arraySize = 7;
}
int arrayTracker::getItem(int itemIndx){
    return items[itemIndx];
}
void arrayTracker::setItem(int itemIndx, int newValue){
    items[itemIndx] = newValue;
}
void arrayTracker::displayArray(){
    for(int i=0; i<arraySize; i++){
        if(i!= 0){
            cout << " , ";
        }
        cout << items[i];
    }
    cout << "\n";
}


int arrayTracker::getUseCount(){
    return useCount;
}
#endif
