#include <iostream>
using namespace std;
class Test
{
public:
    static int tableau[];

public:
    static int division(int indice, int diviseur)
    {
        if (indice > 9)                                  // 9 ici est le dernier adresse dans le tableau declare dans le main
            throw "Exception : Choose the right index "; // cetter exception va s'afficher si lindice est >9
        return tableau[indice] / diviseur;
    }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};
int main()
{
    int x, y;
    try // on effectue le  code suivant
    {
        cout << "Entrez l indice de l entier a  diviser: " << endl;
        cin >> x;

        cout << "Entrez le diviseur: " << endl;
        cin >> y;
        cout << "Le resultat de la division est: " << endl;
        cout << Test::division(x, y) << endl;
    }
    catch (const char *textException) // si l'indice est>9 on affiche le message dans throw
    {
        cout << textException;
    }
    return 0;
}