#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    string test1, test2;

    cout << "Digite algo: ";
    cin >> test1;

    cout << "\nDigite algo dnv: ";
    cin >> test2;

    cout << "-----------------------------\n";
  
    cout << test1 + test2 << endl;

    cout << "-----------------------------\n";

    if (test1 == test2)
    {
        cout << "Gasosa voltou!" << endl;
    }

    return 0;

}
