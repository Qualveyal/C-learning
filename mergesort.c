//MergeSort

#include <stdio.h>

void mergesort(int a[], int i, int j);
void merge(int a[], int i1, int j1, int i2, int j2);

int main()
{
	int a[30], n , i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	mergesort(a, 0, n-1);
	
	printf("\nYour elements in ascending orderr: ");
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	
	return 0;
}

void mergesort(int a[], int i, int j)
{
	int mid;
	
	if(i < j)
	{
		mid = (i+j)/2;
		mergesort(a, i, mid);          		 //Left recursion
		mergesort(a, mid + 1, j);     		//Right recursion
		merge(a, i, mid, mid + 1, j);	   //Merging of two sub-arrays in proper arrangement
	}
}

void merge(int a[], int i1, int j1, int i2, int j2)
{
	int temp[50];	//Array used for merging
	int i, j, k;
	i = i1;			//Beginning of first list
	j = i2;			//Beginning of sceond list
	k = 0;
	
	while(i <= j1 && j <= j2)		//while elements in both list
	{
		if(a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	
	while(i <= j1)			//Copy remaining elements of the first list
		temp[k++] = a[i++];
		
	while(j <= j2)			//Copy remaining elements of the second list
		temp[k++] = a[j++];
		
	//Transfer elements from temp[] back to a[]
	for(i = i1, k = 0; i <= j2; i++, k++)
		a[i] = temp[k];
	
}
