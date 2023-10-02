#include <iostream>
using namespace std;
// TH3
// Nhập 2 số a và b
// Yêu cầu hoán vị giá trị của a và b -> xuất kết quả ra màn hình
int main()
{
  float a,b;
  cout<<"Nhập số a: "<<endl;
  cin>> a;
  cout<<"Nhập số b: "<<endl;
  cin>> b;

  float temp = a;
  a = b;
  b = temp;

  cout << "Sau khi hoán đổi, a = " << a << " và b = " << b << endl;

  
  return 0;
}
