#include <iostream>
using namespace std;

// Bài toán: Cho số nguyên n được nhập từ bàn phím, bạn hãy viết hàm đệ quy trả về tổng các số lẻ từ 1 tới n.
unsigned long long sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 != 0)
    {
        return n + sum(n - 2);
    }
    else
    {
        return sum(n - 1);
    }
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "hello";
    cout << sum(n) << endl;
    return 0;
}