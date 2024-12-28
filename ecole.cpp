#include <iostream>
#include <vector>
#include <string>

#include "main.h"

using namespace std;

void Ecole::ajouterCours(Cours &c)
{
    list_cours.push_back(c);
}

void Ecole::ajouterEtudiant(Student &s)
{
    list_students.push_back(s);
}

void Ecole::inscrireEtudiantAuCours(int matriculeS, int NumCours)
{
    Student *student = nullptr;
    for (int i = 0; i < list_students.size(); i++)
    {
        if (list_students[i].getMatricule() == matriculeS)
        {
            student = &list_students[i];
            break;
        }
    }

    Cours *courses = nullptr;
    for (int i = 0; i < list_cours.size(); i++)
    {
        if (list_cours[i].getCode() == NumCours)
        {
            courses = &list_cours[i];
            break;
        }
    }

    if (student != nullptr && courses != nullptr)
    {
        courses->ajouterEtudiant(*student);
    }
}

void Ecole::supprimerEtudiant(int m)
{
    for (int i = 0; i < list_students.size(); i++)
    {
        if (m == list_students[i].getMatricule())
        {
            list_students.erase(list_students.begin() + i);
            cout << endl
                 << "l'etudiant a ete suuprime!" << endl;
            return;
        }
    }
    cout << endl
         << "l'etudiant n'a pas ete trouve!" << endl;
}

void Ecole::supprimerCours(int code)
{
    for (int i = 0; i < list_cours.size(); i++)
    {
        if (code == list_cours[i].getCode())
        {
            list_cours.erase(list_cours.begin() + i);
            cout << endl
                 << "le cours a  ete supprime!" << endl;
            return;
        }
    }
    cout << endl
         << "le cours est introuvable!" << endl;
}

void Ecole::afficherCours()
{
    for (int i = 0; i < list_cours.size(); ++i)
    {
        list_cours[i].afficherInfos();
    }
}

void Ecole::afficherEtudiants()
{
    for (int i = 0; i < list_students.size(); ++i)
    {
        list_students[i].affichage();
    }
}

void Ecole::afficherEtudiantsDansCours(int c)
{
    for (int i = 0; i < list_cours.size(); i++)
    {
        if (list_cours[i].getCode() == c)
        {
            list_cours[i].afficherInfos();
        }
    }
}