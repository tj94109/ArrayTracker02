#include <iostream>
#include "arrayTracker.h"
using namespace std;

arrayTracker anArray;

const int ARRAY_SIZE =  10;

void badSort(arrayTracker& anArray){ // made pass by reference so as to NOT make a copy everytime
    bool haveDoneSwap = true;
    int temp = 0;
    while(haveDoneSwap){
        haveDoneSwap = false;
        for(int i = 0; i < anArray.getArraySize()-1; i++){
            if(anArray.getItem(i)  > anArray.getItem(i+1)){
                haveDoneSwap = true;
                temp = anArray.getItem(i);
                anArray.setItem(i, anArray.getItem(i+1));
                anArray.setItem(i+1, temp);
            }
       }

    }
}

int main(){
    arrayTracker anArray;
    anArray.displayArray();
    badSort(anArray);
    cout << "data actions: " << anArray.getUseCount() << "\n";
    anArray.displayArray();

}
