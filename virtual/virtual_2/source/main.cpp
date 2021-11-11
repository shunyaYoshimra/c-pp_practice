#include <iostream>
#include "../header/iinf1.h"
#include "../header/iinf2.h"
#include "../header/sample.h"

// iinf1のみが使える関数　
void foo(iinf1 *);
// iinf2のみが使える関数
void bar(iinf2 *);

int main()
{
  CSample *s = new CSample();
  foo((iinf1 *)s);
  bar((iinf2 *)s);
  return 0;
}

// iinf1のみが使える関数
void foo(iinf1 *p)
{
  p->func1();
  p->func2();
}

// iinf2のみが使える関数
void bar(iinf2 *p)
{
  p->func3();
  p->func4();
}
