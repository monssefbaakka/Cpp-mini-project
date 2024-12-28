#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* ----------------------------------------- Etudiant ----------------------------------------------------- */

class Student
{
private:
    int matricule;
    string nom;
    string prenom;

public:
    Student(/* args */);
    Student(int matricule, string nom, string prenom);
    ~Student();
    // declaration des getters and setters
    void setMatricule(int m) { matricule = m; }
    int getMatricule() { return matricule; }
    void setName(string n) { nom = n; }
    string getName() { return nom; }
    void setPrenom(string pn) { prenom = pn; }
    string getPrenom() { return prenom; }

    void affichage();
};

/* ----------------------------------------- Cours ----------------------------------------------------- */

class Cours
{
private:
    int code;
    string nom;
    string tutor;
    vector<Student> etudiantInscrit;

public:
    Cours();
    Cours(int c, string n, string t);
    ~Cours();
    // methodes
    void ajouterEtudiant(Student &etudiant);
    // getters & setters
    void setCode(int c) { code = c; }
    int getCode() { return code; }
    void setNom(string n) { nom = n; }
    string getNom() { return nom; }
    void setTutor(string t) { tutor = t; }
    string getTutor() { return tutor; }
    void setStudents(vector<Student> s) { etudiantInscrit = s; }
    vector<Student> &getStudents() { return etudiantInscrit; }

    void afficherInfos();
};

class Ecole
{
private:
    vector<Student> list_students;
    vector<Cours> list_cours;

public:
    void ajouterEtudiant(Student &student);
    void ajouterCours(Cours &cours);
    // DECLARATIONS DES METHODES QU'ON VA UTILISER
    void inscrireEtudiantAuCours(int matricule, int codeCours);
    void supprimerEtudiant(int matricule);
    void supprimerCours(int codeCours);
    void afficherEtudiants();
    void afficherCours();
    void afficherEtudiantsDansCours(int codeCours);
};