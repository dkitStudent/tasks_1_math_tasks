#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, h;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of h: " << endl;
        cin >> h; 
        cout << "T = " << exp(y + h) + sqrt(fabs(6.4 * y)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}