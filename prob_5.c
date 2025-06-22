#include<stdio.h>

int main()
{
    int odd = 0;
	int even = 0;
	int arr[] = {10,20,30,40,50,60,70,80,90};
	int length = (sizeof (arr)/sizeof (arr[0]));
	printf("size of array:%d\n",length);
	
	for(int i=0;i < length;i++){
		if(arr[i]%2 == 0)
			even++;
		else
			odd++;
			
		}
		
		printf("even numbers: %d\n",even);
		printf("odd numbers: %d\n",odd);
		
		
	return 0;
	
	}
	