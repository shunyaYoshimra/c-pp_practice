#ifndef _RAT_H_
#define _RAT_H_

class CRat
{
public:
  CRat();
  ~CRat();

  // インスタンスに対して呼ぶ関数ではない
  static void showNum();
  void squeak();

private:
  int m_id;
  // staticをつけた静的メンバは全てのインスタンスに対して一つしか生成されない
  static int m_count;
};

#endif // _RAT_H_