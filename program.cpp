#include <iostream>

#include "student.cpp"

using namespace std;

int main()
{
    Ecole ec1;
    int choix;
    do
    {
        cout <<endl<< "Menu:" << endl;
        cout << "1. Ajouter un etudiant" << endl;
        cout << "2. Ajouter un cours" << endl;
        cout << "3. Inscrire un etudiant a un cours" << endl;
        cout << "4. Afficher les etudiants inscrits a un cours" << endl;
        cout << "5. Supprimer un etudiant" << endl;
        cout << "6. Supprimer un cours" << endl;
        cout << "7. Afficher tous les cours" << endl;
        cout << "8. Afficher tous les etudiants" << endl;
        cout << "9. Quitter" << endl;
        cout << "Votre choix: ";
        cin >> choix;

        switch (choix)
        {
        case 1:
        {
            int matricule;
            string nom, prenom;
            cout <<endl<< "Matricule: ";
            cin >> matricule;
            cout <<endl<< "Nom: ";
            cin >> nom;
            cout <<endl<< "Prenom: ";
            cin >> prenom;
            Student std1 = Student(matricule, nom, prenom);
            ec1.ajouterEtudiant(std1);
            break;
        }
        case 2:
        {
            int code;
            string title, tutor;
            cout <<endl<< endl
                 << "Code du cours: ";
            cin >> code;
            cin.ignore();
            cout <<endl<< endl
                 << "Nom du cours: "<<endl;
            getline(cin , title);
            cout <<endl<< endl
                 << "Professeur: ";
            getline(cin , tutor);
            Cours c1 = Cours(code, title, tutor);
            ec1.ajouterCours(c1);
            break;
        }

        case 3:
        {
            int mS, nC;
            cout << endl
                 << "veuillez entrer le code du cours: ";
            cin >> nC;
            cout << endl
                 << "veuillez entrer la matricule d'etudiant: ";
            cin >> mS;
            ec1.inscrireEtudiantAuCours(mS, nC);
            break;
        }

        case 4:
        {
            int courscode;
            cout << endl
                 << "veuillez entrer le code du cours que vous voulez afficher ses etudiants : ";
            cin >> courscode;
            ec1.afficherEtudiantsDansCours(courscode);
            break;
        }

        case 5:
        {
            int matricule;
            cout << "Matricule de l'étudiant a1 supprimer: ";
            cin >> matricule;
            ec1.supprimerEtudiant(matricule);
            break;
        }

        case 6:
        {
            int code;
            cout << "Code du cours a supprimer: ";
            cin >> code;
            ec1.supprimerCours(code);
            break;
        }

        case 7:
        {
            ec1.afficherCours();
            break;
        }

        case 8:
        {
            ec1.afficherEtudiants();
            break;
        }

        case 9:
            cout << "Au revoir!" << endl;
            break;

        default:
            break;
        }
    } while (choix != 9);

    return 0;
}