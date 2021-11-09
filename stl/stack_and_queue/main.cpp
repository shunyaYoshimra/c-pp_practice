#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
  stack<int> stk;
  queue<int> que;
  int data[] = {1,
                2,
                3};
  // データの登録
  for (int i = 0; i < 3; i++)
  {
    stk.push(data[i]);
    que.push(data[i]);
  }
  // データの出力
  cout << "stack:";
  while (!stk.empty())
  {
    // topで要素を取得し,popでその要素をstkからとり除く(2段階の作業が必要)
    cout << stk.top() << " ";
    stk.pop();
  }
  cout << endl;
  cout << "queue";
  // データの出力
  while (!que.empty())
  {
    // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
    cout << que.front() << " ";
    que.pop();
  }
  cout << endl;
  return 0;
}