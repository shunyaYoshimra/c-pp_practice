#include <iostream>
#include "../header/sample.h"

using namespace std;

// classの中のprivateに定義された変数、関数にはアクセスできない

int main()
{
  Sample s;
  s.a = 1;
  // s.b = 2;
  s.func1();
  // s.func2();
}