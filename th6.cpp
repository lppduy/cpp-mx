
// TH6
// Nhập 1 số gồm 4 chữ số
// Xuất theo thứ tự ngược lại
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Nhập số gồm 4 chữ số: ";
    cin >> number;

    int digit1 = number % 10;         // Lấy chữ số hàng đơn vị
    int remainingDigits1 = number / 10; // Lấy ba chữ số còn lại

    int digit2 = remainingDigits1 % 10;         // Lấy chữ số hàng chục
    int remainingDigits2 = remainingDigits1 / 10; // Lấy hai chữ số còn lại

    int digit3 = remainingDigits2 % 10; // Lấy chữ số hàng trăm
    int digit4 = remainingDigits2 / 10; // Lấy chữ số hàng nghìn

    cout << "Số theo thứ tự ngược lại: " << digit1 << digit2 << digit3 << digit4 << endl;

    return 0;
}



