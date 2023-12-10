#include "libraries.h"
#include "prototypes.h"

int sum(int Arr[], int size)
{
	int sum = 0, ind;

	for (int i = 0; i < size; i++)
	{
		if (Arr[i] == 0)
		{
			ind = i;
			break;
		}
	}

	for (int f = ind; f < size; f++)
	{
		sum += abs(Arr[f]);
	}

	return sum;
}

	//int min;
	//min_elements[0] = Arr[0];
	//min = Arr[0];
	//int temp = min;
	//int j = 0;

	//for (int i = 0; i < size; i++)
	//{
	//	if (Arr[i] == 0)
	//	{
	//		min = Arr[i];

	//		min_elements[j++] = i;
	//		if (temp != min)
	//		{
	//			temp = min;
	//			j = 0;
	//			min_elements = new int[j];
	//			min_elements[j++] = i;
	//		}
	//	}
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	if (min_elements[i]==size-1 || min_elements[i]==size-2)
	//	{
	//		cout << "Сумму невозможно посчитать, так как нулевой элемент одномерного массива стоит на последней либо предпоследней позиции одномерного массива" << endl;
	//		return 0;
	//	}
	/*
			for (int f = ind; f < size; f++)
			{
				sum += abs(Arr[f]);
			}
		
	return sum;
}*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*int min;
	min_elements[0] = Arr[0];
	min = Arr[0];
	int temp = min;
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (Arr[i] == 0)
		{
			min = Arr[i];

			min_elements[j++] = i;
			if (temp != min)
			{
				temp = min;
				j = 0;
				min_elements = new int[j];
				min_elements[j++] = i;
			}
		}
	}*/

	//cout << "Сумма модулей элементов массива, расположенных после первого элемента, равного нулю = " << sum << endl;
	/*for (int i = 0; i < 1; i++)
		cout << "Координаты элементов равных нулю: " << min_elements[i];
	for (int i = 1; i < j; i++)
		cout <<", "<< min_elements[i];
	cout << endl;*/
	//delete[] Arr;
	//delete[] min_elements;
