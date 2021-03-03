#include <iostream>

using namespace std;
int n, k, b, sum = 0;

int main()
{
    cin >> n >> k;
    int bill[n];

    for (int i = 0; i < n; i++)
    {
        cin >> bill[i];
    }

    cin >> b;

    for (int l = 0; l < n; l++)
    {
        if (l == k)
        {
            continue;
        }
        else
        {
            sum += bill[l];
        }
    }

    if (b - (sum / 2) > 0)
    {
        cout << b - (sum / 2) << endl;
    }
    else
    {
        cout << "Bon Appetit" << endl;
    }

    return 0;
}
