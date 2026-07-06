#include<iostream>
#include"20260706_Header1_matsumoto.h"
#include"Config1.h"
using namespace std;

void Heal(int& HP)
{
	HP += 20;
}
//入力チェック
int InputCheck(int min, int max)
{
	int num;
	//入力チェック
	while (true)
	{

		cin >> num;

		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。\n";
		}
		else
		{
			break;
		}
	}
	return num;
}
//実行関数
int Game()
{
	//変数
	int player;
	int hp = 100;
	cout << "プレイヤーのHPを回復したい場合は１、したくない場合は２を選択してください\n"
		<<"プレイヤーの体力"<<hp<<endl;

	player = InputCheck(ConstNumber::SELECT_MIN, ConstNumber::SELECT_MAX);
	/*cin >> player;*/

	if (player == 1)
	{
		Heal(hp);
		cout << "Yes\n";
	}
	else if(player==2)
	{
		cout << "No\n";
	}
	
	cout<< "プレイヤーの体力" << hp << endl;

	return 0;
}