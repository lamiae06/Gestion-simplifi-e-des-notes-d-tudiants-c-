
#include "Etudiant.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "===== CREATION DES ETUDIANTS =====" << endl;

    Etudiant e1("Etudiant1", 3);
    e1.afficher();

    Etudiant e2("Etudiant2", 4);
    e2.afficher();

    cout << "\n===== AJOUT DES NOTES =====" << endl;

    e1.ajouterNote(15);
    e1.ajouterNote(12);
    e1.ajouterNote(18);

    e2.ajouterNote(10);
    e2.ajouterNote(14);

    e1.afficher();
    e2.afficher();

    cout << "\n===== TEST NOTE INVALIDE =====" << endl;

    e1.ajouterNote(25);
    e1.afficher();

    cout << "\n===== TEST CAPACITE PLEINE =====" << endl;

    e1.ajouterNote(16);
    e1.afficher();

    cout << "\n===== TEST ETUDIANT SANS NOTE =====" << endl;

    {
        Etudiant e3("Etudiant3", 2);
        e3.afficher();

        cout << "\n===== TEST ETUDIANT DYNAMIQUE =====" << endl;

        Etudiant* e4 = new Etudiant("Etudiant4", 3);
        e4->ajouterNote(17);
        e4->ajouterNote(19);
        e4->afficher();

        delete e4;
    }

    cout << "\n===== FIN DU PROGRAMME =====" << endl;

    e1.afficher();
    e2.afficher();

    return 0;
}
