/*
 * Scene.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#include "Scene.hpp"

Scene::Scene() {
	// TODO Auto-generated constructor stub

}

Scene::~Scene() {
	// TODO Auto-generated destructor stub
}

void Scene::addElement (Objet* elmt){
	elements.push_back(elmt);
}

void Scene::affiche() const {
	std::cout << "[Scene : " << std::endl;
	unsigned int i;
	for (i = 0; i < elements.size() ; i++){
		std::cout << "\t ";
		(*elements[i]).affiche();
	}
	std::cout << "];" << std::endl;
	// TODO faire pareil avec les autre éléments de Scene
}

/*std::vector<int> Scene::couleurPoint(std::vector<float> point) const{
	std::vector<Objet> contenants;
	for (Objet &o:elements){
		if (o.contient(point)) contenants.push_back(o);
	}
}*/
