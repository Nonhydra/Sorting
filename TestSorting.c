
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void FillingArray(int* array, int size)
{
	printf("\nEnter data: \n");
	printf("1 - Increasing data\n");
	printf("2 - Decreasing data\n");
	printf("3 - Random data\n");

	int number = 0;
	scanf("%d", &number);

	switch (number)
	{
	case 1:
		for (int i = 0; i < size; i++)
		{
			array[i] = i;
		}
		break;

	case 2:
		for (int i = 0; i < size; i++)
		{
			array[i] = size - i;
		}
		break;
	default:
		for (int i = 0; i < size; i++)
		{
			array[i] = rand();
		}
		break;
	}
}

int main()
{

	int *arr = NULL;
	int number = 0;

	int size = 32768;

	unsigned int searchTimeSort = 0;
	unsigned int startTime = 0;
	unsigned int endTime = 0;

	arr = malloc(size * sizeof(int));

	FillingArray(arr, size);

	printf("\nSorting type: \n");
	printf("1 - Bubble sorting\n");
	printf("2 - Quickly sorting\n");

	scanf("%d", &number);

	switch (number)
	{
	case 1:
		startTime = clock();
		BubbleSort(arr, size);
		endTime = clock();
		searchTimeSort = endTime - startTime;
		break;

	case 2:
		startTime = clock();
		QuickSort(arr, size, 0, size - 1);
		endTime = clock();
		searchTimeSort = endTime - startTime;
		break;

	default:
		break;
	}

	printf("\nTime of Sorting %f \n", searchTimeSort / 1000000.0);

	free(arr);
	return 0;
}
