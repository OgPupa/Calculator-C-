#include <cmath>
#include <iostream>

using namespace std;

class cone
{
private:
	const double PI = 3.14159265;
	double x, y, z;
	double R;
	double H;
public:
	cone()
	{
		x = y = x = R = H = 0;
	}
	cone(double r, double h)
	{
		x = y = z = 0;
		R = r;
		H = h;
	}
	cone(double X, double Y, double Z, double r, double h)
	{
		x = X;
		y = Y;
		z = Z;
		R = r;
		H = h;
	}

	void setCoordinate(double X, double Y, double Z);
	void setRadius(double r);
	void setHeight(double h);
	void getCoordinate(double& X, double& Y, double& Z);
	double getRadius();
	double getHeight();

	double area();
	double volume();

	friend ostream& operator<<(ostream& stream, cone obj);
};
