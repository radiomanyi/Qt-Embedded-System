#include <iostream>

using namespace std;

int main()
{
    int n = 100;
    int sum = 0;

    // using for loop
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
