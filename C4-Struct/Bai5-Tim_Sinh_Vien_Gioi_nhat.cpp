/*
Bài toán đặt ra:
Viết chương trình khai báo kiểu dữ liệu SinhVien với các thuộc tính string ten, int tuoi, int diem. 
Sau đó bạn hãy nhập từ bàn phím mảng n phần tử các SinhVien (mảng này được cấp phát động) và hiển thị ra màn hình thông tin của sinh viên có điểm cao nhất.
*/

#include <iostream>

using namespace std;

// Khai báo cấu trúc SinhVien
struct Student
{
    string ten;  // Tên sinh viên
    int tuoi;    // Tuổi sinh viên
    int diem;    // Điểm của sinh viên
};

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;  // Nhập số lượng sinh viên

    // Cấp phát động mảng sinh viên
    Student *students = new Student[n];

    // Nhập thông tin cho từng sinh viên
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << " (ten tuoi diem): ";
        cin >> students[i].ten >> students[i].tuoi >> students[i].diem;
    }

    // Tìm sinh viên có điểm cao nhất
    Student s = students[0];
    for (int i = 1; i < n; i++)
    {
        if (s.diem < students[i].diem)
        {
            s = students[i];
        }
    }

    // Hiển thị thông tin sinh viên có điểm cao nhất
    cout << "Sinh vien co diem cao nhat la:" << endl;
    cout << "Ten: " << s.ten << endl;
    cout << "Tuoi: " << s.tuoi << endl;
    cout << "Diem: " << s.diem << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] students;

    return 0;
}