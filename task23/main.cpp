#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, f;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of f: " << endl;
        cin >> f; 
        cout << "G = " << exp(2 * y) + sin(f) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}