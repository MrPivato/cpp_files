#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{

    int altura, base, area;

    cout << "_-_-Calcula area-_-_\n\n";

    cout << "Digite o valor da altura: ";
    cin >> altura;

    cout << "\nDigite o valor da base: ";
    cin >> base;

    area = altura * base;

    cout << "\nA area eh: " << area << "\n";
    cout << "_____________________________";
    
    return 0;

}
