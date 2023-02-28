#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double t, x;
        cout << "Input value of t: " << endl;
        cin >> t;
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "K = " << 7 * pow(t, 2) + 3 * sin(pow(x, 3)) + 9.2 << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}