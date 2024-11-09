/*
todo    **Bài toán:**
!           - Xây dựng lớp Polyhedron (đa diện đều) và Square (hình vuông) sử dụng tính kế thừa trong OOP.
 
todo    **Yêu cầu:**
?           - Lớp Polyhedron:
                + Thuộc tính: side (số cạnh)
                + Hàm tạo: Khởi tạo đối tượng
                + Hàm info(): In ra "A polyhedron"
?           - Lớp Square (kế thừa từ Polyhedron):
                + Thuộc tính: side (kế thừa từ lớp cha)
                + Hàm tạo: Kế thừa hàm tạo của lớp cha
                + Hàm print_info():
?           - Gọi hàm info() của lớp cha
?           - In thêm "This is a Square"

todo    **Chương trình chính:**
?           - Tạo đối tượng Square
?           - Gọi hàm print_info() của đối tượng đó
*/

#include <iostream>
using namespace std;

class Polyhedron
{
public:
    int side;

public:
    Polyhedron(int side) : side(side) {};
    void info()
    {
        cout << "A polyhedron" << endl;
    };
};

class Square : public Polyhedron
{
public:
    Square(int side) : Polyhedron(side) {};
    void print_info()
    {
        info();
        cout << "This is a Square" << endl;
    }
};

int main()
{
    Square s(12);
    s.print_info();

    return 0;
}