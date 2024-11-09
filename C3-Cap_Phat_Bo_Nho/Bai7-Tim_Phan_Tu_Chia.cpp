/*
** Tìm và in các số chia hết cho 3 và không chia hết cho 5 trong mảng **

* **Mô tả:**
    - Nhập từ bàn phím kích thước của một mảng số nguyên.
    - Cấp phát động bộ nhớ cho mảng.
    - Nhập giá trị cho từng phần tử của mảng.
    - Duyệt qua mảng để tìm các số chia hết cho 3 và không chia hết cho 5.
    - In ra các số tìm được ra màn hình.
    - Giải phóng bộ nhớ đã cấp phát.

* **Yêu cầu bài toán:**
    - Đầu vào: Kích thước của mảng và các phần tử của mảng.
    - Đầu ra: Các số trong mảng chia hết cho 3 và không chia hết cho 5.

* **Lưu ý:**
    - Sử dụng `new` để cấp phát động bộ nhớ cho mảng.
    - Sử dụng `delete[]` để giải phóng bộ nhớ khi không còn sử dụng.
    - Sử dụng phép toán modulo (`%`) để kiểm tra tính chia hết.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int* arr = nullptr;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if(arr[i] % 3 == 0 && arr[i] % 5 != 0){
            cout << arr[i] << " ";
        }
    }

    delete [] arr;
    arr = nullptr;

    return 0;
}