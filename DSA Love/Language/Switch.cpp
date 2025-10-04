#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    int n;
    cin >> n;
    switch (num)
    {
    case 1:
    {
        int c=n/100;
        n=n%100;
        cout << "100 k " << c << " notes\n";
    }
    case 2:
    {
        int c=n/50;
        n=n%50;
        cout << "50 k " << c << " notes\n";
    }
    case 3:
    {
        int c=n/20;
        n=n%20;
        cout << "20 k " << c << " notes\n";
    }
    case 4:
    {
        cout << "1 k " << n << " notes\n";
    }
    }
    return 0;
}