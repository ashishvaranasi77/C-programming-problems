#include<stdio.h>

int main()
{
    int x;
    printf("enter your number:");
	scanf("%d",&x);
	int arr[] = {10,20,30,40,50,60,70,80,90};
	int length = (sizeof (arr)/sizeof (arr[0]));
	printf("Size of array:%d\n",length);
	
	for(int i=0;i < length;i++){
	
		if(x == arr[i])
		printf("The element %d is present in the array\n",x);
		
		}
	
	return 0;

}