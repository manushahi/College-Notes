#include<stdio.h>
#include<conio.h>
int main ()
{
	int arr1[5][5] , arr2[5][5] ,arr3[7][7];
	int a,b,c,d;
	printf("enter the rows and column of  matrix\n");
	scanf("%d %d",&a,&b);
	printf("enter the element of 1 matrix\n");
	for(c=0;c<a;c++)
	for(d=0 ; d<b;d++)
	scanf("%d",arr1[c][d]);
	printf("enter the element of 2 matrix\n");
	for(c=0;c<a;c++)
	for(d=0;d<b ; d++)
	scanf("%d",arr2[c][d]);
	printf("the sum of matrix : \n");
	for(c=0 ; c<a ;c++)
	{for(d=0 ;d<b ;d++){
	
	arr3[c][d]=arr1[c][d]+arr2[c][d];
	printf("%d\t",arr3[c][d]);
	
	}
	printf("\n");
}
return 0 ;
}
	
