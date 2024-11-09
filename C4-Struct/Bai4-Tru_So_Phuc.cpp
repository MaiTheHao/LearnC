#include <iostream>
using namespace std;

// Định nghĩa cấu trúc Complex để biểu diễn số phức
struct Complex {
    double real;       // Phần thực của số phức
    double imaginary;  // Phần ảo của số phức
};

int main() {
    Complex x, y, z;  // Khai báo ba biến số phức x, y, z

    // Nhập phần thực và phần ảo của số phức x
    cout << "Nhap phan thuc cua so phuc x: ";
    cin >> x.real;
    cout << "Nhap phan ao cua so phuc x: ";
    cin >> x.imaginary;

    // Nhập phần thực và phần ảo của số phức y
    cout << "Nhap phan thuc cua so phuc y: ";
    cin >> y.real;
    cout << "Nhap phan ao cua so phuc y: ";
    cin >> y.imaginary;

    // Tính toán hiệu của hai số phức x và y
    z.real = x.real - y.real;           // Phần thực của z
    z.imaginary = x.imaginary - y.imaginary;  // Phần ảo của z

    // Xuất kết quả
    cout << "Hieu cua hai so phuc la: " << z.real << " + " << z.imaginary << "i" << endl;

    return 0;  // Kết thúc chương trình
}