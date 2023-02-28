#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double v, y, x;
        cout << "Input value of v: " << endl;
        cin >> v;
        cout << "Input value of y: " << endl;
        cin >> y; 
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "W = " << 3 * 1.03 * v + exp(2 * y) + tan(fabs(x)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}