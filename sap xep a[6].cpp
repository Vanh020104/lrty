#include<stdio.h>
int main(){
	int a[6] = {9, 5, 3, 8, 7, 0};
	int i, j, temp;
	for(i = 0; i < 6; i++)
	for(j = 0; j < 6 - i - 1; j++){
			if(a[j] > a[j + 1]){
			temp = a[j];
				a[j]  = a[j+1];
				 a[j+1] = temp;
				
		  	}
		
	}
	printf("/nMang duoc sap xep la: ");
	for(i = 0; i < 6; i++)
	printf("%d", a[i]);
	return 0;
}
