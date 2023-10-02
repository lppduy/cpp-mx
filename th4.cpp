#include <iostream>
using namespace std;
// TH4
// Nhập 1 số gồm 2 chữ số
// Yêu cầu xuất tổng các chữ số của nó ra màn hình
int main() {
    int number;
    cout << "Nhập số gồm hai chữ số: ";
    cin >> number;

    int digit1 = number / 10;  // Lấy chữ số hàng đơn vị
    int digit2 = number % 10;  // Lấy chữ số hàng chục

    int sum = digit1 + digit2; // Tính tổng

    cout << "Tổng của hai chữ số là: " << sum << endl;

    return 0;
}
