#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int cnt = 1;
    long int bnry = 0;
    long int ones_complement = 0;
    if (x < 0)
    {
        x = -x;

        while (x)
        {
            bnry = bnry + (x % 2) * cnt;
            cnt *= 10;
            x /= 2;
        }
        cout << bnry << endl;
        cnt = 1;

        while (bnry)
        {
            if (bnry % 2 == 0)
            {
                ones_complement = ones_complement + 1 * cnt;
            }
            else
            {
                ones_complement = ones_complement + 0 * cnt;
            }

            cnt *= 10;
            bnry>>1;

        }

        cout << ones_complement;
    }
    return 0;
}