#include <iostream>
#include <stdlib.h>

using namespace std;

// operadores logicos

main()
{

    int a = 10, b = 20, c = 30, d = 40;

    // AND - &&
    cout << (a != b && c == d) << endl;

    //OR - ||
    cout << (a == b || c < d) << endl;

    //NOT - !
    cout << (!1) << endl;
    cout << !(0) << endl; // tbm func assim
    
    return 0;
    
}
