#include <iostream>
using namespace std;

int main()
{
    // int i = 1;

    // do
    // {
    //     cout << i << endl;
    //     i += 1;
    // } while (i < 0);

    // for (int i = 1; i < 1; i++)
    // {
    //     cout << "hello" << endl;
    // }

    // Do make first request without checking condition major drawback

    // Nested Loop
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << j << " ";
        }
        cout << endl;
    }

    return 0;
}