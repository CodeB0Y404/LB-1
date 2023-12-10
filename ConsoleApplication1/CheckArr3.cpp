//#include "Libraries.h"
//
//bool CheckArr3(int Arr[], int min_elements[], int size)
//{
//	min_elements = new int[size];
//	int min;
//	min_elements[0] = Arr[0];
//	min = Arr[0];
//	int temp = min;
//	int j = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (Arr[i] == 0)
//		{
//			min = Arr[i];
//
//			min_elements[j++] = i;
//			if (temp != min)
//			{
//				temp = min;
//				j = 0;
//				min_elements = new int[j]; //???
//				min_elements[j++] = i;
//			}
//		}
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		if (min_elements[i] == size - 1 || min_elements[i] == size - 2)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Libraries.h"

int* CheckArr3(const int* Arr, int size, int& outsize)
{
    int minVal = Arr[0];
    int count = 1;
    int* minIndexes = NULL;
    // Находим минимальное значение в массиве и подсчитываем количество минимальных элементов
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] < minVal)
        {
            minVal = Arr[i];
            //count = 1;  // Если нашли новое минимальное значение, сбрасываем count
        }
        else if (Arr[i] == minVal)
        {
            count++;  // Увеличиваем количество встреченных минимальных элементов
        }
    }

    // Выделяем динамическую память для массива индексов минимальных элементов
    minIndexes = new int[count];
    int index = 0;

    // Заполняем массив индексов минимальных элементов
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == minVal)
        {
            minIndexes[index] = i;
            index++;
        }
    }
    outsize = count;  // Возвращаем размер массива через ссылочный параметр

    return minIndexes;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    int i = 0;
//    int y = 1;
//        if (minIndexes[i] == size - 1 || minIndexes[i] == size - 2 || (minIndexes[y]-minIndexes[i])<=2)
//        {
//            delete[] minIndexes;
//            return true;
//        }
//        else
//        {
//            delete[] minIndexes;
//            return false;
//        }
//    
//        //delete[] minIndexes;
//   
//}

