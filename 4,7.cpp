// 4,7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double xp, xk, x, dx, eps,arcth, a = 0, R = 0, S = 0;
        int n = 0;
        
        cout << "xp = "; cin >> xp;
        cout << "xk = "; cin >> xk;
        cout << "dx = "; cin >> dx;
        cout << "esp = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "acrth(x)" << " |"
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (abs(x) > 1)
        {
            R = 2 * n / (2 * n * x + x);
            n = 0;
            a = 1 / x;
            S = a;
            do {
                n++;
                R = 2 * n / (2 * n * x + x);
                a *= R;
                S += a;
            } while (abs(a) >= eps);




            arcth = S;

            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << setw(10) << setprecision(5) << arcth << " |"
                << setw(10) << setprecision(5) << S << " |"
                << setw(5) << n << " |"
                << endl;
            x += dx;
        }
        else
            x += dx;
              
    }
    cout << "-------------------------------------------------" << endl;
    



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
