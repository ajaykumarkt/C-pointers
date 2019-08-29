#include<stdio.h>
int main()
{
	int arr[10] = {4,7,5,1,2,0,8};
	int *p  = arr;
	//arr indicates beginning address of array, which is stored in stack memory 
	printf("%p\n",arr);			//										0x7ffd460e4200
	//arr and &arr prints address of beginning of array
	printf("%p\n",&arr);		//										0x7ffd460e4200
	//value at 0th index
	printf("%d\n",*arr);		//										4
	//value at 1st index
	printf("%d\n",*(arr+1));	//										7
	//print address of arr
	printf("%p\n",p);			//										0x7ffd460e4200
	//address of pointer
	printf("%p\n",&p);			//										0x7ffd460e41f8
	//print value present in that address
	printf("%d\n",*p);			//										4
	//print then increment the address
	printf("%d\n",*p++);		//printf("%d\n",(*p)++); Both are same 	4
	printf("%d\n",*p);			//										7
	//increment the value at present index
	printf("%d\n",++*p);		//printf("%d\n",++(*p));				8
	printf("%d\n",*(p+1));		//										5
	//increments address and prints value
	printf("%d\n",*(++p));		//										5
	printf("%d\n",*(p++));		//										5
	printf("%d\n",*p);			//										1
	printf("%d %d %d %d\n",++*p , *p++ , *(p+1) , *p++);
	//printf("%d \n",++*p + *p++ + *(p+1) + *p++);//					6
	printf("%d\n",*(p-2));		//										1
	return 0;
}