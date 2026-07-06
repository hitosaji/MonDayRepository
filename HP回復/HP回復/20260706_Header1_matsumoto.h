#pragma once

///<summary>
///入力チェック
/// </summary>
///	<param name="hp">プレイヤーHP</param>
int InputCheck(int min,int max);

///<summary>
///回復関数
/// </summary>
///	<param name="hp">プレイヤーHP</param>
void Heal(int &HP);
//実行関数
int Game();