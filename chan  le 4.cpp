#include<stdio.h>
void checkNumber(int n){
	if(n%2==0){
		printf("1");
		
	}else printf("2");
	
}
int maint(){
	int n;
	printf("\nNhap gia tri cho n: ");
	scanf("%d", &n);
	checkNumber(n);
	return 0;
}
