/**
 * Author:
 *	Pierre Lindenbaum PhD plindenbaum@yahoo.fr
 * About:
 *	Interfaces for Math
 * References:
 *	
 */
#ifndef _LINDENB_MATH_H_
#define _LINDENB_MATH_H_
#include <cmath>
namespace lindenb { namespace math {
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef M_PI_2
#define M_PI_2 1.57079632679489661923
#endif

static inline double deg2rad(double deg)
	{
	return (deg)*(M_PI/180.0);
	}

static inline double rad2deg(double rad)
	{
	return (rad)*(180.0/M_PI);
	}
}}//namespaces
#endif