
// TH7
// Nhập vào 2 ký tự
// Xuất ra mã ASCII của từng ký tự và tổng giá trị mã ASCII của 2 ký tự
#include <iostream>
using namespace std;

int main() {
    char char1, char2;
    cout << "Nhập vào hai ký tự: ";
    cin >> char1 >> char2;

    int ascii1 = int(char1); // Chuyển đổi ký tự thành mã ASCII
    int ascii2 = int(char2);

    cout << "Mã ASCII của ký tự thứ nhất (" << char1 << "): " << ascii1 << endl;
    cout << "Mã ASCII của ký tự thứ hai (" << char2 << "): " << ascii2 << endl;

    int sumAscii = ascii1 + ascii2; // Tính tổng giá trị mã ASCII

    cout << "Tổng giá trị mã ASCII của hai ký tự là: " << sumAscii << endl;

    return 0;
}




