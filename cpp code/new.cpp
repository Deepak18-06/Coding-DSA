#include<iostream>
using namespace std;
void merge(int numbers[],int i,int j,int k){
    int mergedSize = k-i+1;
    int mergePos = 0;
    int leftPos = 0;
    int rightPos = 0;
    int mergedNumbers[mergedSize];
    
    leftPos = i;
    rightPos = j+1;
    
    while(leftPos<=j && rightPos<=k){
        if(numbers[leftPos]<=numbers[rightPos]){
            mergedNumbers[mergePos] = numbers[rightPos];
            ++leftPos;
            ++mergePos;
        }
        else{
            mergedNumbers[mergePos] = numbers[rightPos];
            ++rightPos;
            ++mergePos;
        }
        
    }
    while(leftPos<=j){
        mergedNumbers[mergePos] = numbers[leftPos];
        ++leftPos;
        ++mergePos;
    }
    for(mergePos = 0;mergePos<mergedSize;++mergePos){
        numbers[i+mergePos] = mergedNumbers[mergePos];
    }

}

void MergeSort(int numbers[],int i, int k){
    int j = 0;
    if(i<k){
        j = (i+k)/2;
        MergeSort(numbers,i,j);
        MergeSort(numbers,j+1,k);
        merge(numbers,i,j,k);
    }
}


int main(){
    int numbers[] = {10,2,78,4,45,32,7,11};
    const int NUMBERS_SIZE = 8;
    int i;
    cout<<"Unsorted";
    cout<<endl;
    MergeSort(numbers,0,NUMBERS_SIZE-1);
    cout<<"sorted :";
    for(i = 0;i<NUMBERS_SIZE;++i){
        cout<<numbers[i]<<' ';
    }
    cout<<endl;
    return 0;
}