#include <iostream>
#include <list>

using namespace std;
void showlist(list<int> lis) // iterateur va iterer toute la liste et on va afficher son contenu
{
    list<int>::iterator it;
    for (it = lis.begin(); it != lis.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()

{
    int num, element;
    list<int> mylist;
    list<int>::iterator it;
    cout << "Enter the number of elements :" << endl;
    cin >> num;
    it = mylist.begin();
    for (int i = 1; i <= num; i++) // on insert les element donner par l'utilisateur
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> element;
        mylist.insert(it, element);
        ++it;
    }
    cout << "The list before the sort : " << endl;
    showlist(mylist);
    mylist.sort(); // la fonction sert a trié la liste
    cout << "The list after the sort : " << endl;
    showlist(mylist);

    return 0;
}