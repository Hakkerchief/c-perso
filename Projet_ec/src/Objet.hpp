/*
 * Objet.h
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef OBJET_HPP_
#define OBJET_HPP_

#include <vector>
#include <valarray>
#include <string>


class Objet {


protected:
	std::vector<int> couleur;
	std::valarray<float> position;
	double reflexion;

public:
	Objet();
	virtual ~Objet();

	std::valarray<float> getPosition() const {return position;};
	std::vector<int> getCouleur() const {return couleur;};
	double getReflexion() const {return reflexion;};
	void setPosition(std::valarray<float> pos) {position = pos;};
	void setCouleur(std::vector<int> col) {couleur= col;};
	void setReflexion(double refx) {reflexion = refx;};

	virtual void affiche() const = 0 ;
	virtual bool contient(std::vector<float> point) const = 0;
};

#endif /* OBJET_HPP_ */
