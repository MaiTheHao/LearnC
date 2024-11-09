/* Lập trình hướng đối tượng (Object-Oriented Programming - OOP) là một mô hình lập trình dựa trên khái niệm "đối tượng",
đối tượng có thể chứa dữ liệu dưới dạng các trường (thường được gọi là thuộc tính hoặc đặc tính),
và mã lệnh dưới dạng các thủ tục (thường được gọi là phương thức). Một lợi ích chính của OOP
là khả năng tạo ra các lớp có thể được tái sử dụng trong nhiều chương trình khác nhau. Điều này thúc đẩy
khả năng tái sử dụng mã, khả năng mở rộng và hiệu quả. Các khái niệm chính của OOP bao gồm đóng gói (encapsulation),
kế thừa (inheritance), và đa hình (polymorphism). */

/* Đóng gói (Encapsulation): Là việc gói gọn dữ liệu và các phương thức thao tác trên dữ liệu đó vào trong một lớp,
và che giấu các chi tiết triển khai bên trong lớp khỏi các đối tượng bên ngoài. Điều này giúp bảo vệ dữ liệu
khỏi sự truy cập và sửa đổi không mong muốn từ bên ngoài. */

/* Kế thừa (Inheritance): Là khả năng tạo ra một lớp mới dựa trên một lớp đã tồn tại, lớp mới kế thừa các thuộc tính
và phương thức của lớp cũ, đồng thời có thể mở rộng hoặc ghi đè các phương thức của lớp cũ. Điều này giúp tái sử dụng
mã và tạo ra các mối quan hệ phân cấp giữa các lớp. */

/* Đa hình (Polymorphism): Là khả năng của các đối tượng thuộc các lớp khác nhau có thể được xử lý thông qua cùng một giao diện.
Đa hình cho phép một phương thức có thể có nhiều cách triển khai khác nhau, tùy thuộc vào đối tượng gọi phương thức đó. */

#include <iostream>

using namespace std;

class Car
{
    // Các thuộc tính của một chiếc xe
    string brand;
    unsigned long int price;

public:
    // Các hàm thành viên (member function)
    // Hàm khởi tạo mặc định: Khởi tạo một chiếc xe với các thuộc tính mặc định
    Car()
    {
        cout << "A car was created!" << endl;
    }

    // Hàm khởi tạo có đối số: Khởi tạo một chiếc xe với các thuộc tính được truyền vào
    Car(string brand, unsigned long int price)
    {
        this->brand = brand;
        this->price = price;
    }
    // Cách thức thực hiện khởi tạo nâng cao hơn là sử dụng danh sách khởi tạo
    // **Danh sách khởi tạo (Initializer List)**
    /*
      Car(string brand, unsigned long int price) : brand(brand), price(price) {}
    
      **Giải thích:**
      - Danh sách khởi tạo được đặt sau dấu hai chấm (:) và trước thân hàm khởi tạo.
      - Nó cho phép khởi tạo trực tiếp các thuộc tính của lớp mà không cần gán giá trị trong thân hàm.
      - Điều này giúp tăng hiệu suất và tránh việc gọi hàm khởi tạo mặc định của các thuộc tính trước khi gán giá trị.
      - Ví dụ: `Car(string brand, unsigned long int price) : brand(brand), price(price) {}` sẽ khởi tạo `brand` và `price` trực tiếp với các giá trị được truyền vào.
    */

    // Các hàm getter và setter để truy cập và cập nhật giá trị của các thuộc tính
    string getBrand()
    {
        return brand;
    }

    unsigned long int getPrice()
    {
        return price;
    }

    void setBrand(string newBrand)
    {
        brand = newBrand;
    }

    void setPrice(unsigned long int newPrice)
    {
        price = newPrice;
    }

    // Hàm để hiển thị thông tin của một chiếc xe
    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Tạo các đối tượng của lớp Car
    Car car1;
    Car car2("Toyota", 50000);

    // Sử dụng các hàm thành viên để truy cập và cập nhật dữ liệu
    car1.setBrand("Honda");
    car1.setPrice(40000);

    // Hiển thị thông tin của các chiếc xe
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}