#define pi 3.14159265358979323846
#include <math.h>

/*		AREA SECTION		*/

	double aofsqr(double sidelength)
	{
		double area = 0;
		area = sidelength*sidelength;
		return area;
	}
	
	double aofrect(double base, double height)
	{
		double area = 0;
		area = base*height;
		return area;
	}
	
	double aoftri(double base, double height)
	{
		double area = 0;
		area = base*height/2;
		return area;
	}
	
	double aofrhom(double largeDiagonal, double smallDiagonal)
	{
		double area = 0;
		area = largeDiagonal*smallDiagonal/2;
		return area;
	}
	
	double aoftrap(double largeSide, double smallSide, double height)
	{
		double area = 0;
		area = height*(largeSide + smallSide)/2;
		return area;
	}
	
	double aofrgpol(double perimeter, double apothem)
	{
		double area = 0;
		area = perimeter*apothem/2;
		return area;
	}
	
	double aofcircle(double radius)
	{
		double area = 0;
		area = pi*radius*radius;
		return area;
	}
	
	double aofconelt(double radius, double slantHeight)
	{
		double area = 0;
		area = pi*radius*slantHeight;
		return area;
	}
	
	double aofsph(double radius)
	{
		double area = 0;
		area = 4*pi*radius*radius;
		return area;
	}
	
/*		VOLUME SECTION		*/

	double vofcube(double sideLength)
	{
		double volume = 0;
		volume = sideLength*sideLength*sideLength;
		return volume;
	}

	double vofprlpiped(double length, double width, double height)
	{
		double volume = 0;
		volume = length*width*height;
		return volume;
	}
	
	double vofrpri(double base, double height)
	{
		double volume = 0;
		volume = base*height;
		return volume;
	}
	
	double vofcyl(double radius, double height)
	{
		double volume = 0;
		volume = pi*radius*radius*height;
		return volume;
	}
	
	double vofcone(double radius, double height)
	{
		double volume = 0;
		volume = pi*radius*radius*height*0.33333333333;
		return volume;
	}
	
	double vofsph(double radius)
	{
		double volume = 0;
		volume = pi*radius*radius*radius*1.33333333333;
		return volume;
	}
	
/*		PERIMETER SECTION		*/
	
	double pofrgpol(double numberofSides, double sideLength)
	{
		double perimeter = 0;
		perimeter = numberofSides*sideLength;
		return perimeter;
	}
	double pofcircle(double radius)
	{
		double perimeter = 0;
		perimeter = pi*radius*2;
		return perimeter;
	}
	
/*		OTHER FUNCTIONS		*/

	double sumofintang(double numberofSides)
	{
		double sum = 0;
		sum = (numberofSides-2)*180;
		return sum;
	}
	
	double distonedim(double x1, double x2)
	{
		return fabs(x1 - x2);
	}
	
	double disttwodim(double x1, double y1, double x2, double y2)
	{
		return sqrt(pow(fabs(x1-x2), 2) + pow(fabs(y1-y2), 2));
	}
	
	double distthrdim(double x1, double y1, double z1, double x2, double y2, double z2 )
	{
		return sqrt(pow(fabs(x1-x2), 2) + pow(fabs(y1-y2), 2) + pow(fabs(z1-z2), 2));
	}
	
	double distfourdim(double x1, double y1, double z1, double t1, double x2, double y2, double z2, double t2 )
	{
		return sqrt(pow(fabs(x1-x2), 2) + pow(fabs(y1-y2), 2) + pow(fabs(z1-z2), 2) + pow(fabs(t1-t2), 2));
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
