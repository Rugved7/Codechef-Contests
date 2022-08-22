#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int A, B, C;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> C;
        if ((A + B) / 2 < 35)
        {
            cout << "FAIL" << endl;
        }
        else if ((B + C) / 2 < 35)
        {
            cout << "FAIL" << endl;
        }
        else if ((A + C) / 2 < 35)
        {
            cout << "FAIL" << endl;
        }
        else
        {
            cout << "PASS" << endl;
            ;
        }
    }
    return 0;
}
