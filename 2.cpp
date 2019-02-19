#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

#include <time.h>
#include <Windows.h>
#include <conio.h>

class skrituliai {
private:
	int centroX,
		centroY,
		skersmuo;
	double spindulys;
public:
	int getCentroX() { return this->centroX; }
	int getCentroY() { return this->centroY; }
	int getSkersmuo() { return this->skersmuo; }
	double getSpindulys() { return this->spindulys; }

	void set(int centroX, int centroY, int skersmuo, double spindulys) {
		this->centroX = centroX; this->centroY = centroY; this->skersmuo = skersmuo; this->spindulys = spindulys;
	}
	void setCentroX(int centroX) { this->centroX = centroX; }
	void setCentroY(int centroY) { this->centroY = centroY; }
	void setSkersmuo(int skersmuo) { this->skersmuo = skersmuo; }
	void setSpindulys(double spindulys) { this->spindulys = spindulys; }
};

int main()
{
	skrituliai Skritulys[100];
	int n, k(0);
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, d;
		std::cin >> x >> y >> d;
		Skritulys[i].set(x, y, d, (double)d / 2);
	}

	for (int i = 0; i < n; i++) {
		double atstumas(0);
		atstumas = sqrt( pow(Skritulys[i].getCentroX(),2) + pow(Skritulys[i].getCentroY(),2) );

		if (atstumas <= Skritulys[i].getSpindulys())
			k++;
	}

	printf("%i", k);
}
