/*
Cho mảng 2 chiều các số nguyên arr với n hàng m cột được nhập từ bàn phím
Bạn hãy viết chương trình cấp phát bộ nhớ động cho vùng nhớ chứa mảng này sau đó hiển thị ra màn hình tổng của từng hàng một trong mảng.
*/

#include <iostream>

using namespace std;

void delete_matrix(int **matrix, int rows, int cols) {
    if (matrix == nullptr) {
        return;
    }
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}

int main() {
    int n, m;
    cin >> n >> m;

    int **arr = new int *[n]; // Corrected: int **arr instead of int *(*arr)
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }

    delete_matrix(arr, n, m);

    return 0;
}