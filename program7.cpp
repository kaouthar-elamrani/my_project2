#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Chat;
class Repas;
class Elments;
class Compitition;
class Entraineur;

class Animal
{
public:
    string Nom;
    string Age;
    string Genre;
};
class Repas
{
private:
    string nom;
    int heure;
    string description;
    list<Elments> *lisb;

public:
    Repas()
    {
        lisb = new list<Elments>();
    }
    void setlistElement(list<Elments> *lisb)
    {
        this->lisb = lisb;
    }
    list<Elments> *getlistElement()
    {
        return this->lisb;
    }
    void setData(string name, int hours, string desc)
    {
        this->nom = name;
        this->heure = hours;
        this->description = desc;
    }
    int getData1()
    {
        return this->nom;
    }
    int getData2()
    {
        return this->heure;
    }
    int getData3()
    {
        return this->description;
    }

    ~Repas()
    {
        // destroy the lisb in the same time as A boject "composition"
        delete this->lisb;
        cout << "call dist of A" << endl;
    }
};
class Elments
{
private:
    string nom, type;
    Repas a;

public:
    void setD(string n, string t)
    {
        this->nom = n;
        this->type = t;
    }
    int getn()
    {
        return this->nom;
    }
    int gett()
    {
        return this->type;
    }
    void setRepass(Repas a)
    {
        this->a = a;
    }
    Repas getRepass()
    {
        return this->a;
    }
    ~Elments()
    {
        cout << "call dist of B" << endl;
    }
};

class Chat : Animal
{
private:
    string type;
    Repas bobject;

public:
    void setType(string t)
    {
        this->type = t;
    }
    int getType()
    {
        return this->type;
    }
    void setRepas(Repas bobject)
    {
        this->bobject = bobject;
    }
    Repas getRepas()
    {
        return this->bobject;
    }
    void sauter() {}
};
class Race
{
public:
    string specificite;
    void isRaceHybride() {}
};
class Chien : public Race, public Animal
{
private:
    string taille;
    list<Entraineur> lisb;

public:
    void setName(string ta)
    {
        this->taille = ta;
    }
    int getTaille()
    {
        return this->nom;
    }

    void setlistEnt(list<Entraineur> lisb)
    {
        this->lisb = lisb;
    }
    list<Entraineur> getlistEnt()
    {
        return this->lisb;
    }

    void ischass() {}
};
class Entraineur
{
private:
    string nom, description;
    list<Chien> lista;

public:
    void setName(string nam, string d)
    {
        this->nom = nam;
        this->description = d;
    }
    int getName()
    {
        return this->nom;
    }
    int getDes()
    {
        return this->description;
    }
    void setlistChien(list<Chien> lista)
    {
        this->lista = lista;
    }
    list<Chien> getlistChien()
    {
        return this->lista;
    }
};
class Compitition
{
private:
    string date, nom;
    int ordre;
    Entraineur b;
    Chien a;

public:
    void setdat(string d, string no, int o)
    {
        this->date = d;
        this->nom = no;
        this->ordre = o;
    }
    int getDa()
    {
        return this->date;
    }
    int getno()
    {
        return this->nom;
    }
    int getDa()
    {
        return this->ordre;
    }
    void setC(Chien a)
    {
        this->a = a;
    }
    Chien getC()
    {
        return this->a;
    }
    void setEn(Entraineur b)
    {
        this->b = b;
    }
    Entraineur getEn()
    {
        return this->b;
    }
};

int main()
{

    return 0;
}