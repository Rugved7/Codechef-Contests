#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        cout << endl;

        int x, y;
        x = A - C;
        y = B - D;

        if (x < y)
        {
            cout << "First" << endl;
        }
        else if (x == y)
        {
            cout << "Any" << endl;
        }

        else
            cout << "Second" << endl;
    }
    // your code goes here
    return 0;
}
