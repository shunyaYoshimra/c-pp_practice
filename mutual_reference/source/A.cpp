#include "../header/A.h"
#include "../header/B.h"
#include <iostream>

using namespace std;

A::A()
{
  m_pB = new B(this);
}

A::~A()
{
  delete m_pB;
}

void A::foo()
{
  cout << "foo" << endl;
}

void A::bar()
{
  m_pB->hoge();
}