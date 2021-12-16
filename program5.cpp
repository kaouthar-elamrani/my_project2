#include <iostream>
#include <iterator>
#include <set>
using namespace std;
// fonction 1
bool recherche(set<int, greater<int>> st, int n)
{

    if (st.find(n) != st.end()) // la fonction predefinie find() permet de trouver an element dans le set . On itere la liste jusqu'au fin
    {
        return true;
    }
    else
    {
        return false;
    }
}
// fonction 2

bool recherche_modi(set<int, greater<int>> st, set<int>::iterator itr, int n)
{
    itr = st.find(n); // on affecte au iterator st.find(n) qui va iterer toute la liste et compare chaque element avec n jusqu'au fin du set
    if (itr != st.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    set<int, greater<int>> myset;

    for (int i = 1; i <= 100; i++)
    {
        myset.insert(i); // inserer dans le set du 1 a 100
    }
    set<int, greater<int>>::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = myset.begin(); itr != myset.end(); itr++) // afficher les elements du set a l'aide d'un iterateur
    {
        cout << *itr << " ";
    }

    cout << "\n";
    cout << "\n";

    cout << recherche(myset, 10) << endl; // appel aux fonctions
    cout << recherche_modi(myset, itr, 120) << endl;

    return 0;
}
