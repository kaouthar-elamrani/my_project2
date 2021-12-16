#include <iostream>
#include <string.h>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string date;
    cout << "Enter the date and time string" << endl;
    cin >> date;

    string jour = date.substr(0, 2); // on utilise la fonction predefinie substr() pour coupé la string relever les sous strings des jour / mois / annee / heure/minutes
    string month = date.substr(2, 2);
    string year = date.substr(4, 4);
    string time_h = date.substr(8, 2);
    string time_min = date.substr(10, 2);

    stringstream m(month); // la fonction sstream predifinie dans la biblio <sstream.h> qui convertie un string contenant des entiers en entier
    int mo;
    m >> mo;
    map<int, string> mymap;
    mymap.insert(pair<int, string>(1, "Janvier")); // on insert les element dans map , pour chaque mois de forme entier (comme clé) en donne une valeur en string
    mymap.insert(pair<int, string>(2, "Fevrier"));
    mymap.insert(pair<int, string>(3, "Mars"));
    mymap.insert(pair<int, string>(4, "Avril"));
    mymap.insert(pair<int, string>(5, "Mai"));
    mymap.insert(pair<int, string>(6, "Juin"));
    mymap.insert(pair<int, string>(7, "Juillet"));
    mymap.insert(pair<int, string>(8, "Aout"));
    mymap.insert(pair<int, string>(9, "Septembre"));
    mymap.insert(pair<int, string>(10, "Octobre"));
    mymap.insert(pair<int, string>(11, "Novembre"));
    mymap.insert(pair<int, string>(12, "Decembre"));

    if (mo == 1) // ici lower_bound(clé)->second permet de donner la valeur associé a chaqur clé
        cout << jour << " " << mymap.lower_bound(1)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 2)
        cout << jour << " " << mymap.lower_bound(2)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 3)
        cout << jour << " " << mymap.lower_bound(3)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 4)
        cout << jour << " " << mymap.lower_bound(4)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 5)
        cout << jour << " " << mymap.lower_bound(5)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 6)
        cout << jour << " " << mymap.lower_bound(6)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 7)
        cout << jour << " " << mymap.lower_bound(7)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 8)
        cout << jour << " " << mymap.lower_bound(8)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 9)
        cout << jour << " " << mymap.lower_bound(9)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 10)
        cout << jour << " " << mymap.lower_bound(10)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 11)
        cout << jour << " " << mymap.lower_bound(11)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else if (mo == 12)
        cout << jour << " " << mymap.lower_bound(12)->second << " " << year << " a " << time_h << "h" << time_min << endl;
    else
        cout << "Enter a valid month";
    return 0;
}