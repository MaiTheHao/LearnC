#include <iostream>

using namespace std;

struct Student
{
    string ten;
    int tuoi;
    void display()
    {
        printf("Ten: %s\nTuoi: %d\n", ten.c_str(), tuoi);
    }
    void getInfo()
    {
        cin >> ten >> tuoi;
    }
};

int main()
{
    int n;
    cin >> n;
    Student *list = new Student[n];
    for (int i = 0; i < n; i++)
    {
        list[i].getInfo();
    }

    for (int i = 0; i < n; i++)
    {
        list[i].display();
    }
    return 0;
}
