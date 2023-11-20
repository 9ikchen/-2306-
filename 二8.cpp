#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	signed int a;
    float b, x1, x2;
	cout << "ÇëÊäÈëaµÄÖµ£º" << endl;
	cin >> a;
    x1 =(a / 2);
    x2 = (x1 + a / x1) / 2;
    while (fabs(x1 - x2) >= 0.0000001) 
    {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;
    }
    cout << x2 << endl;
    return 0;
}
