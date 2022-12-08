#include<stdio.h>
#include<conio.h>
 
int n;
int nhapNum(){
	//int n;
	printf("Nhap gia tri cho n: ");
	scanf("%d", &n);
	 
} 
void checkNum(int n){
	int i;
	int dem=0;
	for(i=1;i<=n;i++){
		if(n%1==0)
		dem++; 
	} 
	if(dem = 2)
	printf("\n%d Khong la so nguyen to",n);
	else 
	printf("\n%d La so nguyen to ",n);
	 
	 
}
int main(){
	int b;
	nhapNum();
	checkNum(n);
	return 0; 
} 
