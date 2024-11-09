#include <iostream>
#include <string>
using namespace std;

// template <typename T>
// Tên của một tham số template, thường là T.
// typename: Chỉ ra rằng T là một kiểu dữ liệu.
// T có thể được thay thế bởi bất kỳ kiểu dữ liệu nào khi sử dụng template.
// LƯU Ý: template được sử dụng chủ yếu cho hàm và class, không dùng cho biến được. Vì biến cần xác định giá trị ngay khi khai.
// Cách tạo ra một biến có dữ liệu động bắt chước template (bằng cách dùng con trỏ void) sẽ được làm trong hàm main của chương trình.

// Ví dụ:
template <typename T>
T max(T a, T b)
{
    return ((a > b) ? a : b);
    // Hàm max so sánh hai giá trị có cùng kiểu dữ liệu T và trả về giá trị lớn hơn.
    // T ở đây có thể là int, double, float, hoặc bất kỳ kiểu dữ liệu nào khác.
}

int main()
{
    // Thử tạo kiểu dữ liệu động bằng con trỏ

    // Tạo các loại dữ liệu mô phỏng
    int age = 18;                  // Một biến số nguyên để lưu tuổi
    char A = 'A';                  // Một biến ký tự
    string name = "Mai Huy Hoang"; // Một chuỗi chứa tên
    
    int listID[3][2] = {{211122, 399876},
                        {518273, 699876},
                        {922244, 122453}}; // Một mảng nguyên 2 chiều chứa ID

    // Tạo biến con trỏ trung gian (void)
    void *ptr; // Con trỏ void có thể trỏ đến bất kỳ kiểu dữ liệu nào

    // Thử lần lượt các biến dữ liệu xác định vào con trỏ trung gian và in ra giá trị

    ptr = &age;                               // Gán địa chỉ của biến age cho con trỏ ptr
    cout << *static_cast<int *>(ptr) << endl; // Ép kiểu ptr thành con trỏ int và in giá trị tại địa chỉ đó

    ptr = &A;                                  // Gán địa chỉ của biến A cho con trỏ ptr
    cout << *static_cast<char *>(ptr) << endl; // Ép kiểu ptr thành con trỏ char và in giá trị tại địa chỉ đó

    ptr = &name;                                 // Gán địa chỉ của biến name cho con trỏ ptr
    cout << *static_cast<string *>(ptr) << endl; // Ép kiểu ptr thành con trỏ string và in giá trị tại địa chỉ đó

    cout << listID << endl; //*Truyền mảng thực chất là truyền địa chỉ bộ nhớ ~ truyền tham chiếu*
    // Trong python truyền mảng là truyền tham chiếu nên mọi thay đổi của mảng được truyền vào hàm sẽ thay đổi mảng gốc, do đó ta có phương thức .copy() để tạo mảng copy và không thay đổi giá trị gốc
    return 0;
}