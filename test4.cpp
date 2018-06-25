#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{

    int a;

    cin >> a; //console input

    cout << "\nTeste eh: " << a << "\n";

    string nome, sobrenome;

    cout << "Escreva seu nome: \n";
    cin >> nome;

    cout << "\n" << "Escreva seu sobrenome: \n";
    cin >> sobrenome;

    cout << "\n" << "Va ti cata " << nome + " " + sobrenome;
    
    return 0;

}
