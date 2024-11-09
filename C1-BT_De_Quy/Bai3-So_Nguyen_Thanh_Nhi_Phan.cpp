#include <iostream>
using namespace std;

/*
* Hàm chuyển đổi số thập phân sang nhị phân bằng đệ quy (Phiên bản 1)
*
* Ý tưởng:
*   - Chia số cần chuyển đổi cho 2, lấy phần dư (sẽ là 0 hoặc 1) làm chữ số nhị phân cuối cùng.
*   - Tiếp tục chia phần nguyên cho 2 và lặp lại quá trình trên cho đến khi phần nguyên bằng 0.
*   - Kết hợp các chữ số nhị phân thu được theo thứ tự ngược lại.
*
* Lưu ý:
*   - Phiên bản này sử dụng số nguyên để biểu diễn kết quả, có thể gây nhầm lẫn vì kết quả thực tế là một số nhị phân.
*   - Việc nhân với 10 để dịch chuyển các chữ số không hoàn toàn chính xác trong hệ nhị phân.
*/
int to_binary1(int n) {
    // Điều kiện dừng: Khi n bằng 0, quá trình đệ quy kết thúc
    if (n == 0) {
        return 0; // Trả về 0 khi kết thúc
    }

    // Lấy chữ số nhị phân cuối cùng
    int last_digit = n % 2;

    // Gọi đệ quy để xử lý phần còn lại của số
    int remaining_binary = to_binary1(n / 2);

    // Kết hợp chữ số cuối cùng với phần còn lại (nhân với 10 để dịch chuyển)
    return last_digit + remaining_binary * 10;
}

/*
* Hàm chuyển đổi số thập phân sang nhị phân bằng đệ quy (Phiên bản 2, cải tiến)
*
* Ý tưởng:
*   - Tương tự như phiên bản 1, nhưng sử dụng chuỗi để biểu diễn kết quả.
*   - Mỗi lần gọi đệ quy, thêm chữ số nhị phân cuối cùng vào cuối chuỗi kết quả.
*
* Ưu điểm:
*   - Kết quả chính xác và dễ đọc hơn.
*   - Không bị giới hạn bởi kiểu số nguyên.
*/
string to_binary2(int n) {
    // Điều kiện dừng: Khi n bằng 0
    if (n == 0) {
        return "0"; // Trả về "0" khi kết thúc
    }

    // Gọi đệ quy để xử lý phần còn lại của số
    string binary = to_binary2(n / 2);

    // Bỏ chữ số 0 đầu tiên nếu có
    if (binary == "0") {
        binary = "";
    }

    // Thêm chữ số cuối cùng vào cuối chuỗi kết quả
    return binary + to_string(n % 2);
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    // Gọi cả hai hàm để so sánh kết quả
    cout << "Ket qua (Ver1): " << to_binary1(n) << endl;
    cout << "Ket qua (Ver2): " << to_binary2(n) << endl;

    return 0;
}
