#ifndef ARRAYTRACKER_CPP
#define ARRAYTRACKER_CPP

#include<iostream>
#include<ctime>
#include<random>
#include "arrayTracker.h"

using namespace std;

arrayTracker::arrayTracker(){
    useCount = 0;
    arraySize = 0;
}

arrayTracker::arrayTracker(int arraySize){
    useCount =0;
    this->arraySize = arraySize;
    int receipt = (unsigned) time(0);
    srand(receipt);
    for(int i=0; i<arraySize; i++){
        items[i] = rand()%arraySize;
    }
}

int arrayTracker::getItem(int itemIndx){
    if(itemIndx < 0 || itemIndx >= arraySize){
       cout << "Get Index " << itemIndx << "Out of Bounds\n";
    }
    else
    {
       useCount++;
       return items[itemIndx];
       return 0;
    };

}
void arrayTracker::setItem(int itemIndx, int newValue){
    if(itemIndx < 0 || itemIndx >= arraySize){
        cout << "Set Index " << itemIndx << "Out of Bounds\n";
    }else{
        useCount++;
        items[itemIndx] = newValue;
    }

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

int arrayTracker::getArraySize(){
    return arraySize;
}

#endif
