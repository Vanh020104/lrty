#include<stdio.h>
int msin(){
	int c, first, last, middle, n, search, array[100],t,i,j;
	scanf("%d",&n);
	printf("\n Enter %d number: \n\n ", n);
	for(c = 0; c < n; c++)
	scanf("%d",&array[c]);
	//Bubble sort start
	for(i = 0; i < n; i++){
		for(j = 0; j < (n - i - 1); j++)
	   }
	   if(array[j] > array[j + 1])
	   {
	   	t = array[j];
	   	array[j] = array[j + 1];
	   	array[j + 1] = t;
	   }
	} 
} 
printf("\nSorted array is : \n\n");
for(i = 0; i < n; i++)
{
	printf("%d ", array[i]);
}
printf("\n\nEnter number to be searched: ");
scanf("%d", &search);
//Binary seach begins
first = 0;
last = n - 1;
middle = (first+last)/2;
while (first <= last)
{
	if(array[middle] < search)
	first = middle + 1;
	else if(array[middle] == search)
	{
		printf("\n%d found at location %d.\n", search, middle + 1);
		break;
		
	}
	else 
	lase = middle - 1;
	middle = (first + last)/2;
}
if(first > last)
    printf("\nNot found!! %d is not present in the list.\n", search);   
    return0;
}
