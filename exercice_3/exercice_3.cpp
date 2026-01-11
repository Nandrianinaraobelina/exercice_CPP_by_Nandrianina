#include<iostream>
using namespace std;
/*

ECRIRE UN PROGRAMME qui permet d'echanger le contenu
 de deux entiers A et B saisis par ISER et afficher ces entiers après l'échange

*/

int main()
{
    cout << "Entrer les deux valeurs \n";
    int A,B,C;
    cout <<"Valeur de a = ";cin >> A;
    cout <<"Valeir de b = ";cin >> B;
    cout <<"----------------------\n";
    cout << "changement de valeur par l'utilisateur: \n";
    C = A;
    A = B;
    B = C;
    cout << "donc la valeur de A = "<< A  << " et la valeur de B = " << B << endl;
    return 0;
} 
 