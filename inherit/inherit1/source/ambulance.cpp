#include "../header/ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number(119)
{
  cout << "CAmbulanceオブジェクトを生成" << endl;
}

CAmbulance::~CAmbulance()
{
  cout << "CAmbulanceオブジェクトを破棄" << endl;
}

void CAmbulance::savePeople()
{
  cout << "救急救命活動" << endl
       << "呼び出しは" << m_number << "番" << endl;
}