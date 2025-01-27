# include<stdio.h>
void selectionSort(int arr[],int n)
{
	int i,j,minIdx,temp;
	for(i=0;i<n;i++)
	{
		minIdx=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIdx])
			{
				minIdx=j;
			}
		}
		if(minIdx!=i)
		{
			temp=arr[minIdx];
			arr[minIdx]=arr[i];
			arr[i]=temp;
		}
		}
}

void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[]={64,25,12,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted array:\n");
	printArray(arr,n);
	
	selectionSort(arr,n);
	
	printf("Sorted array:\n");
	printArray(arr,n);
	
	return 0;
}
