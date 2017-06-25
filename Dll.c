#include <stdio.h>

void BubbleSort(int* sortingArray, int sizeArray)
{
	int temp = 0;
	for (int i = 0; i < sizeArray - 1; i++)
	{
		for (int j = 0; j < sizeArray - i - 1; j++)
		{
			if (sortingArray[j] > sortingArray[j + 1])
			{
				temp = sortingArray[j];
				sortingArray[j] = sortingArray[j + 1];
				sortingArray[j + 1] = temp;
			}
		}
	}
}

void QuickSort(int* sortingArray, int sizeArray, int left, int right)
{
	int x = sortingArray[left + (right - left) / 2];

	int i = left;
	int j = right;

	while (i <= j)
	{
		while (sortingArray[i] < x)
		{
			i++;
		}

		while (sortingArray[j] > x)
		{
			j--;
		}

		if (i <= j)
		{
			int temp = sortingArray[i];
			sortingArray[i] = sortingArray[j];
			sortingArray[j] = temp;

			i++;
			j--;
		}
	}

	if (i < right)
	{
		QuickSort(sortingArray, sizeArray, i, right);
	}

	if (left < j)
	{
		QuickSort(sortingArray, sizeArray, left, j);
	}
}
