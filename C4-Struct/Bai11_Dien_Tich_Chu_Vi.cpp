#include <iostream>
using namespace std;

struct Rectangle {
  int length = 0;
  int breadth = 0;
  int chuVi;
  int dienTich;
  
  void tinhchuVi(){
    chuVi = (length + breadth) * 2;
  }
  
  void tinhdienTich(){
    dienTich = length * breadth;
  }
  
  void inketqua() {
		cout << "ChuVi: " << chuVi << endl;
		cout << "DienTich: " << dienTich << endl;
	}
  
};


int main( )
{
    Rectangle a;
    cin >> a.length >> a.breadth;
    
    a.tinhchuVi();
    a.tinhdienTich();
    a.inketqua(); 
   
    return 0;
}