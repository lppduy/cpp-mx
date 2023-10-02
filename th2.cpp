#include <iostream>
using namespace std;
// TH2
int main()
{
  // Nhập 2 số nguyên N và M
   int N, M;
    cout << "Nhập số nguyên N: ";
    cin >> N;
    cout << "Nhập số nguyên M: ";
    cin >> M;

  // Tính tổng chữ số cuối cùng của N và của M
    int sumN = N % 10;
    int sumM = M % 10;
    int total = sumN + sumM;

    cout << "Tổng chữ số cuối cùng của N và M là: " << total << endl;
  return 0;
}




