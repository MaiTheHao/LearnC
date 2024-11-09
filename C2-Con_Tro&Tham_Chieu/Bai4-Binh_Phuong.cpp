/*
** Tính bình phương của một số nguyên sử dụng hàm và con trỏ **

** Mô tả:**
* Chương trình thực hiện phép tính bình phương của một số nguyên bằng cách sử dụng hàm.
* Hàm `squareNumber` nhận vào địa chỉ của hai số nguyên: số cần tính bình phương và địa chỉ để lưu kết quả.
* Hàm này thực hiện phép nhân số đó với chính nó và lưu kết quả vào địa chỉ được truyền vào.

** Cách thức hoạt động:**
1. Nhập một số nguyên từ bàn phím.
2. Gọi hàm `squareNumber` để tính bình phương, truyền địa chỉ của các biến vào hàm.
3. In kết quả ra màn hình.

** Ưu điểm của cách làm này:**
* Minh họa rõ ràng cách sử dụng con trỏ trong C++ để thao tác trực tiếp lên giá trị của biến.
* Tăng tính linh hoạt của chương trình, có thể dễ dàng mở rộng cho các phép tính khác.

** Ví dụ:**
Nếu nhập vào số 5, chương trình sẽ in ra kết quả là 25.
*/

#include <iostream>
using namespace std;

void squareNumber(int* number){
    *number *= *number;
}

int main() {
    int number;
    cin >> number;

    squareNumber(&number);
    
    cout << number;

    return 0;
}
 