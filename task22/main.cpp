#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double u, y, x;
        cout << "Input value of u: " << endl;
        cin >> u;
        cout << "Input value of y: " << endl;
        cin >> y; 
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "T = " << sin(2 * u) * log(2 * pow(y, 2) + sqrt(x)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}