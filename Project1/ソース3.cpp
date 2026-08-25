#include<iostream>
using namespace std;

int main()
{
	//
	int numbers[5] = { 35,82,17,96,54 };
	int* pnumbers;
	int max = 0;

	pnumbers = numbers;
	for (int i = 0; i < 5; i++)
	{
		cout << "&ary[" << i << "]:" << &numbers[i] << endl;
		if (max < *(pnumbers + i))
		{
			max = *(pnumbers + i);
		}

	}
	cout << "Å‘å’lF" << max << endl;
}
