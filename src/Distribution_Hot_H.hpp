/*
 * Distribution_Hot_H.hpp
 *
 *  Created on: Jul 31, 2020
 *      Author: rodney
 */

#ifndef DISTRIBUTION_HOT_H_HPP_
#define DISTRIBUTION_HOT_H_HPP_

#include "Distribution.hpp"

class Distribution_Hot_H: public Distribution {
public:
	Distribution_Hot_H(Planet my_p, double ref_h, double ref_T);
	virtual ~Distribution_Hot_H();
	void init(Particle* p);
};

#endif /* DISTRIBUTION_HOT_H_HPP_ */
