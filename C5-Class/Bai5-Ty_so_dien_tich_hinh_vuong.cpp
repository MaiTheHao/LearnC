/*
*       |+|   Tỷ số diện tích hình vuông
        |+|   
todo    |+|   Xây dựng chương trình in ra diện tích hình vuông và tỉ số thay đổi diện tích.
todo    |+|   Xây dựng lớp Square với độ dài cạnh là side.
todo    |+|   Khởi tạo các phương thức getSide, setSide (lấy và gán thuộc tính side) và area() (trả về diện tích hình vuông)
--------|+|   --------------------------------------------------------------------------------------------------------------------------------
!       |+|   Yêu cầu:
?       |+|       1. Nhập 2 giá trị firstSide và secondSide cách nhau một khoảng trắng từ bàn phím đề gán giá trị đó làm cạnh của hình vuông.
?       |+|       2. In giá trị cạnh firstSidevà diện tích hình vuông ra màn hình. 
?       |+|          Sau đó in ra tỉ số diện tích của hình vuông cạnh secondSide và hình vuông cạnh firstSidera màn hình.
*/

#include <iostream>
using namespace std;

class Square
{
private:
    double side = 1.234;

public:
    double getSide()
    {
        return side;
    };
    void setSide(double side)
    {
        this->side = side;
    };

    double area()
    {
        return side * side;
    }
};

int main()
{
    Square a, b;
    double firstSide, secondSide;
    cin >> firstSide >> secondSide;

    a.setSide(firstSide);
    b.setSide(secondSide);

    cout << a.getSide() << endl;
    cout << a.area() << endl;
    cout << b.area() / a.area() << endl;

    return 0;
}