#include<iostream>
using namespace std;

int main()
{
	//
	int numbers[5] = { 10,20,30,40,50 };
	int* pnumbers;

	pnumbers = numbers;
	for (int i = 0; i < 5; i++)
	{
		cout << *(pnumbers + i) << endl;
	}
}