
#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

// 1-1
double f(double x, double y)
{
    return sqrt(x * x + y * y);
}

// 1-2
double s(double x)
{
    if (x < 0)
    {
        return -x;
    }

    return x;
}

// 1-3
double sumFunction(int n)
{
    double sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += (double)(i * i) / n;
    }

    return sum;
}

// 1-4
double g(int n)
{
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        double product = 1;

        for (int j = 1; j <= n; j++)
        {
            if (j != i)
            {
                product *= i * j;
            }
        }

        sum += 3 * i + n * product;
    }

    return sum;
}

// 1-5
double h(double theta, double x, double y)
{
    return cos(theta) * (x - (x * y) * x)
         + sin(theta) * (y - x)
         + sqrt((x + y) * x);
}

int main()
{
    // Tests for 1-1
    assert(f(3, 4) == 5);
    assert(f(5, 12) == 13);

    // Tests for 1-2
    assert(s(-5) == 5);
    assert(s(7) == 7);

    // Tests for 1-3
    assert(sumFunction(1) == 1);
    assert(sumFunction(2) == 2.5);

    // Tests for 1-4
    assert(g(1) == 4);
    assert(g(2) == 17);

    // Tests for 1-5
    assert(fabs(h(0, 1, 3) - 0) < 0.000001);
    assert(fabs(h(0, 1, 0) - 2) < 0.000001);

    cout << "All tests passed!" << endl;

    return 0;
}