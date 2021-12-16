#include <iostream>
using namespace std;
class complex
{
public:
    int real, imaginary;

    complex() {}

    complex(int reel, int imaginaire) // constructeur qui donne des valeur au reel et imaginaire.
    {
        real = reel;
        imaginary = imaginaire;
    }

    complex operator+(complex obj) // operator overloaded : on refinie l'operateur + pour les nombres complexes , add renvoie l'addition des 2 parties reeles est imaginaires
    {
        complex add;
        add.real = real + obj.real;
        add.imaginary = imaginary + obj.imaginary;
        return add;
    }
    complex operator-(complex obj) // operator overloaded : on refinie l'operateur - pour les nombres complexes , sub renvoie la soustraction des 2 parties reeles est imaginaires
    {
        complex sub;
        sub.real = real - obj.real;
        sub.imaginary = imaginary - obj.imaginary;
        return sub;
    }
    complex operator*(complex obj) // operator overloaded : on refinie l'operateur * pour les nombres complexes , multi renvoie la multiplication des 2 parties reeles est imaginaires
    {
        complex multi;
        multi.real = real * obj.real - imaginary * obj.imaginary;
        multi.imaginary = real * obj.imaginary - obj.real * imaginary;
        return multi;
    }
    complex operator/(complex obj) // operator overloaded : on refinie l'operateur / pour les nombres complexes , div renvoie la division des 2 parties reeles est imaginaires
    {
        complex div;
        div.real = (real * obj.real + imaginary * obj.imaginary) / (obj.real * obj.real + obj.imaginary * obj.imaginary);
        div.imaginary = (imaginary * obj.real + real * obj.imaginary) / (obj.real * obj.real + obj.imaginary * obj.imaginary);
        return div;
    }
};

int main()
{

    double real1, real2, imaginary1, imaginary2;
    int n;

    cout << "Enter the Real  part of First Number: ";
    cin >> real1;
    cout << "Enter the imaginary  part of First Number: ";
    cin >> imaginary1;
    complex c1(real1, imaginary1); // c1 est un objet de la classe complex et son constructeur qui donne valeurs aux imaginaire et reel
    // 2
    std::cout << "Enter the Real part of Second Number: ";
    std::cin >> real2;
    std::cout << "Enter the Imaginary part of second number: ";
    std::cin >> imaginary2;

    complex c2(real2, imaginary2);

    cout << "Choose the operation : " << std::endl; // afficher le menu pour que l'utilisateur choisi son choix
    cout << "1 : For Addition : " << std::endl;
    cout << "2 : For Substraction : " << std::endl;
    cout << "3 : For Multplication : " << std::endl;
    cout << "4 : For Division : " << std::endl;
    cin >> n;
    complex c11;
    complex c12;
    complex c13;
    complex c14;

    switch (n) // le menu
    {

    case 1:
        c11 = c1 + c2; // l'objet c11 va recevoir l'addition du objet c1 et c2 ( le + est l'opereur surchargé)
        cout << "Addition is : (" << c11.real << ")+(" << c11.imaginary << ")i";
        break;
        // la meme chose pour tous les operateurs
    case 2:
        c12 = c1 - c2;
        cout << "Subtraction is : (" << c12.real << ")+(" << c12.imaginary << ")i";
        break;
    case 3:
        c13 = c1 * c2;
        cout << "Multiplication is : (" << c13.real << ")+(" << c13.imaginary << ")i";
        break;
    case 4:
        c14 = c1 / c2;
        cout << "Division result  is : (" << c14.real << ")+(" << c14.imaginary << ")i";
        break;
    default:
        cout << "Enter a valid number .";
        break;
    }

    return 0;
}
