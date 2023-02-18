#include <iostream>
using namespace std;
int prime(int num);
int main()
{
    int counter;
    cin >> counter;

    for (int i = 2; i <= counter; i++)
    {
        int res = prime(i);
        if (res != false)
        {
            cout << res << " ";
        }
    }
}
int prime(int num)
{
    long long div = num / 2;
    for (int i = 2; i <= div; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return num;
}