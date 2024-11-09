#include <iostream>

using namespace std;

struct num
{
    int tu, mau;
};

void sum(struct num &a, struct num b) {
    int tu, mau;
    tu = a.tu * b.mau + b.tu * a.mau;
    mau = a.mau * b.mau;
    a.tu = tu;
    a.mau = mau;
};

int main()
{
    int n;
    cin >> n;

    struct num *list = new struct num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i].tu >> list[i].mau;
    }

    struct num result = list[0];
    for (int i = 1; i < n; i++)
    {
        sum(result, list[i]);
    }

    printf("%d/%d", result.tu, result.mau);

    delete[] list;

    return 0;
}