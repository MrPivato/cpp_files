#include <iostream>
#include <stdlib.h>

using namespace std;

// variables
// initialization
// address
// allocate

main()
{

    int a;
    a = 10;
    // & (ampersand) - o address dela
    //&nome_var - usagem

    int b = 20;
    string c = "Gasosa";
    float d = 5.99;

    cout << a << endl;
    cout << &a;
    cout << "\n----------------\n";
    cout << b << endl;
    cout << &b ;
    cout << "\n----------------\n";
    cout << c << endl;
    cout << &c ;
    cout << "\n----------------\n";
    cout << d << endl;
    cout << &d ;
    cout << "\n----------------\n";

    /*
        N pode ter no nome: nums (no comeco), specialChars (a n ser o _ ),
    */
    
    return 0;

}
