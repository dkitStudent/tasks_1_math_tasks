#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double p, y;
        cout << "Input value of p: " << endl;
        cin >> p;
        cout << "Input value of y: " << endl;
        cin >> y; 
        cout << "K = " << log(pow(p, 2) + pow(y, 3)) + exp(p) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}