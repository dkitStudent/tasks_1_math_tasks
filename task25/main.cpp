#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, f;
        cout << "Input value of y: " << endl;
        cin >>y;
        cout << "Input value of f: " << endl;
        cin >> f; 
        cout << "R = " << 3 * exp(y * f) + sin(pow(f, 2)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}