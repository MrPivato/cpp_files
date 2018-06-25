#include <iostream>
#include <stdlib.h>

using namespace std;

// operadores

main()
{

    int a = 100, b = 10;
    float c = 123, d = 3;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl; // devolve um valor inteiro pq eh 2 int
    cout << a / d << endl; // devolve um valor float pq tem pelo menos 1 float
    cout << a % b << endl;

    cout << "\n---------------\n\n";

    int e = 0, f = 0;

    e = e + 1;
    cout << e << endl;

    e += 1;
    cout << e << endl;

    e -= 1;
    cout << e << endl;

    e *= 1;
    cout << e << endl;

    e /= 1;
    cout << e << endl;

    e %= 1;
    cout << e << endl;

    cout << "\n---------------\n\n";

    cout << e++ << endl;
    cout << ++e << endl;
    cout << e-- << endl;
    cout << --e << endl;
    
    return 0;
    
}