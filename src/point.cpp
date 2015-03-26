/**
 * point.cpp
 *
 *  Created on: 26.03.2015
 *      Author: michael.zellin
 */

#include <point.hpp>

Point::Point() {
	set_4d(0.0, 0.0, 0.0, 1.0);
	set_uvw(0.0, 0.0, 0.0);
	return;
}

