#include <iostream>

using namespace std;

struct DData
{
  int n;
  double d;
};

int main()
{
  // c++の場合は構造体を定義したらtypedefを使わなくてもその構造体の型で変数を定義できる
  DData dt;
  dt.n = 100;
  dt.d = 12.34;
  cout << "dt.n =" << dt.n << endl
       << "dt.d =" << dt.d << endl;
}