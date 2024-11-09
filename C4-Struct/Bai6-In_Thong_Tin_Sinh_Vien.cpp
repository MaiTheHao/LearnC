#include<iostream>

using namespace std;

struct Student {
	string ten;
	int tuoi;
	void display() {
		// c_str() được sử dụng để chuyển đổi chuỗi C++ (std::string) thành chuỗi kiểu C (const char*)
		// Điều này là cần thiết vì printf yêu cầu một chuỗi kiểu C cho định dạng %s
		printf("Ten: %s\nTuoi: %d\n", ten.c_str(), tuoi);
	}
};

int main() {
	int n;
	cin >> n;
	Student students[100];
	for (int i = 0; i < n; i++) {
		cin >> students[i].ten >> students[i].tuoi;
	}
	for (int i = 0; i < n; i++) {
		students[i].display();
	}
	return 0;
}