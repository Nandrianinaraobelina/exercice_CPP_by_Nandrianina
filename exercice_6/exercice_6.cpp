#include<iostream>

using namespace std;

/*


    NY SUJET: 
    Ecrire un programme qui permet de Verifier une note
    saisie ay clavier
    (si la note superieur à 10 alors il affiche validé 
    sinon non validé)

    Fampitandrema kel: La note comprise entre 0 et 20

*/

int main()
{   
    cout << "Entrer la valeur de note: \n";
    int note;

    cin >> note;
    if(note < 0 || note > 20)
    {
        cout << "ERROR de saisir!!! \n ";
    }
    if(note >=10 ){
        cout << "Note VALIDE \n";
    }
    else{
        cout << "Note non VALIDE \n";
    }

    return 0;
}