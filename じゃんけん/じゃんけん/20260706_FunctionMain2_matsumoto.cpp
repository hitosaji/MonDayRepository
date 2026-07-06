#include<iostream>
#include"20260706_HeaderMain2_matsumoto.h"
#include"Config.h"
using namespace std;

int CheckInput(int min, int max)
{
	int num;
	while (true)
	{
		if (num > min || num < max)
		{
			cout << "“ü—Í‚ªŠÔˆá‚Á‚Ä‚¢‚Ü‚·\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

int Gane()
{
	while (true)
	{


		int player, cpu, rurer;
		int playerlevel = 0;
		int playera;

			srand((unsigned int)time(NULL));

		player = CheckInput(ConstNumber::SERECT_MIN, ConstNumber::SERECT_MAX);
		cpu = rand() % ConstNumber::HAND;

		rurer = player - cpu;
		if (rurer == -1 || rurer == 2)
		{
			cout << "PLAYER WIN" << endl;

		}
		else if (rurer == 0)
		{
			cout << "DRAW" << endl;
		}
		else
		{
			cout << "CPU WIN" << endl;
		}
	}
}