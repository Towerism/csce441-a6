/*
	skeleton.h

	Definition of the skeleton. 

    Written by  Jehee Lee
*/

#ifndef _VECTOR_H
#define _VECTOR_H


class whyNameThisClassTheSameAsSTDvectorThatIsDumb
{
    // negation
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb    operator-( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

    // addtion
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb    operator+( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

    // subtraction
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb    operator-( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

    // dot product
    friend float    operator%( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

    // cross product
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb    operator*( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

    // scalar Multiplication
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb    operator*( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, float );

    // scalar Division
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb    operator/( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, float );


    friend float    len( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );
    friend whyNameThisClassTheSameAsSTDvectorThatIsDumb	normalize( whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

	friend whyNameThisClassTheSameAsSTDvectorThatIsDumb       interpolate( float, whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

    friend float       angle( whyNameThisClassTheSameAsSTDvectorThatIsDumb const&, whyNameThisClassTheSameAsSTDvectorThatIsDumb const& );

  // member functions
  public:
    // constructors
    whyNameThisClassTheSameAsSTDvectorThatIsDumb() {}
    whyNameThisClassTheSameAsSTDvectorThatIsDumb( float x, float y, float z ) { p[0]=x; p[1]=y; p[2]=z; }
    whyNameThisClassTheSameAsSTDvectorThatIsDumb( float a[3] ) { p[0]=a[0]; p[1]=a[1]; p[2]=a[2]; }
	~whyNameThisClassTheSameAsSTDvectorThatIsDumb() {};

    // inquiry functions
    float& operator[](int i) { return p[i];}

    float x() const { return p[0]; };
    float y() const { return p[1]; };
    float z() const { return p[2]; };
    void   getValue( float d[3] ) { d[0]=p[0]; d[1]=p[1]; d[2]=p[2]; }
    void   setValue( float d[3] ) { p[0]=d[0]; p[1]=d[1]; p[2]=d[2]; }

	float getValue( int n ) const { return p[n]; }
	whyNameThisClassTheSameAsSTDvectorThatIsDumb setValue( float x, float y, float z )
								   { p[0]=x, p[1]=y, p[2]=z; return *this; }
	float setValue( int n, float x )
								   { return p[n]=x; }

	float length() const;

    // change functions
    void set_x( float x ) { p[0]=x; };
    void set_y( float x ) { p[1]=x; };
    void set_z( float x ) { p[2]=x; };

	//data members
    float p[3]; //X, Y, Z components of the vector
};


#endif
