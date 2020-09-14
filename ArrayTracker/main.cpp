#include <iostream>
#include "arrayTracker.h"
using namespace std;

arrayTracker anArray;

const int ARRAY_SIZE =  10;

int badSort(int anArray[]){
    bool haveDoneSwap = true;
    int arrayInteractions = 0;
    int temp = 0;
    while(haveDoneSwap){
        haveDoneSwap = false;
        for(int i = 0; i < ARRAY_SIZE -1; i++){
            arrayInteractions +=2;
            if(anArray[i] > anArray[i+1]){
                haveDoneSwap = true;
                arrayInteractions+=1;
                temp = anArray[i];
                arrayInteractions +=2;
                anArray[i] = anArray[i+1];
                arrayInteractions +=1;
                anArray[i+1] = temp;
            }
       }

    }
    return arrayInteractions;
}

int main(){
    arrayTracker anArray;
    anArray.displayArray();
    //int arrayInteractions = badSort(anArray);
    cout << "data actions: " << anArray.getUseCount() << "\n";
    anArray.displayArray();

}
