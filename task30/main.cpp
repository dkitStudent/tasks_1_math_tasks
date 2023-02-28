#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, r;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of r: " << endl;
        cin >> r; 
        cout << "W = " << exp(y + r) + 7.2 * sin(r) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}