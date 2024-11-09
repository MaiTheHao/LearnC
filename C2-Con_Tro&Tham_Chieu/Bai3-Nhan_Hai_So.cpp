/*
** Tính tích hai số nguyên sử dụng hàm và con trỏ **

** Mô tả:**
* Chương trình thực hiện phép nhân hai số nguyên bằng cách sử dụng hàm.
* Hàm `multiplyNumbers` nhận vào địa chỉ của ba số nguyên: hai số cần nhân và địa chỉ để lưu kết quả.
* Hàm này thực hiện phép nhân và lưu kết quả vào địa chỉ được truyền vào.

** Cách thức hoạt động:**
1. Nhập hai số nguyên từ bàn phím.
2. Gọi hàm `multiplyNumbers` để tính tích, truyền địa chỉ của các biến vào hàm.
3. In kết quả ra màn hình.

** Ưu điểm của cách làm này:**
* Minh họa rõ ràng cách sử dụng con trỏ trong C++ để thao tác trực tiếp lên giá trị của biến.
* Tăng tính linh hoạt của chương trình, có thể dễ dàng mở rộng cho các phép toán khác.

** Ví dụ:**
Nếu nhập vào hai số 5 và 3, chương trình sẽ in ra kết quả là 15.
*/

#include <iostream>
using namespace std;

void multiplyNumbers(int *num1, int *num2, int *tich)
{
    *tich = (*num1) * (*num2);
}

int main()
{
    int num1, num2, tich;
    cin >> num1 >> num2;

    multiplyNumbers(&num1, &num2, &tich);
    cout << tich;
    return 0;
}