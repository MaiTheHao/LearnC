/*
 *Tên chương trình: Tạo một lớp tam giác
 todo: Mục tiêu:
    - Tạo các hàm khởi tạo (init) để thỏa mản yêu cầu sau:
        + Nếu đầu vào chỉ có 1 số nguyên, thì cho ra một tam giác đều
        + Nếu đầu vào có 2 số nguyên, thì cho ra một tam giác cân, với hai cạnh 1 và 2 bằng giá trị thứ nhất
        + Nếu đầu vào có 3 số nguyên, thì cho ra một tam giác thường, với độ dài ba cạnh lần lượt là đầu vào được cho
    - Tạo một hàm không phải là thành viên của lớp, để tính chu vi của tam giác.
    - Khởi tạo 3 đối tượng tam giác với kích thước cho sẵn và in ra chu vi của ba tam giác đó.
*/

#include <iostream>

using namespace std;

//* Định nghĩa lớp Triangle, với ba cạnh side1-side2-side3.
class Triangle
{
private:
    int side1, side2, side3;

public:
    // Thực hiện mục tiêu số 1.
    Triangle(int side) : side1(side), side2(side), side3(side) {};
    Triangle(int side1, int side2) : side1(side1), side2(side1), side3(side2) {};
    Triangle(int side1, int side2, int side3) : side1(side1), side2(side2), side3(side3) {};

    // Thực hiện mục tiêu số 2.
    friend int getPerimeter(Triangle input_obj);
};

int getPerimeter(Triangle input_obj)
{
    return (input_obj.side1 + input_obj.side2 + input_obj.side3);
};

int main()
{
    // Khởi tạo ba đối tượng tam giác.
    Triangle A(25), B(25, 7), C(12, 23, 21);
    // In ra giá trị chu vi của ba đối tượng.
    printf("%d\n%d\n%d", getPerimeter(A), getPerimeter(B), getPerimeter(C));
    return 0;
}