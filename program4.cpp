#include <iostream>
#include <list>
#include <cstring>

using namespace std;

int main()
{
    list<string> mylist;
    list<string>::iterator itr;
    mylist.push_back("Elamrani, Kaouthar,22"); // push_back permet d'ajouter des elements dans le dernier indice de la liste
    mylist.push_back("Khouakhi, Imad,32");
    mylist.push_back("Farouki,Ghizlane,21");
    cout << "The list before the sort : " << endl;
    for (itr = mylist.begin(); itr != mylist.end(); ++itr) // on itere la liste pour afficher ses elements
        cout << '\t' << *itr;
    cout << '\n';

    mylist.sort();

    cout << "The list after the sort : " << endl;
    for (itr = mylist.begin(); itr != mylist.end(); ++itr)
        cout << '\t' << *itr;
    cout << '\n';

    system("PAUSE");
    return 0;
}