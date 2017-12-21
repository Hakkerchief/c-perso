/*
 * Source.hpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef SOURCE_HPP_
#define SOURCE_HPP_

#include <vector>


class Source {
    std::vector<int> position,
                     couleur;

public:
	Source();
	virtual ~Source();

	std::vector<int> getPosition(){return position;};
	std::vector<int> getCouleur(){return couleur;};
	void setPosition (std::vector<int> pos){position = pos;};
	void setCouleur (std::vector<int> col){couleur = col;};
};

#endif /* SOURCE_HPP_ */
