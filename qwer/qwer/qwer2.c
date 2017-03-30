#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "introducir valor a: " << endl;
    cin >> a;
    int b;
    cout << "introducir valor b: " << endl;
    cin >> b;
    int z=0;
    z = (a>b)?a:b;
    return z;
}
