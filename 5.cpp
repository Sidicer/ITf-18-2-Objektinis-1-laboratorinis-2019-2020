#include <iostream>
#include <cmath>

class trikampis {
private:
	int x1, x2, x3, y1, y2, y3;
	double area;
public:
	void input_data();
	double calculate_area();

	int get_x1(), get_x2(), get_x3(), get_y1(), get_y2(), get_y3();
	double get_area();
};

int main() {
	trikampis Trikampiai[100];
	int n;
	double sum_of_areas = 0.0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		Trikampiai[i].input_data();
		Trikampiai[i].calculate_area();
		sum_of_areas += Trikampiai[i].get_area();
	}

	if(!sum_of_areas) printf("NO\n");
	else
		printf("%.3f\n", sum_of_areas);
	return 0;
}

void trikampis::input_data()
{
	std::cin >> this->x1 >> this->x2 >> this->x3 >> this->y1 >> this->y2 >> this->y3;
}

double trikampis::calculate_area()
{
	this->area = 0.5 * abs(((double)(this->x2 - this->x1)*(double)(this->y3 - this->y1)) - ((double)(this->x3 - this->x1)*(double)(this->y2 - this->y1)));
	return this->area;
}

int trikampis::get_x1() { return this->x1; }
int trikampis::get_x2() { return this->x2; }
int trikampis::get_x3() { return this->x3; }

int trikampis::get_y1() { return this->y1; }
int trikampis::get_y2() { return this->y2; }
int trikampis::get_y3() { return this->y3; }

double trikampis::get_area(){ return this->area; }
