#include <iostream>

using namespace std;

int main()
{
  cout << "ABC" << endl;
  // 処理の途中で変数を宣言
  // int i;
  // for (i = 0; i < 10; i++)
  // for文の変数iは()の中で定義すると良い
  for (int i = 0; i < 10; i++)
  {
    cout << ":" << i;
  }
  cout << endl;
  return 0;
}