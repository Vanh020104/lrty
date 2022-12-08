#include<stdio.h>
void func(int a[], int n){//Trien khai ham 
int i; 
  printf("\nGia tri cac phan tu mang: ");
  for(i=0;i<n;i++){
  	printf("\n %d",a[i]); 
  } 
	
} 
void func2(int a, int b) {
	printf("\na: %d, b: %d",a,b); 
}
int main (){
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	func(arr,n); 
	func2(arr[0],arr[1]); 
	return 0; 
} 
