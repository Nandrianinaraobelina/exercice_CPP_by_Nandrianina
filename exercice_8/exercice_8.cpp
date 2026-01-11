#include<iostream>
#include<math.h>

using namespace std;
/*

    Ecrire un programme qui permet de calculer 
    la valeur absolue d'un
    entier saisi par l'utilsateur


    NB: mampiasa abs()
*/
int main()
{

    cout << "entrer une valeur: \n";
    int nombre;
    cin >> nombre;
    cout << "La valeur absolue de " << nombre<< " est " << abs(nombre) << endl;
    return 0;
}