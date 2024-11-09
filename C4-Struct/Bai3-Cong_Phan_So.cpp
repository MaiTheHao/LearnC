#include <iostream>

using namespace std;

// Định nghĩa cấu trúc phân số với tử số và mẫu số
struct phanSo
{
    int tu, mau;
};

// Hàm tìm ước chung lớn nhất (UCLN) của hai số nguyên bằng thuật toán Euclid
int UCLN(int a, int b)
{
    if (b == 0)
    {
        return a; // Nếu b bằng 0 thì UCLN là a
    }
    return UCLN(b, a % b); // Gọi đệ quy để tìm UCLN của b và phần dư của a chia cho b
}

int main()
{
    phanSo x, y, z; // Khai báo ba phân số để lưu phân số thứ nhất, thứ hai và tổng
    int temp;       // Biến tạm để lưu UCLN

    // Nhập vào hai phân số từ bàn phím
    cin >> x.tu >> x.mau >> y.tu >> y.mau;

    // Tính tử số và mẫu số của tổng hai phân số
    z.tu = x.tu * y.mau + y.tu * x.mau; // Tử số của tổng
    z.mau = x.mau * y.mau;              // Mẫu số của tổng

    // Tìm UCLN của tử số và mẫu số của tổng
    temp = UCLN(z.tu, z.mau);

    // Rút gọn phân số bằng cách chia cả tử số và mẫu số cho UCLN
    if (z.mau / temp == 1)
    {
        // Nếu mẫu số sau khi rút gọn bằng 1 thì chỉ in ra tử số
        cout << z.tu / temp;
    }
    else
    {
        // Ngược lại, in ra phân số ở dạng rút gọn
        cout << z.tu / temp << "/" << z.mau / temp;
    }

    return 0;
}