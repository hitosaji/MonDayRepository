#include<iostream>
#include"20260706_HeaderMain2_matsumoto.h"
#include"Config.h"
using namespace std;

int CheckInput(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (num < min || num > max)
		{
			cout << "入力が間違っています\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

int Game()
{
	int player, cpu, rurer;
	int playerlevel = 0;
	int playerexp = 0;
	int playercap = 0;
	while (true)
	{
			srand((unsigned int)time(NULL));

			cout << "====================\n" << "lv:" << playerlevel << "\n"
				<< "EXP:" << playercap << "\n" << "====================\n";

		player = CheckInput(ConstNumber::SERECT_MIN, ConstNumber::SERECT_MAX);
		cpu = rand() % ConstNumber::HAND;

		rurer = player - cpu;
		if (rurer == -1 || rurer == 2)
		{
			cout << "あなたの勝ち！" << endl;
			playercap += rand() % ConstNumber::EXP_POINT;
			cout << "経験値を" << playercap << "獲得しました！\n";
		}
		else if (rurer == 0)
		{
			cout << "引き分け" << endl;
		}
		else
		{
			cout << "あなたの負けです" << endl;
		}

		if (playercap > ConstNumber::EXP_MAX)
		{
			playerlevel++;
			cout << "レベルアップ！Lv" << playerlevel << "になりました！\n";
			playercap -= ConstNumber::EXP_MAX;
		}

		if (playerlevel > ConstNumber::LEVEL_MAX)
		{
			cout << "ゲームクリア！！\n";
			break;
		}
	}
	return 0;
}