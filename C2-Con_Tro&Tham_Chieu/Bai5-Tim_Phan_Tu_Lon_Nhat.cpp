// Bài toán tìm phần tử lớn nhất trong mảng sử dụng con trỏ
//
// Mô tả:
//   - Nhập vào một mảng số nguyên.
//   - Sử dụng con trỏ để duyệt qua từng phần tử trong mảng.
//   - So sánh từng phần tử với giá trị lớn nhất hiện tại.
//   - Cập nhật giá trị lớn nhất nếu tìm thấy phần tử lớn hơn.
//   - In ra giá trị lớn nhất tìm được.
//
// Giải thích:
//   - (arr + i): Trỏ đến địa chỉ của phần tử thứ i trong mảng.
//   - *(arr + i): Lấy giá trị tại địa chỉ đó (tức là giá trị của phần tử thứ i).
//   - Thực chất, mảng là một con trỏ trỏ đến phần tử đầu tiên của nó.
//   - Cách đơn giản hơn: Sử dụng arr[i] để truy cập phần tử thứ i là cách viết thông thường hơn và dễ hiểu hơn.
//   - Ưu điểm của cách sử dụng con trỏ:
//     - Cung cấp cái nhìn sâu hơn về cách hoạt động của mảng trong bộ nhớ.
//     - Được sử dụng rộng rãi trong các thuật toán phức tạp hơn.
//   - Nhược điểm của cách sử dụng con trỏ:
//     - Dễ gây nhầm lẫn nếu không hiểu rõ về con trỏ.
//     - Có thể dẫn đến các lỗi khó tìm nếu không sử dụng cẩn thận.
//
// Lưu ý:
//   - Để tránh các lỗi tiềm ẩn, nên sử dụng cách viết arr[i] trừ khi có lý do đặc biệt để sử dụng con trỏ.
//   - Khởi tạo giá trị ban đầu cho maxValue bằng phần tử đầu tiên của mảng để đảm bảo tính chính xác trong trường hợp tất cả các phần tử đều âm.
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxValue = arr[0]; // Sửa giá trị khởi tạo của maxValue
    for (int i = 0; i < n; i++)
    {
        if (maxValue < *(arr + i))
        {
            maxValue = *(arr + i);
        }
    }
    cout << maxValue;
}