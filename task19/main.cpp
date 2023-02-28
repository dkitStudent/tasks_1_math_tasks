#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double n, y, g;
        cout << "Input value of n: " << endl;
        cin >> n;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of g: " << endl;
        cin >> g; 
        cout << "P = " <<  n * sqrt(pow(y, 3) + 1.09 * g) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}