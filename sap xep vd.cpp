//sort and function and Array pass by references 
#include <stdio.h>
#include<stlib.h> 
//Ð?i ch? các pt c?a M?ng
void swapFunction(int *x, int *y)
{
    //swapping ...
    int temp;
    temp = *x;  
    *x = *y;
    *y = temp;
}
//S?p x?p các pt M?ng theo BubbleSort
void bubbleSort(int arr[], int n){
    //sorting here...
    int i,j;
    for(i=0; i<n-1; i++)
   
        for(j =0; j < n-i-1; j++)
        {
            if(arr[j]> arr[j+1])
            {
                swapFunction(&arr[j],&arr[j+1]);
            }    
        }            
}
void insertionSort(int arr[], int n){
    //implement code here...
    
}
//In k?t qu?...
void printResult(int arr[], int n){
    //printing the result...
    int i;
    for(i=0; i< n; i++)
        printf("\n %d ", arr[i]);
}

int main(){
    int arr[] ={12,23,33,55,25};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    bubbleSort(arr,n);//Ð? sãp x?p xong
   
    printf("\nMang sau khi sap xep: ");
    printResult(arr,n);//In ket qua sau ham nay duoc goi
    return 0;
}
