#include "Libraries.h"

bool CheckArr(int a)
{
	if ((a % 2 == 0) && (a > 1))
	{
		return 1;
	}
	else
	{
		cout << "������������ ���� ���������� �������";
		return 0;
	}
}