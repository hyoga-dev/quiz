#include <iostream>
#include <cmath>
using namespace std;

void hitungEK(double massa, double kecepatan) 
{
	double EK =0.5 * massa  * pow(kecepatan, 2);
	cout << "EK : " << EK;
}

int main()
{
	double massa;
	double kecepatan;
	
	cout << "massa : "; cin >> massa;
	cout << "kecepatan : "; cin >> kecepatan;
	
	hitungEK(massa, kecepatan);
	
}

