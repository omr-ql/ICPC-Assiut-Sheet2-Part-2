#include <iostream>
using namespace std;
int main()
{
    long long counter, result = 1;
    cin >> counter;

    while (counter-- > 0)
    {
        int num;
        cin >> num;
        for (int i = 1; i <= num; i++)
        {
            result *= i;
        }
        cout << result << endl;
        result = 1;
    }
}