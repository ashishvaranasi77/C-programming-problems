#include<stdio.h>

int main()
{
    int sum = 0;
	int arr[] = {10,20,30,40,50,60,70,80,90};
	int length = (sizeof (arr)/sizeof (arr[0]));
	printf("size of array:%d",length);
	
	for(int i=0;i < length;i++)
	sum = sum + arr[i];
	
	printf("sum of numbers in an array:%d",sum);
	
	return 0;
	
	}
	