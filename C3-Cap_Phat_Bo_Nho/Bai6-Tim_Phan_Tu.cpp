/*
** Tìm kiếm phần tử trong mảng **

* **Mô tả:** 
    - Nhập từ bàn phím một mảng số nguyên và một giá trị cần tìm.
    - Tìm vị trí đầu tiên của phần tử có giá trị bằng giá trị cần tìm trong mảng.
    - Trả về vị trí tìm thấy hoặc -1 nếu không tìm thấy.

* **Thuật toán:**
    - Duyệt tuần tự qua các phần tử của mảng.
    - Nếu tìm thấy phần tử có giá trị bằng giá trị cần tìm, trả về vị trí đó ngay lập tức.
    - Nếu duyệt hết mảng mà không tìm thấy, trả về -1.

* **Lưu ý:**
    - Hàm `search` sử dụng con trỏ để truyền tham số `z` nhằm thay đổi trực tiếp giá trị của biến `z` trong hàm `main`.
    - Giá trị `i` (vị trí phần tử tìm thấy) được gán cho `*z` để truyền kết quả về hàm gọi.
*/

#include <iostream>
using namespace std;

// Hàm tìm kiếm phần tử trong mảng
void search(int* z, int arr[], int size) {
    // Duyệt qua từng phần tử của mảng
    for(int i = 0; i < size; i++) {
        // Nếu tìm thấy phần tử có giá trị bằng giá trị cần tìm
        if(arr[i] == *z) {
            // Gán vị trí tìm thấy cho *z và kết thúc hàm
            *z = i;
            return;
        }
    }
    // Nếu không tìm thấy, gán -1 cho *z
    *z = -1;
}

int main() {
    int size = 0;

    // Nhập kích thước của mảng từ bàn phím
    cout << "Nhap kich thuoc cua mang: ";
    cin >> size; cin.ignore(256, '\n');

    // Cấp phát bộ nhớ động cho mảng
    int* array = new int[size];

    // Nhập các phần tử của mảng từ bàn phím
    for(int i = 0; i < size; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        cin >> array[i]; cin.ignore(256, '\n');
    }

    int z = 0;
    // Nhập giá trị cần tìm trong mảng từ bàn phím
    cout << "Nhap so can tim trong mang: ";
    cin >> z; cin.ignore(256, '\n');

    // Gọi hàm tìm kiếm
    search(&z, array, size);

    // Giải phóng bộ nhớ đã cấp phát
    delete[] array;
    array = nullptr;

    // In ra vị trí tìm thấy hoặc -1 nếu không tìm thấy
    cout << z;

    return 0;
}
