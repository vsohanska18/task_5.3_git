#include <iostream>
#include <iomanip>
#include <cmath>
#ifndef UNIT_TEST
using namespace std;

double z(const double x);

int main()
{
    double pp, pk, p, h, y;
    int n;

    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n = "; cin >> n;

    h = (pk - pp) / n;

    cout << fixed << setprecision(2);
    cout << setw(12) << "p" << setw(20) << "y" << endl;
    cout << "-----------------------------------" << endl;

    for (int i = 0; i <= n; i++){
        p = pp + i * h;
        y = z(p * p) + 2 * z(2 * p + p * p) + 1;
        cout << setw(12) << p << setw(20) << y << endl;
    }
    return 0;
}
#endif
double z(const double x)
{
    if (fabs(x) >= 1){
        return (cos(2 * x) + 1) / (cos(x) + sin(x) * sin(x));
    }
    else{
        double sum = 0;
        double a = 2 * x;
        sum = a;
        for (int k = 0; k < 6; k++){
            double R = (4 * x * x) / ((2 * k + 2) * (2 * k + 3));
            a *= R;
            sum += a;
        }
        return sum;
    }
}