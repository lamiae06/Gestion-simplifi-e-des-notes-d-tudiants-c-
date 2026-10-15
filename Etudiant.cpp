#include "Etudiant.h"
int Etudiant::compteur = 0;
int Etudiant::nbretudiants = 0;

Etudiant::Etudiant(string n, int c): id(compteur+1) , notes(nullptr) , moyenne(0)
{
	this->nom = n;
	this->notemax = c;
	notes = new int[this->notemax];
	
	Etudiant::compteur++;
	Etudiant::nbretudiants++;
	 
	this->nbrnotes = 0;

}


void Etudiant::ajouterNote(int note)
{
	if (note < 0 || note > 20) {
		cout << "Erreur : la note doit etre entre 0 et 20." << endl;
	}
	else if (nbrnotes >= notemax) {
		cout << "Erreur : capacite maximale atteinte." << endl;
	}
	else {
		notes[nbrnotes] = note;
		nbrnotes++;
		cout << "Note ajoutee avec succes." << endl;
	}
}


float Etudiant::calculerMoyenne() const
{ 
	if (nbrnotes == 0) {
        return 0;
    }

	float somme = 0;
	float moyenne = 0;
	for (int i = 0; i < nbrnotes;i++) {
		somme += notes[i];
		moyenne = static_cast<float>(somme) / nbrnotes;

	}
	return moyenne;
}

void Etudiant::afficher() const
{
	cout << "ID : " << id << endl;
	cout << "Nom : " << nom << endl;
	cout << "Nombre maximum de notes : " << notemax << endl;
	cout << "Nombre de notes ajoutees : " << nbrnotes << endl;

	cout << "Notes : ";
	for (int i = 0; i < nbrnotes; i++) {
		cout << notes[i] << " ";
	}
	cout << endl;

	cout << "Moyenne : " << calculerMoyenne() << endl;
	cout << "Nombre d'etudiants : " << nbretudiants << endl;
	cout << "------------------------" << endl;
}

Etudiant::~Etudiant()
{
	delete[] notes;
	notes = nullptr;
	Etudiant::nbretudiants--;

}








