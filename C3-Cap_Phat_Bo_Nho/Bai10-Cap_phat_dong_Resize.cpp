#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Hàm thay đổi kích thước mảng 1 chiều
int *resize1D(int *arr, int &size, int new_size)
{
    int *new_arr = new int[new_size];

    // Sao chép các phần tử từ mảng cũ sang mảng mới
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }

    size = new_size;
    delete[] arr; // Giải phóng bộ nhớ của mảng cũ
    return new_arr;
}

// Hàm thay đổi kích thước mảng 2 chiều cũng phát triển từ mảng 1 chiều, bạn hãy tự thử nhé !!!

int main()
{
    int size = 5;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) 
        cin >> arr[i];

    // In mảng 1 chiều ban đầu
    cout << "Mang 1 chieu ban dau: ";
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    
    cout << "\n. . . Thay doi kich thuoc mang 1 chieu . . ." << endl;
    arr = resize1D(arr, size, 10);

    // In mảng 1 chiều sau khi thay đổi kích thước
    cout << "Mang 1 chieu sau khi thay doi kich thuoc: ";
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " ";

    // Giải phóng bộ nhớ của mảng 1 chiều
    delete[] arr;
    return 0;
}

/*
Độ phức tạp thời gian khi thay đổi kích thước mảng:
- Đối với mảng 1 chiều: O(n), với n là số phần tử trong mảng cũ.
- Đối với mảng 2 chiều: O(rows * cols), với rows và cols là số hàng và số cột của mảng cũ.

Vấn đề của vector:
- Vector trong C++ tự động thay đổi kích thước khi cần thiết, nhưng điều này có thể gây ra độ trễ do việc sao chép các phần tử từ mảng cũ sang mảng mới.
- Độ phức tạp trung bình của việc thêm phần tử vào vector là O(1), nhưng trong trường hợp xấu nhất (khi vector phải thay đổi kích thước), độ phức tạp là O(n).
*/