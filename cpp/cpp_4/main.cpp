#include <iostream>

using namespace std;

// c++ではbool型が使えるようになる。
// bool型にはtrueかfalseが入る
bool judge(int);

int main()
{
  int n;
  cout << "整数を入力:";
  cin >> n;
  if (judge(n))
  {
    cout << "この数は0以上です。" << endl;
  }
  else
  {
    cout << "この数は0未満です。" << endl;
  }
}

bool judge(int n)
{
  if (n >= 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}