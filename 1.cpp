#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <cmath>

class Laikas {
private:
	int valandos,
		minutes,
		sekundes;

public:
	int getValandos(){return this->valandos;}
	int getMinutes(){return this->minutes;}
	int getSekundes(){return this->sekundes;}

	void setValandos(int valandos) {this->valandos = valandos;}
	void setMinutes(int minutes) {this->minutes = minutes;}
	void setSekundes(int sekundes) {this->sekundes = sekundes;}
	void set(int valandos, int minutes, int sekundes){this->valandos = valandos; this->minutes = minutes; this->sekundes = sekundes;}
};

Laikas laikas;

int main()
{
	int kartu, h,m,s, sekundes(0);
	std::cin >> kartu;

	std::cin >> h >> m >> s;
	laikas.set(h,m,s);

	sekundes = laikas.getValandos()*3600 + laikas.getMinutes()*60 + laikas.getSekundes();

	for (int i = 1; i <= kartu; i++) {
		sekundes /= 3;
		printf("%02i:%02i:%02i\n", sekundes/3600, (sekundes%3600)/60, (sekundes % 3600)%60);
	}

    return 0;
}
