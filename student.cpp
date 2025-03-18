#include <iostream>
#include <string>
#include <vector>

#include "cours.cpp"

using namespace std;

Student::Student()
{
    setMatricule(69);
    setName("xxxxxxxx");
    setPrenom("yyyyyyyyyy");
}

Student::Student(int m, string n, string pn)
{
    setMatricule(m);
    setName(n);
    setPrenom(pn);
}

Student::~Student()
{
    cout << "objet a ete detruit !" << endl;
}

void Student::affichage()
{
    cout << endl
         << "l'etudiant de matricule: " << matricule << endl
         << "et de nom: " << nom << endl
         << "et de prenom: " << prenom;
}
