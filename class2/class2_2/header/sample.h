
// 原則的にメンバー変数はprivateにする(カプセル化)
class CSample
{
public:
  void setNum(int num); //メンバー変数をセットするsetter
  int getNum();         //メンバー変数をゲットするgetter

private:
  int m_num;
};