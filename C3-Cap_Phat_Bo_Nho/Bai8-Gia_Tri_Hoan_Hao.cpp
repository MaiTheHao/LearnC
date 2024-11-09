/*
Để hiểu rõ vai trò của dòng code này, chúng ta cần quay lại với định nghĩa về "giá trị hoàn hảo".
Giá trị hoàn hảo của một phần tử: Là tổng của một dãy con liên tiếp bắt đầu từ phần tử đó, với độ dài của dãy con tăng dần qua từng bước (1, 2, 3, ...).
Giới hạn của dãy con: Độ dài tối đa của dãy con phụ thuộc vào vị trí bắt đầu và tổng số phần tử của mảng.

Ví dụ: Cho mảng [1, 2, 3, 4, 5], giá trị hoàn hảo của phần tử đầu tiên (1) sẽ là:
- Tổng của dãy con có độ dài 1: 1
- Tổng của dãy con có độ dài 2: 1 + 2 = 3
- Tổng của dãy con có độ dài 3: 1 + 2 + 3 = 6
- Tổng của dãy con có độ dài 4: 1 + 2 + 3 + 4 = 10
- Tổng của dãy con có độ dài 5: 1 + 2 + 3 + 4 + 5 = 15
Giá trị hoàn hảo của phần tử đầu tiên là 15.

Tương tự, giá trị hoàn hảo của phần tử thứ hai (2) sẽ là:
- Tổng của dãy con có độ dài 1: 2
- Tổng của dãy con có độ dài 2: 2 + 3 = 5
- Tổng của dãy con có độ dài 3: 2 + 3 + 4 = 9
- Tổng của dãy con có độ dài 4: 2 + 3 + 4 + 5 = 14
Giá trị hoàn hảo của phần tử thứ hai là 14.

Chương trình sẽ tính toán giá trị hoàn hảo cho từng phần tử trong mảng và tìm ra giá trị lớn nhất.
*/

#include <iostream>
#include <climits> // Thêm thư viện để sử dụng INT_MIN
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = INT_MIN; // Khởi tạo giá trị max là giá trị nhỏ nhất của kiểu int
    int *arr = new int[n]; // Cấp phát động mảng arr với n phần tử

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tính giá trị hoàn hảo cho từng phần tử trong mảng
    for (int i = 0; i < n; i++) {
        int sum = 0; // Tổng của dãy con
        int size = n - i; // Độ dài tối đa của dãy con bắt đầu từ phần tử thứ i
        int count = 0; // Số phần tử của dãy con

        // Xác định số phần tử của dãy con
        for (int j = 0; j < n; j++) {
            count += j;
            if (count > size) {
                count -= j;
                break;
            }
        }

        // Tính tổng của dãy con
        for (int k = i; k < count + i; k++) {
            sum += arr[k];
        }

        // Cập nhật giá trị max nếu tìm thấy tổng lớn hơn
        if (sum > max) {
            max = sum;
        }
    }

    // In ra giá trị hoàn hảo lớn nhất
    cout << max << endl;

    // Giải phóng bộ nhớ đã cấp phát cho mảng
    delete[] arr;
    return 0;
}