#include<stdio.h>
int main(){
	int a[100];
	int i,j,n,temp;
	printf("so phan tu cua mang la: ", n);
	scanf("%d", &n);
	for(i=0; i < n; i++){
		printf("Cac phan tu la: ", i + 1);
		scanf("%d", &a[i]);
		 
	} 
	for(i = 0; i< n - 1; i++){
		for(j=0; j < n - i -1; j++){
			if(a[j]> a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp; 
			}
		} 
	} 
	printf("\nSo lon nhat la: %d ", a[n - 1]);
	printf("\nSo nho nhat la: %d", a[0]);
	return 0; 
	 
} 
