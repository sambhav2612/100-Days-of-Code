// to implement page allocation algortihms in c
// author: sambhav jain 

/**********************WORKING******************************/

#include<stdio.h>
#define maxSize 50

int blocks[maxSize] = {0};
int processes[maxSize] = {0};
// we need to keep a auxiallry data sturcture to store a copy of our blocks
int size = 0;

void firstFit () {
    // allocate any block from start to any process who is big enough to slide into it
    int i, j;
    for (i = 0; i < size; ++i) {            // process loop
        for (j = 0; j < size; ++j) {        // block loop
            if (processes[i] <= blocks[j]) { // when process requirement is lower than block size at now poiting pointer (i)
                printf("\nProcess %d allocated to block %d", i+1, j+1);
                blocks[j] = blocks[j] - processes[i];   // decrease the amount of the block size now avaiable for use by any other process
                break;  // come out of inner loop as jth process has been allocated
            }
        }
        if (j == size) {
           printf("\nProcess %d could not be allocated", i+1); 
        }
    }
}

void worstFit () {
    int i, j;

    // sort block size in descending order
    for (i = 0; i < size-1; ++i) {
        for (j = 0; j < size-1-i; ++j) {
            if (blocks[j] < blocks[j+1]) {  //swap if the next element is bigger than this one
                blocks[j] = blocks[j] + blocks[j+1];        // a = a + b
                blocks[j+1] = blocks[j] - blocks[j+1];      // b = a - b
                blocks[j] = blocks[j] - blocks[j+1];        // a = a - b
            }
        }
    }
    // this looping gives us sorted blocks in descending order, then continue first fit algortihm
    firstFit();

}

void bestFit () {
    int i, j;

    // sort block size in descending order
    for (i = 0; i < size-1; ++i) {
        for (j = 0; j < size-1-i; ++j) {
            if (blocks[j] > blocks[j+1]) {  //swap if the next element is bigger than this one
                blocks[j] = blocks[j] + blocks[j+1];        // a = a + b
                blocks[j+1] = blocks[j] - blocks[j+1];      // b = a - b
                blocks[j] = blocks[j] - blocks[j+1];        // a = a - b
            }
        }
    }
    // this looping gives us sorted blocks in descending order, then continue first fit algortihm
    firstFit();

}

void main () {

    // considering that we are provided with number of blocks and proesses which are equal and for each we have some value to drive this code

    printf("\nEnter size: ");
    scanf("%d", &size);

    int i;
    for (i = 0; i < size; ++i) {
        printf("\nEnter process size: ");
        scanf("%d", &processes[i]);

        printf("\nEnter block size: ");
        scanf("%d", &blocks[i]);
    }

    // first fit
    firstFit();

    //worst fit
    worstFit();

    //best fit
    bestFit();
}