#include<stdio.h>

int main()
{
	int arr[] = {10,20,30,40,50,60,70,80,90};
	int max = arr[0];
	int i;
	int length = (sizeof (arr)/sizeof (arr[0]));
	printf("size of array:%d\n",length);
	
	for(i = 0; i < length ; i++ )
		if( arr[i] > max )
		   	max = arr[i]; 
		
		printf("The largest number in the array is %d",max);
		return 0;
	
}
	
	
	