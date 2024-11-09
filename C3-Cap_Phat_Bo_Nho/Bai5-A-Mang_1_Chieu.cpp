/*
** Nhập và in mảng số nguyên **

* **Mô tả:**
    - Nhập từ bàn phím kích thước của một mảng số nguyên.
    - Cấp phát động bộ nhớ cho mảng.
    - Nhập giá trị cho từng phần tử của mảng.
    - In ra màn hình các phần tử của mảng.
    - Giải phóng bộ nhớ đã cấp phát.

* **Lưu ý:**
    - Sử dụng `new` để cấp phát động bộ nhớ cho mảng.
    - Sử dụng `delete[]` để giải phóng bộ nhớ khi không còn sử dụng.
    - **Nên kiểm tra xem phép cấp phát bộ nhớ có thành công hay không để tránh lỗi chương trình.**

* **Giải thích chi tiết về cấp phát động:**
    - **Mục đích:** Cấp phát động cho phép chương trình yêu cầu bộ nhớ trong quá trình chạy, thay vì phải xác định kích thước bộ nhớ trước khi biên dịch.
    - **Lí do:** Trong nhiều trường hợp, kích thước bộ nhớ cần thiết không thể xác định trước, hoặc có thể thay đổi trong quá trình chạy chương trình.
    - **Ưu điểm:** Linh hoạt trong việc sử dụng bộ nhớ, có thể cấp phát và giải phóng bộ nhớ khi cần thiết.
    - **Nhược điểm:** Nếu không quản lý tốt, có thể dẫn đến rò rỉ bộ nhớ (memory leak) hoặc lỗi truy cập bộ nhớ (dangling pointer).

* **Giải thích chi tiết về mảng dưới góc độ con trỏ:**
    - **Mảng và con trỏ:** Trong C++, mảng và con trỏ có mối quan hệ chặt chẽ. Tên của mảng thực chất là một con trỏ trỏ đến phần tử đầu tiên của mảng.
    - **Cấp phát động:** Khi sử dụng `new` để cấp phát bộ nhớ cho mảng, chúng ta thực chất đang yêu cầu một vùng nhớ liên tiếp đủ để chứa các phần tử của mảng và trả về con trỏ trỏ đến vùng nhớ đó.
    - **Truy cập phần tử:** Các phần tử của mảng có thể được truy cập thông qua con trỏ bằng cách sử dụng toán tử chỉ số (`[]`) hoặc toán tử dereference (`*`).
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void printValues(int *arr, int size) {
    int format[2] = {10, 15};
    cout << setw(format[0]) << left << "Index"
         << setw(format[1]) << left << "Value" << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(format[0]) << left << i + 1
             << setw(format[1]) << left << arr[i] << endl;
    }
}

int main() {
    int size = 0;
    cout << "Nhap kich thuoc mang: ";
    cin >> size; cin.ignore(256, '\n');

    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        cin >> arr[i];
        cin.ignore(256, '\n');
    }

    printValues(arr, size);

    delete[] arr;
    arr = nullptr;
    return 0;
}
