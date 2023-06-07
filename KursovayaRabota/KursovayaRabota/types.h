
#include <iostream>
using namespace std;

class Type1 {
public:
    void show();
    void get_answer();
};

class Type2 {
private:
    double A;
public:
    Type2(double a1);
    void show();
    void get_answer();
};

class Type3
{
private:
	double C;
public:
	Type3(double c1);
	void get_answer();
	void show();
};

class Type4
{
private:
	double A, C;
public:
	Type4(double a1, double c1);
	void get_answer();
	void show();
};

class Type5
{
private:
	double B;
	double C;
public:
	Type5(double b1, double c1);
	void get_answer();
	void show();

};

class Type6
{
private:
	double A;
	double B;
	double C;
public:
	Type6(double a1, double b1, double c1);
	void get_answer();
	void show();
};

class Type7
{
private:
	double B;
public:
	Type7(double b1);
	void get_answer();
	void show();
};

class Type8
{
private:
	double A, B;
public:
	Type8(double a1, double b1);
	void get_answer();
	void show();
};