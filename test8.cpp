#include <iostream>
#include <stdlib.h>

using namespace std;

// operadors bitwise
// trabalham na casa dos bit (duh), 1 0 1 0

main()
{

    int a = 10; // 1010
    int b = 2;  // 0010

    // bitwise AND - &
    // (1010 & 0010) == 0010 ou 2
    cout << (a & b) << endl;

    // bitwise OR - |
    // (1010 | 0010) == 1010 ou 10
    cout << (a | b) << endl;

    // bitwise NOT - ~
    // ~(000000000000000001010) == 111111111111111110101 ou -11 - se o first bit eh 1 o num eh negativo
    cout << (~a) << endl;

    // bitwise XOR - ^
    /*
        0 0 0
        0 1 1
        1 0 1
        1 1 0
    */
    // (1010 ^ 0010) == 1000 ou 8
    cout << (a ^ b) << endl;

    // bitwise left shift - <<
    // (01010 << 1) == 10100 ou 20
    cout << (a << 1) << endl;

    // bitwise right shift - >>
    // (1010 >> 1) == 0101 ou 5
    cout << (a >> 1) << endl;

    return 0;
    
}
