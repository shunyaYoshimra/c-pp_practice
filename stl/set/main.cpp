#include <iostream>
#include <string>
#include <set>

using namespace std;

// setは重複を許さない

int main()
{
  set<string> names;
  names.insert("Tom");
  names.insert("Mike");
  names.insert("Mike");
  names.insert("Bob");
  // 登録されている全データを表示
  set<string>::iterator it; //iteratorの定義
  for (it = names.begin(); it != names.end(); it++)
  {
    cout << *it << endl;
  }
  // BobとSteveがデータ内に存在するか調べる
  string n[] = {"Bob",
                "Steve"};
  for (int i = 0; i < 2; i++)
  {
    it = names.find(n[i]);
    if (it == names.end())
    {
      // データがset内に存在しなし
      cout << n[i] << " is not in a set" << endl;
    }
    else
    {
      // データがset内に存在する
      cout << n[i] << " is in a set" << endl;
    }
  }
  return 0;
}