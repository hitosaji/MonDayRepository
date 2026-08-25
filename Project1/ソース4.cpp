#include<iostream>
using namespace std;

void Times(int number[],int all[], int player)
{
	cin >> player;

	for (int i = 0; i < 5; i++)
	{
		all[i] = number[i] * player;
	}
}


int main()
{
	int numbers[5] = { 10,20,30,40,50 };
	int all[5] = {};
	int* pnumbers;
	
	int player;

	cin >> player;

	for (int i = 0; i < 5; i++)
	{
		all[i] = numbers[i] * player;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << all[i] << endl;
	}
	
	




	return 0;
}