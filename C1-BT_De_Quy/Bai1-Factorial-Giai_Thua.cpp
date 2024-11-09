#include <iostream>
using namespace std;

// Hàm đệ quy tính giai thừa
// Đệ quy là một kỹ thuật trong lập trình, trong đó một hàm tự gọi lại chính nó
// để giải quyết một bài toán nhỏ hơn của cùng một bài toán lớn hơn.
// Hàm này nhận vào một số nguyên n và trả về giai thừa của n
unsigned long long int factorial(int n)
{
    // Nếu n bằng 0, trả về 1 vì 0! = 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // Nếu n khác 0, trả về n * giai thừa của (n-1)
        return n * factorial(n - 1);
    }
}

// Hàm main
int main()
{
    int n;
    cout << "Nhap so n (0-65): ";
    cin >> n;
    /*Tại đây bạn hãy kiểm tra và xử lí ngoại lệ đầu vào nếu muốn*/ 
    // Sử dụng unsigned long long int để lưu trữ kết quả giai thừa vì giá trị giai thừa
    // có thể rất lớn, vượt quá phạm vi của các kiểu dữ liệu số nguyên khác như int hoặc long.
    unsigned long long int result = factorial(n);
    cout << result << endl;
}