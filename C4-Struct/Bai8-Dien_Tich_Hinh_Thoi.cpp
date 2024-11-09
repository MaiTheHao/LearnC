/*
Công thức tính diện tích hình thoi là nửa tích 2 đường chéo. 
Vậy bạn hãy tạo một struct Diamond gồm int shortDiagonal và int longDiagonal. 
Hãy in độ dài đường chéo ngắn và đường chéo dài, sau đó tính toán diện tích của hình thoi này nhé!!!
*/

#include <iostream>
using namespace std;

struct Diamond{
  int shortDiagonal;
  int longDiagonal;
};


int main( )
{
    Diamond a;
    int n;
    cin >> a.shortDiagonal >> n;

    if (a.shortDiagonal > n){
        a.longDiagonal = a.shortDiagonal;
        a.shortDiagonal = n;
    }else{
        a.longDiagonal = n;
    }
    cout << "Do dai duong cheo ngan la: " << a.shortDiagonal << endl;
    cout << "Do dai duong cheo dai la: "<< a.longDiagonal << endl;
    cout << "Dien tich hinh thoi la: " << a.longDiagonal*a.shortDiagonal/2;
   
    return 0;
}