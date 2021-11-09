#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> l1;
  l1.push_back(1);
  l1.push_back(2);
  l1.push_front(3);
  // データの挿入
  list<int>::iterator itr;
  itr = l1.begin();
  itr++;
  l1.insert(itr, 4);
  for (itr = l1.begin(); itr != l1.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;
  return 0;
}