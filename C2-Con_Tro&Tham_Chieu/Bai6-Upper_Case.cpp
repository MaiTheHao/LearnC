#include <iostream>
using namespace std;

// Hàm viết hoa tất cả các chữ cái thường trong một chuỗi thành chữ hoa.
//
// Tham số:
//  - str: Con trỏ đến chuỗi cần chuyển đổi.
//
// Mô tả:
//  Hàm duyệt qua từng ký tự trong chuỗi.
//  Nếu ký tự đó là chữ thường (từ 'a' đến 'z') thì trừ đi 32 để chuyển thành chữ hoa.
//  Lưu ý: Việc trừ đi 32 dựa trên bảng mã ASCII, nơi mà các ký tự hoa và thường cách nhau 32 đơn vị.
void upperCase(string* str) {
    // Duyệt qua từng ký tự trong chuỗi
    for (int i = 0; i < (*str).size(); i++) {
        // Kiểm tra xem ký tự có phải là chữ thường không
        if ((*str)[i] >= 'a' && (*str)[i] <= 'z') {
            // Chuyển ký tự thành chữ hoa bằng cách trừ đi 32
            (*str)[i] -= 32;
        }
    }
}

int main() {
	string s;
	cin >> s;
	upperCase(&s);
	cout << s;
	return 0;
}