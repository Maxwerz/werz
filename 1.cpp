#include <iostream>
using namespace std;
int stepen(int a, int b, int c = 1)
{
    if (b > 0)
    {
        c *= a;
        b--;
        stepen(a, b, c);
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b; cout << "Enter number & power: "; cin >> a >> b;
    cout << "Your powered number: " << stepen(a, b);
}
