#ifndef ARRAYTRACKER_H
#define ARRAYTRACKER_H

const int MAX_ARRAY_SIZE = 100;

class arrayTracker
{
    private:
        int arraySize;
        int items[MAX_ARRAY_SIZE] = {4, 2, 6, 5, 1, 3, 7};
        int useCount;

    public:
        arrayTracker();
        int getItem(int itemIndx);
        void setItem(int itemIndx, int newValue);
        void displayArray();
        int getUseCount();
};

#endif // ARRAYTRACKER_H