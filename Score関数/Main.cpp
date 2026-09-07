#include"ScoreManager.h"
#include<iostream>
using namespace std;

int main()
{
	//ScoreManagerクラスをオブジェクト化(インスタンス)
	ScoreManager score;

	cout << "ゲームスタート\n";


	score.displayScores();

	//100ポイント獲得

	score.addPoints(100);
	score.displayScores();
	//50ポイント獲得

	score.updateHighScore();
	score.displayScores();

	cout << endl;
	cout << "ゲーム終了\n";

	score.resetScore();
	score.displayScores();

	return 0;
}