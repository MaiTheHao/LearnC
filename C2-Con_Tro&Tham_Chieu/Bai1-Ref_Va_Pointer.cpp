// Đoạn code này minh họa sự khác biệt giữa biến tham chiếu và con trỏ trong C++.
//
// - num: Biến số nguyên gốc.
// - thamChieuSo: Biến tham chiếu trỏ đến num. Bất kỳ thay đổi nào ở thamChieuSo cũng ảnh hưởng đến num.
// - conTroDenSo: Con trỏ trỏ đến địa chỉ của num.
//
// Hàm check_variables() dùng để hiển thị thông tin chi tiết về các biến, bao gồm:
// - Tên biến
// - Giá trị
// - Địa chỉ bộ nhớ
//
// Qua đoạn code này, ta thấy:
// - Biến tham chiếu và biến gốc có cùng địa chỉ bộ nhớ.
// - Con trỏ có địa chỉ riêng.
// - Thay đổi giá trị của biến tham chiếu sẽ ảnh hưởng đến biến gốc.

#include <iostream>
#include <iomanip>
using namespace std;

int num;
int &thamChieuSo = num;  // Biến tham chiếu thamChieuSo tham chiếu đến biến num
int *conTroDenSo = &num; // Con trỏ conTroDenSo trỏ đến địa chỉ của biến num

// Hàm này chủ yếu để IN ra giá trị, nên không nhất thiết tìm hiểu về các phương thức định dạng của thư viện iomanip (setfill, setw, left, right, ...)
void check_variables()
{
    system("cls"); // Xóa màn hình console
    cout << setfill(' ') << setw(20) << left << "VARIABLES:"
         << setw(30) << left << "num"
         << setw(30) << left << "thamChieuSo"
         << setw(30) << left << "conTroDenSo" << endl;

    cout << setw(20) << left << "VALUES:"
         << setw(30) << left << num // Giá trị của biến num
         << setw(30) << left << thamChieuSo // Giá trị của biến num (qua tham chiếu)
         << setw(30) << left << *conTroDenSo << endl; // Giá trị của biến num (qua con trỏ)

    cout << setw(20) << left << "MEMORY ADDRESSES:"
         << setw(30) << left << &num // Địa chỉ của biến num
         << setw(30) << left << &thamChieuSo // Địa chỉ của biến num (qua tham chiếu)
         << setw(30) << left << conTroDenSo << endl; // Địa chỉ của con trỏ

    cout << setfill('#') << setw(20 + 30 * 3) << left << "" << endl;
}

int main()
{
    num = 2006;
    check_variables(); // Gọi hàm để hiển thị thông tin các biến
    return 0;
}
