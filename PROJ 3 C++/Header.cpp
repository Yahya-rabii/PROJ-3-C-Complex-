#include "Header.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace arith;

/*
Complex arith::Complex::init(double R, double Im)
{
 

	this->Re   = R;
	this->Img  = Im;
	
	return (* this);

}
*/

arith::Complex::Complex(double reel, double imagin)
{

	this->Re = reel;
	this->Img = imagin;


}

arith::Complex::Complex()
{
	this->Re = 0;
	this->Img = 0;
}

void arith::Complex::afficher()
{


	if (this->Img > 0) {
		cout << this->Re << "+" << this->Img << "i" ;
	}

	else if (this->Img == 0)
	{
		cout << this->Re ;

	}
	
	else {
		cout << this->Re << "" << this->Img << "i" ;
	}

}

double arith::Complex::module()
{
	return sqrt(pow(this->Img, 2) + pow(this->Re, 2));
}

Complex arith::Complex::conjugue()
{
	Complex a;

	a.Re  = this->Re;
	a.Img = (- (this->Img));

	return a;
}

Complex arith::Complex::Add( Complex a)
{
	Complex sum;

	sum.Re = a.Re + this->Re;
	sum.Img = a.Img + this->Img;

	return sum;
}

Complex arith::Complex::sub(Complex a)
{
	Complex sub;

	sub.Re = a.Re - this->Re;
	sub.Img = a.Img - this->Img;




	return sub;
}



Complex arith::Complex::mul(Complex a)
{
	
	Complex mu_res;

	mu_res.Re = a.Re * this->Re - a.Img * this->Img;

	mu_res.Img = a.Re * this->Img + a.Img * this->Re;


	return mu_res;
}



Complex arith::Complex::Div(Complex a)
{

	Complex b;


	b.Re = (a.Re * this->Re + a.Img * this->Img) / (pow(this->Re, 2) + pow(this->Img, 2));

	b.Img = (-(a.Re * this->Img) + a.Img * this->Re) / (pow(this->Re, 2) + pow(this->Img, 2));

	return b;

}
