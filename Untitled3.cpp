#include<stdio.h>
int main (){
	int i, j ,n,temp;
	int a[100];
	printf("So phan tu cua Mang la:", n); 
	scanf("%d", &n);
	for(i = 0; i <n; i++){
		printf("Cac phan tu la: ",i + 1);
		scanf("%d", &a[i]); 
		
	} 
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n-i-1; j++){
			if(a[j]> a[j + 1]){
				int temp = a[j];
				a[j] = a[j +1];
				a[j +1] = temp; 
			} 
		} 
	}
	printf("so lon nhat la: %d", a[n - 1]);
	printf("so be nhat la: %d", a[0]);
	return 0; 
	
	 
}

