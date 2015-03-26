/**
 * point.hpp
 *
 *  Created on: 26.03.2015
 *      Author: michael.zellin
 */

#pragma once


class Point {

private:
	int dimension;
	/* homogene Kooerdianten des Raumes */
	double m_x;
	double m_y;
	double m_z;
	double m_h;
	/* Koordianten in Unterkoordinatensystemen, wie z.B. Texturen usw */
	double m_u;
	double m_v;
	double m_w;

public:

	Point();
	*Point();

	/* setter und getter */
	int set_2d(double x, double y);
	int set_3d(double x, double y, double z);
	int set_4d(double x, double y, double z, double h);
	int set_uvw(double u, double v, double w);

	double get_x();
	double get_y();
	double get_z();
	double get_h();
	double get_u();
	double get_v();
	double get_w();

	/* operations on Point */


	/* output */
	int to_string(char * outputStr);
};
