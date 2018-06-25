#include <iostream>
#include <stdlib.h>

using namespace std;

// operadors relacionais

main()
{

    int a = 100, b = 50;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b)  << endl;
    cout << (a < b)  << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;

    cout << "\n------------------\n";

    cout << !(a == b) << endl;
    cout << !(a != b) << endl;
    cout << !(a > b)  << endl;
    cout << !(a < b)  << endl;
    cout << !(a <= b) << endl;
    cout << !(a >= b) << endl;
    
    return 0;

}
