/*
| Tên đặc điểm |                                  Giải thích                                           |
|--------------|---------------------------------------------------------------------------------------|
|    Hàm bạn   | Hàm độc lập có quyền truy cập vào thành viên private của một lớp.                     |
########################################################################################################
|   Mục đích   | Cho phép thao tác trực tiếp với đối tượng của lớp, ngay cả bên ngoài lớp đó.          |
########################################################################################################
|    Sử dụng   | Khi cần truy cập vào các biến của lớp trong một hàm không phải là thành viên của lớp. |
*/

// friend <data-type> <function-name>(parameters){...};

#include <iostream>

using namespace std;

class tesla
{
private:
    int retailPrice;       // Giá bán
    int manufacturingCost; // Giá sản xuất

public:
    tesla(int retailPrice, int manufacturingCost){
        this->retailPrice = retailPrice;
        this->manufacturingCost = manufacturingCost;
    }
    
    // Hàm friend: cho phép setCost truy cập trực tiếp vào các thuộc tính private
    // của đối tượng tesla, tăng tính linh hoạt trong việc cập nhật giá cả.
    friend void setCost(tesla&, int, int);

    void showCost();
};

// Hàm friend:
// - Truy cập trực tiếp vào các thành viên private của đối tượng tesla.
// - Cập nhật cả giá bán và giá sản xuất cùng lúc.
// - **Lưu ý:** Việc truy cập trực tiếp vào thành viên private nên được sử dụng cẩn trọng
//   để tránh vi phạm tính đóng gói.
void setCost(tesla &model, int newRetailPrice, int newManufacturingCost){
    model.retailPrice = newRetailPrice;
    model.manufacturingCost = newManufacturingCost;
}


int main()
{
    tesla modelA(500, 1250), modelB(300, 340), modelC(10000, 200);

    setCost(modelB, 200, 300);
    setCost(modelC, 200, 300);
    /*
       Hàm setCost dù được khai báo như hàm bình thường, bỏ qua toán tử phân giải phạm vi (::).
       Nhưng vẫn có thể truy cập vào các thuộc tính retailPrice hoặc manufacturingCost.
       Bạn hoàn toàn không thể viết |cout << modelA.retailPrice| hoặc thực hiện bất kì thay đổi giá trị nào
       nếu viết vào dòng code. Vì giá trị đó là private.
    */
    

    modelA.showCost();
    modelB.showCost();
    modelC.showCost();

    return 0;
}

void tesla::showCost()
{
    printf("TESLA MODEL:\n -RETAIL PRICE: %d\n -MANUFACTURING COST: %d\n", retailPrice, manufacturingCost);
};