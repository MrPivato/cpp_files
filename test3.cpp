#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{

    // tipo nome;

    int a = 10, b, c = 30; // +- de -2 bilhoes ate +2 bilhoes - 4 bytes

    cout << "a: " << a << " | " << &a << endl;
    cout << "b: " << b << " | " << &b << endl;
    cout << "c: " << c << " | " << &c << endl;

    short int a2 = 1; // -32768 ate +32767 - 2 bytes
    short b2; // <- funciona sem o int
                    // |
    // unsigned short int - 0 ate 65535
    unsigned short int b1_5 = 3700;

    cout << "b1_5: " << b1_5 << " | " << &b1_5 << endl;

    cout << "a2: " << a2 << " | " << &a2 << endl;
    cout << "b2: " << b2 << " | " << &b2 << endl;

    float d, e = 12.12; // 4 bytes - up to 38 zeros
    double f = 54.54, g; // 8 bytes - up to 308 zeros

    cout << "d: " << d << " | " << &d << endl;
    cout << "e: " << e << " | " << &e << endl;
    cout << "f: " << f << " | " << &f << endl;
    cout << "g: " << g << " | " << &g << endl;

    char h = 'a', i = 'b', j;

    cout << "h: " << h << " | " << &h << endl;
    cout << "i: " << i << " | " << &i << endl;
    cout << "j: " << j << " | " << &j << endl;

    string k = "AAAAAAAAA", l = "BBBBBBBB";
    // n pod ''

    cout << "k: " << k << " | " << &k << endl;
    cout << "l: " << l << " | " << &l << endl;

    string kl = k + l + "CCCCCCCCCCC";

    cout << "kl: " << kl << " | " << &kl << endl;

    bool m = true, n = false;

    cout << "m: " << m << " | " << &m << endl;
    cout << "n: " << n << " | " << &n << endl;

    const string VAR = "qwertyuiop";

    cout << "VAR: " << VAR << " | " << &VAR << endl;
    
    return 0;
    
}

