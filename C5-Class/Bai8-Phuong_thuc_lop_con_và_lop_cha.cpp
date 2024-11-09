#include <iostream>

using namespace std;

class cheff
{
protected:
    string name;
    unsigned int age;

public:
    cheff(string name, unsigned int age) : name(name), age(age) {};
    void cook()
    {
        cout << "Khong lam gi . . ." << endl
             << endl;
    };

    string getName()
    {
        return name;
    };

    unsigned int getAge()
    {
        return age;
    };
};

class pizza : public cheff
{
public:
    void cook()
    {
        printf("Cheff: %s\nFood: Pizza\nType cook: Nuong\n\n", name.c_str());
    };

    pizza(string name, unsigned int age) : cheff(name, age) {};
};

int main()
{
    cheff Xuan("Nguyen Thi My Xuan", 18);
    pizza p(Xuan.getName(), Xuan.getAge());

    p.cook();        //! Dùng method của lớp con
    p.cheff::cook(); //! Dùng method của lớp cha từ lớp con
    return 0;
}