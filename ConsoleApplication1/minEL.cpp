#include "libraries.h"
#include "prototypes.h"

int minEL(int Arr[], int size)
{
    int el_min = 0, count_el_min = 1;
    for (int i = 1; i < size; ++i)
    {
        if (abs(Arr[i]) < abs(Arr[el_min]))
        {
            el_min = i;
        }
        if (Arr[el_min] == Arr[i])
        {
            count_el_min++;
        }
        /* else if (Arr[el_min] == Arr[i])
             count_el_min++;*/
    }

    return Arr[el_min];

}
   /* int min;
    min_elements[0] = Arr[0];
    min = Arr[0];
    int temp = min;
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] <= min)
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
    }
    cout << "Minimum absolute element of a one-dimensional array = " << Arr[el_min] << endl;
    for (int i = 0; i < 1; i++)
        cout << "Coordinates of the minimum elements of a one-dimensional array: " << min_elements[i];
    for (int i = 1; i < j; i++)
        cout <<", "<< min_elements[i];
    cout << endl;
    cout << "Number of minimum elements in a one-dimensional array = " << count_el_min << endl;

    delete[] Arr;
    delete[] min_elements;*/

