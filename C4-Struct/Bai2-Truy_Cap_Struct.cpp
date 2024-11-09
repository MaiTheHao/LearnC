#include <iostream>
#include <iomanip>
using namespace std;

// Định nghĩa cấu trúc để biểu diễn một phân số
struct decimal{
    int tuso;  // Tử số
    int mauso; // Mẫu số
};

// Hàm in ra phân số dưới dạng "tử số/mẫu số"
void print_decimal(decimal number){
    cout << number.tuso << "/" << number.mauso << endl;
}

int main(){

    // Khai báo các biến kiểu decimal mà không khởi tạo giá trị ban đầu
    decimal number1; 
    struct decimal number2; 

    // Khai báo và khởi tạo giá trị ban đầu cho biến kiểu decimal
    decimal number3 = {5, 7}; 

    // Truy cập và gán giá trị cho các thuộc tính của biến kiểu decimal
    number1.tuso = 2; 
    number1.mauso = 3;
    number2.tuso = 4;
    number2.mauso = 2;

    // Truy cập và gán giá trị cho các thuộc tính của biến kiểu decimal bằng con trỏ
    decimal *ptr = nullptr; // Khai báo con trỏ trỏ tới kiểu struct decimal

    ptr = &number1; // Gán địa chỉ của biến number1 cho con trỏ ptr

    // Truy cập các thuộc tính của number1 thông qua con trỏ
    cout << (*ptr).tuso << endl; // Truy cập tử số bằng cách dereference
    cout << ptr->mauso << endl;  // Truy cập mẫu số bằng toán tử mũi tên

    // In ra các phân số bằng hàm print_decimal
    print_decimal(number2);
    print_decimal(number3);
    
    return 0;
}