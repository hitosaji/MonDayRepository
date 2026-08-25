#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //ポインター変数から変数aのアドレスを取得
    int* p = &a;

    //変数aの表示
    cout << "aの初期値: " << a << endl;
    //ポインタ変数pからaに変換
    *p = 10;
    //変数aの表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}