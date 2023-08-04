// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int k, int low, int high) 
{
  	while (low <= high) 
	{
    	int mid = low + (high - low) / 2;
    	if (array[mid] == k)
    	{
    		return mid;
		}
    	if (array[mid] < k)
    	{
    		low = mid + 1;	
		}
    	else
    	{
    		high = mid - 1;	
		}
  }
  return -1;
}

int main(void) 
{
	int array[100];
  	int n,i;
  	int k;
  	printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	} 
	printf("Enter the seraching element: ");
    scanf("%d",&k);
  	int result = binarySearch(array, k, 0, n - 1);
  	if (result == -1)
  	{
  		printf("Not found");
	}
  	else
  	{
  		printf("Element is found at index %d", result);	
	}
  	return 0;
}
