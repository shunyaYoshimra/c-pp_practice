#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include "iinf1.h"
#include "iinf2.h"

using namespace std;

class CSample : public iinf1, public iinf2
{
public:
  void func1()
  {
    cout << "func1" << endl;
  }
  void func2()
  {
    cout << "func2" << endl;
  }
  void func3()
  {
    cout << "func3" << endl;
  }
  void func4()
  {
    cout << "func4" << endl;
  }
};

#endif // _SAMPLE_H_