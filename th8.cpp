
// TH8
// Nhập vào 1 số thực 
// Xuất ra màn hình số lấy chính xác 3 chữ số thập phân từ ban đầu bằng 2 cách
// cách 1: sử dụng hàm làm tròn
// cách 2: sử dụng định dạng xuất
#include <iostream>
#include <iomanip> // Thư viện sử dụng định dạng xuất
#include <cmath>   // Thư viện sử dụng hàm làm tròn
using namespace std;

int main() {
    double number;
    cout << "Nhập số thực: ";
    cin >> number;

    // Cách 1: Sử dụng hàm làm tròn
    double roundedNumber = round(number * 1000.0) / 1000.0;
    cout << "Số sau khi làm tròn: " << roundedNumber << endl;

    // Cách 2: Sử dụng định dạng xuất
    cout << fixed << setprecision(3) << "Số với 3 chữ số thập phân: " << number << endl;

    return 0;
}




