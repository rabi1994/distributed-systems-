#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBERS 1000

void generateNumbers(int *arr,int length){
    int i ;
    for(i = 0 ; i < length ; i++){
        arr[i] = (rand()+1000 )% 10000 ;
    }

}

void printNumbers(int* arr , int length){
     int i ;
    for(i = 0 ; i < length ; i++){
        printf(" %d ",arr[i]);
        if( i %10 ==0 )
            printf("\n");
    }

}
int getMaxNumber(int* arr, int length){
    int i =0 ;
    if(length <= 0)
        return -1;
    int max = arr[0];
    for(i=1 ; i<length ;i++){
        if( arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main(){
    printf("hello world\n");
    int *arr = (int*)(malloc(sizeof(int)*NUMBERS));
    generateNumbers(arr, NUMBERS);
    //printNumbers(arr,NUMBERS);
    printf("max number is %d", getMaxNumber(arr,NUMBERS)); 

    return 0;
}