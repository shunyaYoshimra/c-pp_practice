#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y)
{
  return x + y;
}

int main()
{
  cout << add<int>(4, 3) << endl;
  cout << add<string>("ABE", "DEF") << endl;
  cout << add(1, 2) << endl;
  // 下の場合にはstring型かchar型か判別がつかないためエラーが出る
  // cout << add("abc", "def") << endl;
  return 0;
}