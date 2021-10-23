#include <iostream>
#include "Header.h"


using namespace std;
using namespace arith;


int main()

{

	Complex z1(4,5);

	//z.init(double re , double img)
	
	cout << "Z1 =";


	z1.afficher();
   
	cout << endl;


	Complex z2;
   
	cout << "Z2 =";

	z2.afficher();

	cout << endl;


	cout << "le module de Z1 :" << z1.module() << endl;

	cout << "le module de Z2 :" << z2.module() << endl;



	Complex con;

	con = z1.conjugue();


	cout << "le conju de Z1 = ";
	z1.afficher();
	cout << " est : ";
	con.afficher();
	
	cout << endl;

    con = z2.conjugue();
	
	
	cout << "le conju de Z2 = " ;
	z2.afficher();
	cout << " est : ";
	con.afficher();

	cout << endl;
	cout << endl;

	Complex sum;
	sum = z1.Add(z2);
	cout << "la somme entre z1 et Z2  = ";
	sum.afficher();

	cout << endl;
	cout << endl;

	Complex sub;
	sub = z1.sub(z2);
	cout << "la soustraction entre z1 et Z2  = ";
	sub.afficher();
	
	cout << endl;
	cout << endl;


	Complex z3(3, 6);
	Complex mu;
	mu = z1.mul(z3);
	cout << "la multiplication entre z1 et Z3  = ";
	mu.afficher();

	cout << endl;
	cout << endl;



	Complex z5(6, 0);
	Complex z4(3, 0);
	Complex di;
	di = z4.Div(z5);
	cout << "la division entre z3 et Z5  = ";
	di.afficher();

	cout << endl;
	cout << endl;
}