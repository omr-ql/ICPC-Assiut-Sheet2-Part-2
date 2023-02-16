#include <iostream>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    long long digit;
    long long reversing = 0;
    long long new_number = num;

    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        reversing = reversing * 10 + digit;
    }

    if (new_number == reversing)
    {
        cout << reversing << "\n"
             << "YES";
    }

    else
    {
        cout << reversing << "\n"
             << "NO";
    }
}