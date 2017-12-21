#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Ecrivain.hpp"

using namespace std;

Ecrivain::Ecrivain(int larg, int haut){
	informations.push_back(larg);
	informations.push_back(haut);
	informations.push_back(255);
}

Ecrivain::~Ecrivain(){

}

string Ecrivain::Convertisseur(int nbre){
	stringstream converter;
	converter << nbre;
	return converter.str();
}

void Ecrivain::Ecriture(vector< vector<Pixel> > ListePixels){
	ofstream fichier("image.txt", ios::out | ios::trunc);

	/* ECRITURE
	 * largeur hauteur
	 * 255
	 */
	string buffer;

	// largeur
	buffer = Convertisseur(informations[0]);
	fichier.write(buffer.c_str(), buffer.size());

	fichier.put(' ');

	// longueur
	buffer = Convertisseur(informations[1]);
	fichier.write(buffer.c_str(), buffer.size());

	fichier.put('\n');

	// 255
	buffer = Convertisseur(informations[2]);
	fichier.write(buffer.c_str(), buffer.size());

	fichier.put('\n');

	// ECRITURE DES PIXELS

	cout << 1 << endl;

	for(int y=0 ; y<informations[1] ; y++){
		for(int x=0 ; x<informations[0] ; x++){
			buffer = Convertisseur(ListePixels.at(y).at(x).getCouleur().at(0));
			fichier.write(buffer.c_str(), buffer.size());
		}
		fichier.put(' ');
		for(int x=0 ; x<informations[0] ; x++){
			buffer = Convertisseur(ListePixels.at(y).at(x).getCouleur().at(1));
			fichier.write(buffer.c_str(), buffer.size());
		}
		fichier.put(' ');
		for(int x=0 ; x<informations[0] ; x++){
			buffer = Convertisseur(ListePixels.at(y).at(x).getCouleur().at(2));
			fichier.write(buffer.c_str(), buffer.size());
		}
		fichier.put('\n');
	}

	fichier.close();
}
