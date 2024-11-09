/*
*   Cú pháp kế thừa:
!       class   lop_dan_xuat   :  che_do_ke_thua      lop_co_so     | Bản việt hóa
!       class derivedClassName : modeOfInheritance  baseClassName   | Bản thuật ngữ chuyên ngành
?       class      xe_may      :      public         phuong_tien    | Ví dụ
*/

/*
*   CHẾ ĐỘ KẾ THỪA:
?       public: Mọi giá trị public, protected từ lớp cơ sở sẽ được xem là public và protected
?       protected: Mọi giá trị public, protected từ lớp cơ sở sẽ được xem là protected
?       private: Mọi giá trị từ lớp cơ sở đều được xem là private

*       public -> (public, protected) | protected -> (protected) | private -> (private)
*/

#include <iostream>

using namespace std;

class phuong_tien
{
protected:
    string loai;
    unsigned int gia_ban;
    string mau_sac;

public:
    phuong_tien(string loai, unsigned int gia_ban, string mau_sac) : loai(loai), gia_ban(gia_ban), mau_sac(mau_sac) {};
    void phuong_tien_printInfo()
    {
        printf("Loai: %s\nGia ban: %d\nMau sac: %s\n", loai.c_str(), gia_ban, mau_sac.c_str());
    }
};

class xe_may : public phuong_tien
{
private:
    int phan_khoi;

public:
    xe_may(unsigned int gia_ban, string mau_sac, int phan_khoi) : phuong_tien("Xe may", gia_ban, mau_sac), phan_khoi(phan_khoi) {};
    void xe_may_printInfo()
    {
        phuong_tien_printInfo();
        printf("Phan khoi: %d\n", phan_khoi);
    };
};

int main()
{
    phuong_tien A("Xe may", 120000, "Vang");
    A.phuong_tien_printInfo();

    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    xe_may B(12000, "Xanh", 125);
    B.xe_may_printInfo();
    return 0;
}