#include <cmath>
#include <cstdio>
#include "transform.h"
#include "types.h"

#include "vector.h"

//#include "mathclass.h"

// at least enclose in a namespace other than global sheesh
whyNameThisClassTheSameAsSTDvectorThatIsDumb operator-( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& b )
{
    whyNameThisClassTheSameAsSTDvectorThatIsDumb c;

    c.p[0] = a.p[0] - b.p[0];
    c.p[1] = a.p[1] - b.p[1];
    c.p[2] = a.p[2] - b.p[2];

    return c;
}

whyNameThisClassTheSameAsSTDvectorThatIsDumb operator+( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& b )
{
    whyNameThisClassTheSameAsSTDvectorThatIsDumb c;

    c.p[0] = a.p[0] + b.p[0];
    c.p[1] = a.p[1] + b.p[1];
    c.p[2] = a.p[2] + b.p[2];

    return c;
}

whyNameThisClassTheSameAsSTDvectorThatIsDumb operator/( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, float b )
{
    whyNameThisClassTheSameAsSTDvectorThatIsDumb c;

    c.p[0] = a.p[0] / b;
    c.p[1] = a.p[1] / b;
    c.p[2] = a.p[2] / b;

    return c;
}

//multip
whyNameThisClassTheSameAsSTDvectorThatIsDumb operator*( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, float b )
{
    whyNameThisClassTheSameAsSTDvectorThatIsDumb c;

    c.p[0] = a.p[0] * b;
    c.p[1] = a.p[1] * b;
    c.p[2] = a.p[2] * b;

    return c;
}


//cross prodact
whyNameThisClassTheSameAsSTDvectorThatIsDumb operator*( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& b )
{
    whyNameThisClassTheSameAsSTDvectorThatIsDumb c;

    c.p[0] = a.p[1]*b.p[2] - a.p[2]*b.p[1];
    c.p[1] = a.p[2]*b.p[0] - a.p[0]*b.p[2];
    c.p[2] = a.p[0]*b.p[1] - a.p[1]*b.p[0];

    return c;
}

//dot prodact
float operator%( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& b )
{
    return ( a.p[0]*b.p[0] + a.p[1]*b.p[1] + a.p[2]*b.p[2] );
}


whyNameThisClassTheSameAsSTDvectorThatIsDumb
interpolate( float t, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& b )
{
	return a*(1.0-t) + b*t;
}

float len( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& v )
{
    return sqrt( v.p[0]*v.p[0] + v.p[1]*v.p[1] + v.p[2]*v.p[2] );
}

float
whyNameThisClassTheSameAsSTDvectorThatIsDumb::length() const
{
    return sqrt( p[0]*p[0] + p[1]*p[1] + p[2]*p[2] );
}


float angle( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& a, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& b )
{
    return acos( (a%b)/(len(a)*len(b)) );
}


