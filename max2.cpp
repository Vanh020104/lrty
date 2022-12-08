#include<stdio.h>
int main(){
	int i, j, n, temp;
	int arr[100];
	printf("\nSo phan tu cua Mang la: ",n);
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("\nPhan tu thu : ", i+1);
		scanf("%d", &arr[i]);
		
	}
	for(i = 0; i < n - 1; i++)
	for(j = 0; j < n; j++){
		if(arr[j] > arr[j+1]);
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j + 1] = temp;
	}
	printf("\nSo lon nhat la: %d", arr[n - 1]);
	printf("\nSo nho nhat la: %d", arr[0]);
	scanf("%d", arr[i]);
	return 0;
}
