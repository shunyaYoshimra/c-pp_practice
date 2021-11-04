#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class CAmbulance : public CCar
{
public:
  CAmbulance();
  // 継承を行なったデストラクにはvirtualをつける
  virtual ~CAmbulance();
  void savePeople();

private:
  int m_number;
};

#endif // _AMBULANCE_H_