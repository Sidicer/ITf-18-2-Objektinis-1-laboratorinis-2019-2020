#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

#include <time.h>
#include <Windows.h>
#include <conio.h>

class krepsininkai {
private:
	int tritaskiuMete,
		dvitaskiuMete,
		bauduMete,
		tritaskiuPataike,
		dvitaskiuPataike,
		bauduPataike;
	double taiklumas;

public:
	int getTM() { return this->tritaskiuMete; }
	int getDM() { return this->dvitaskiuMete; }
	int getBM() { return this->bauduMete; }
	int getTP() { return this->tritaskiuPataike; }
	int getDP() { return this->dvitaskiuPataike; }
	int getBP() { return this->bauduPataike; }
	double getTaiklumas() { return this->taiklumas; }

	void set(int tritaskiuMete, int dvitaskiuMete, int bauduMete,
			int tritaskiuPataike, int dvitaskiuPataike, int bauduPataike,
			double taiklumas) {
		this->tritaskiuMete = tritaskiuMete;
		this->dvitaskiuMete = dvitaskiuMete;
		this->bauduMete = bauduMete;
		this->tritaskiuPataike = tritaskiuPataike;
		this->dvitaskiuPataike = dvitaskiuPataike;
		this->bauduPataike = bauduPataike;
		this->taiklumas = taiklumas;
	}
};

int main() {
	krepsininkai Krepsininkas[100];
	int n, taikliausias(0);
	double koeficientas(999999);

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int tm, dm, bm, tp, dp, bp;
		std::cin >> dm >> dp >> tm >> tp >> bm >> bp;
		Krepsininkas[i].set(tm, dm, bm, tp, dp, bp, (double)(tm + dm + bm) / (double)(tp + dp + bp));

		if (Krepsininkas[i].getTaiklumas() < koeficientas && Krepsininkas[i].getTaiklumas() != koeficientas) {
			koeficientas = Krepsininkas[i].getTaiklumas();
			taikliausias = i;
		}
	}

	printf("%i", (Krepsininkas[taikliausias].getTP() * 3) + (Krepsininkas[taikliausias].getDP() * 2) + Krepsininkas[taikliausias].getBP());
}
