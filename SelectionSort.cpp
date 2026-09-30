#include <iostream>


int main()

{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int i;
	for (i = 0; i < std::size(arr);i++)
	{
		int j;
		for (j = i + 1; j < std::size(arr);j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < std::size(arr); i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;

}