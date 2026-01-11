#include<iostream>

using namespace std;

/*

    Ecrire un programme qui permet de calculer la
    moyenne de trois entier par utilisateurs

*/

int main()
{
    cout << "entrer la valeur pour calculer la moyenne \n";
    int entier_1,entier_2,entier_3,moyenne,total;
    cout << "entier_1"<<endl;cin >> entier_1;
    cout << "entier_2"<<endl;cin >> entier_2;
    cout << "entier_3"<<endl;cin >> entier_3;
    if (entier_1 < 0 ||  entier_2 < 0 ||  entier_3 < 0)
    {
        cout << "verifier votre NOTE"<<endl;
       
    }
    total = entier_1 + entier_2 + entier_3;
    moyenne = total/3;
    cout<<"TOTALL:" << total <<" et la moyenne est: "<< moyenne << endl;
    return 0;
}