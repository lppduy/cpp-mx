#include <iostream>
using namespace std;
// TH5
// Nhập 1 số gồm 3 chữ số
// Yêu cầu xuất tổng các chữ số của nó ra màn hình
int main() {
    int number;
    cout << "Nhập số gồm ba chữ số: ";
    cin >> number; // vd: number = 123

    int digit1 = number / 100;     // Lấy chữ số hàng trăm
    // digit1 = 1
    int remainingDigits = number % 100; // Lấy hai chữ số còn lại
    // remainingDigits = 23
    int digit2 = remainingDigits / 10;  // Lấy chữ số hàng chục
    // digit2 = 2
    int digit3 = remainingDigits % 10;  // Lấy chữ số hàng đơn vị
    // digit3 = 3

    int sum = digit1 + digit2 + digit3; // Tính tổng: 1 + 2 +3 = 6

    cout << "Tổng của ba chữ số là: " << sum << endl;

    return 0;
}


