// Ascending order
// Bubble sort
#include<stdio.h>
int main()
{
	int array[1000], c, d, n, swap;
	printf("Enter numbers of integer: ");
	scanf_s("%d", &n);
	printf("Array:\n");
	for (c = 0; c < n; c++)
	{
		printf("a[%d]= ", c);
		scanf_s("%d", &array[c]);
	}
	for (c = 0; c < n - 1; c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (array[d] > array[d + 1])
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
	}
	printf("Ascending list:\n");
	for (c = 0; c < n; c++)
	{
		printf("%d\n", array[c]);
	}
	return 0;
}

// Insertion sort
#include<stdio.h>
int main()
{
	int array[1000], n, c, d, t, flag = 0;
	printf("Enter number of integer: ");
	scanf_s("%d", &n);
	printf("Array: \n");
	for (c = 0; c < n; c++)
	{
		printf("a[%d]= ", c);
		scanf_s("%d", &array[c]);
	}
	for (c = 1; c < n - 1; c++)
	{
		t = array[c];
		for (d = c - 1; d >= 0; d--)
		{
			if (array[d] > t)
			{
				array[d + 1] = array[d];
				flag = 1;
			}
			else
				break;
		}
		if (flag)
			array[d + 1] = t;
	}
	printf("Ascending list:\n");
	for (c = 0; c <= n - 1; c++)
	{
		printf("%d\n", array[c]);
	}
	return 0;
}

//Discending order
#include <stdio.h>
void main()
{

	int number[30];

	int i, j, a, n;
	printf("Enter the value of N\n");
	scanf("%d", &n);

	printf("Enter the numbers \n");
	for (i = 0; i < n; ++i)
		scanf("%d", &number[i]);
	for (i = 0; i < n; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (number[i] < number[j])
			{
				a = number[i];
				number[i] = number[j];
				number[j] = a;
			}
		}
	}

	printf("The numbers arranged in descending order are given below\n");
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", number[i]);
	}
}


// Descending order( 2nd answer)
#include <stdio.h>
void main()
{
	int arr1[100];
	int n, i, j, tmp;


	printf("\n\nsort elements of array in descending order :\n");
	printf("----------------------------------------------\n");

	printf("Input the size of array : ");
	scanf("%d", &n);

	printf("Input %d elements in the array :\n", n);
	for (i = 0; i < n; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr1[i] < arr1[j])
			{
				tmp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = tmp;
			}
		}
	}

	printf("\nElements of array is sorted in descending order:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n\n");
}




















