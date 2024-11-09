#include <iostream>
#include <iomanip>
using namespace std;

// Hàm này chỉ phục vụ mục đích in ra các giá trị một cách tường minh, không cần thiết phải tìm hiểu.
void printValues(int **arr, int size)
{
    int format[2] = {10, 15}; // Khởi tạo giá trị xác định khoảng cách
    cout << setw(format[0]) << left << "Index"
         << setw(format[1]) << left << "Value" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(format[0]) << left << i + 1
             << setw(format[1]) << left << arr[i] << endl;
    }
}

int main()
{
    int rows, columns;
    cout << "Nhap so hang cua mang: ";
    cin >> rows;
    cin.ignore(256, '\n'); // Bỏ qua ký tự xuống dòng còn lại trong bộ đệm
    cout << "Nhap so cot cua mang: ";
    cin >> columns;
    cin.ignore(256, '\n'); // Bỏ qua ký tự xuống dòng còn lại trong bộ đệm

    // Cấp phát bộ nhớ cho mảng hai chiều
    // arr là con trỏ đến con trỏ, mỗi phần tử của arr là một con trỏ đến một mảng một chiều
    // Cụ thể, arr là một mảng các con trỏ, mỗi con trỏ trỏ đến một mảng một chiều
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns]; // Cấp phát bộ nhớ cho từng mảng con
    }

    printValues(arr, rows); // Gọi hàm in giá trị của mảng

    /* 
       Giải phóng bộ nhớ cho mảng hai chiều
       Mảng hai chiều được cấp phát động gồm nhiều mảng con. Để giải phóng hoàn toàn bộ nhớ,
       chúng ta cần giải phóng từng mảng con trước, sau đó mới giải phóng mảng cha.
      
       Hình dung mảng hai chiều như một tòa nhà nhiều tầng, mỗi tầng là một mảng con.
       Khi phá dỡ tòa nhà, chúng ta phải phá từng tầng trước, sau đó mới phá móng (mảng cha).
      
       - Vòng lặp đầu tiên: Duyệt qua từng mảng con và giải phóng bộ nhớ bằng delete[].
       - Sau vòng lặp: Giải phóng bộ nhớ cho mảng cha.
    */
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i]; // Giải phóng mảng con thứ i
    }
    delete[] arr; // Giải phóng mảng cha
    return 0;
}
