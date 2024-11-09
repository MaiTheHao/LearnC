#include <iostream>

using namespace std;

/*
* Hàm tính tổng các số từ 1 đến n theo công thức: S(n) = n/(n+1) + S(n-1)
*
* @param n: Số nguyên dương, giới hạn trên của dãy số
* @return: Tổng các số từ 1 đến n
*/
float sum(int n) {
    // Kiểm tra điều kiện dừng: khi n = 0, tổng bằng 0
    if (n == 0) {
        return 0;
    }

    // Áp dụng công thức đệ quy:
    // Tính phần tử thứ n: n / (n+1)
    // Gọi đệ quy để tính tổng các phần tử còn lại: sum(n-1)
    return (static_cast<float>(n) / (n + 1)) + sum(n - 1);
}

int main(){
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << sum(n);
    return 0;
}