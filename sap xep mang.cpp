#include<stdio.h>

int main(){
	int arr[5] = {5,8, 9, 2,7};
	int i, j, tmp;

	for(i = 0; i < 5; i++)
	for(j = 0; j < 5 - i - 1; j++){
		if(arr[j] > arr[j + 1]){
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		} 
	}
	printf("\nMang duoc sap xep la:\n");
		for(i = 0; i < 5; i++)
	printf("%d", arr[i]);
	return 0;
} 
