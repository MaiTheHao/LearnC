#include <iostream>
#include <cmath>

using namespace std;

// Hàm tính giai thừa của một số nguyên dương n
// Sử dụng đệ quy để tính toán hiệu quả
unsigned long long int factorial(int n) {
    // Trường hợp cơ sở: giai thừa của 0 bằng 1
    if (n == 0) {
        return 1;
    }
    // Trường hợp đệ quy: giai thừa của n bằng n nhân giai thừa của n-1
    return n * factorial(n - 1);
}

// Hàm tính giá trị của biểu thức: x^n/n! + x^(n-1)/(n-1)! + ... + x
// Sử dụng đệ quy để tính tổng các số hạng
double parent(double x, int n) {
    // Trường hợp cơ sở: khi n = 1, chỉ còn một số hạng là x
    if (n == 1) {
        return x;
    }

    // Trường hợp đệ quy: tính giá trị số hạng hiện tại và gọi đệ quy để tính tổng các số hạng còn lại
    return (float(pow(x, n) / factorial(n)) + parent(x, --n));
}

int main() {
    double x;
    int n;
    cout << "Nhap so x: ";
    cin >> x;
    cin.ignore(256, '\n');
    cout << "Nhap so n: ";
    cin >> n;

    // Gọi hàm parent để tính và in kết quả
    cout << parent(x, n) << endl;

    return 0;
}
