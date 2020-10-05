#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Please enter two numbers: ";
    cin >> x >> y;
    
    cout << "Statistics of " << x << ", " << y << endl;
    cout << "The sum of " << x << " and " << y << " is: " << x+y << endl;
    cout << "The difference of " << x << " and " << y << " is: " << x-y << endl;
    cout << "The product of " << x << " and " << y << " is: " << x*y << endl;
    cout << "The distance between " << x << " and " << y << " is: " << abs((x-y)) << endl;
    cout << "The mean average of " << x << " and " << y << " is: " << ((x+y)/2) << endl;
}
