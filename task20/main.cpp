#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double k, y, x;
        cout << "Input value of k: " << endl;
        cin >> k;
        cout << "Input value of y: " << endl;
        cin >> y; 
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "U = " << exp(k + y) + tan(x) * sqrt(y) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}