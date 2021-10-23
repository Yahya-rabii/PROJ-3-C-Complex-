#pragma once

namespace arith {

	class Complex
	{

	private:
		double Re;
		double Img;

	public:

		//Complex init(double Re, double Img);
		
		Complex(double reel, double imagin); //constructeur
		
		
		Complex(); //constructeur


		void afficher();

		double module();

		Complex conjugue();

		Complex Add( Complex a);

		Complex sub(Complex a);

		Complex mul(Complex a);

		Complex Div(Complex a);

	};

};
