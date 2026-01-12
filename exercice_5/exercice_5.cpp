#include<iostream>

using namespace std;
/*
    Ecrire un programme qui permet d'afficher le plus Grand de trois
    entiers saisis au clavier
*/
int main()
 {
    cout << "Veuillez entrer les 3 valeurs \n";
    int A ,B ,C , plusGrand ;
    cout << "Valeur de A est : "; cin >> A;
    cout << "Valeur de B est : "; cin >> B;
    cout << "Valeur de C est : "; cin >> C;
 
    plusGrand = A;
    if(B >= plusGrand)
    plusGrand = B;
    if(C >= plusGrand)
    plusGrand = C;
    cout << "La valeur plus Grand est: "<<plusGrand<<endl;
    return 0;
    
 }