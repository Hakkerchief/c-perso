/*
 * Scene.hpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef SCENE_HPP_
#define SCENE_HPP_

#include <vector>
#include <iostream>

#include "Camera.hpp"
#include "Ecran.hpp"
#include "Objet.hpp"
#include "Source.hpp"


class Scene {

protected:
	std::vector<int> background;
	std::vector<Objet*> elements;
	Camera vue;
	Ecran plan;
	Source lumiere;

public:
	Scene();
	virtual ~Scene();

	std::vector<int> getBackground() const {return background;};
	std::vector<Objet*> getElements() const {return elements;};
	Camera getVue() const {return vue;};
	Ecran getPlan() const {return plan;};
	Source getLumiere() const {return lumiere;};
	void setBackground(std::vector<int> bg){ background = bg;};
	void setElements(std::vector<Objet*> elmt){ elements = elmt;};
	void setCamera(Camera cam){ vue = cam;};
	void setEcran(Ecran screen){ plan = screen;};
	void setSource(Source src){ lumiere = src;};

	void addElement (Objet* elmt);
	void affiche() const;
	//std::vector<int> couleurPoint(std::vector<float> point) const;
};

#endif /* SCENE_HPP_ */
