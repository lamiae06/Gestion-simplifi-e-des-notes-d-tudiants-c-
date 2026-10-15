#pragma once
#include<iostream>
using namespace std;
class Etudiant
{
private:
	const int id;
	string nom;
	int* notes;
	int notemax;
	int nbrnotes;
	float moyenne;
	 
	static int compteur;
	static int nbretudiants;

public:
	Etudiant(string n, int c);
	void ajouterNote(int note);
	float calculerMoyenne() const;
	void afficher() const;
	~Etudiant();
};

