#include<stdio.h>
#include<conio.h>
int main (){
	int ary[5] = {10, 3, 21, 6, 1};
	int i, j, tmp;
	for(i = 0; i < 5; ++i)
	for(j = 0; j < 5 - i - 1; ++j){
		if(ary[j] > ary[j + 1])
		{
			tmp = ary[j];
			ary[j] = ary[j + 1];
			ary[j + 1] = tmp;
		}
	}
	printf("\nHien thi Mang da duoc sap xep:\n");
	for(i = 0; i < 5; i++)
	printf("%d\t", ary[i]);
	return 0;
}
