#include <iostream>

using namespace std;

struct Time
{
    int hour, min;
};

Time sum(Time a, Time b)
{
    int total_hour, total_min;
    total_hour = a.hour + b.hour;
    total_min = a.min + b.min;

    total_hour += (total_min / 60);
    total_min %= 60;

    return Time{total_hour, total_min};
};

int main()
{
    Time x[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> x[i].hour >> x[i].min;
    }

    Time result = sum(x[0], x[1]);

    printf("%dh %dm", result.hour, result.min);

    return 0;
}