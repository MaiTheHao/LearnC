// CÓ ẢNH MINH HỌA
#include <iostream>
#include <cmath>
using namespace std;

/*
* Hàm tính giá trị của hàm số S = √(1 + √(2 + √(3 + ... + √(n))))
*
* @param n: Số nguyên dương, giới hạn trên của biểu thức
* @param i: Biến đếm, dùng để lặp qua các số từ 1 đến n (mặc định là 1)
* @return Giá trị của hàm số tại n
*/
double func2(int n, int i = 1) {
    // Trường hợp cơ sở: khi i = n, chỉ cần tính căn bậc hai của n
    if (i == n) {
        return sqrt(n);
    } else {
        // Trường hợp đệ quy: tính căn bậc hai của tổng i và kết quả đệ quy tiếp theo
        // Tăng i lên 1 để chuyển sang số tiếp theo trong biểu thức
        return sqrt(i + func2(n, ++i));
    }
}

int main() {
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    cin.ignore(256, '\n'); // Loại bỏ ký tự thừa trong dòng nhập

    // Gọi hàm func2 để tính và in kết quả
    cout << "Ket qua: " << func2(n) << endl;

    return 0;
}
