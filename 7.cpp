#include <iostream>

class krepsininkai {
private:
	int tritaskiu_mete,
		tritaskiu_pataike,
		dvitaskiu_mete,
		dvitaskiu_pataike,
		baudu_mete,
		baudu_pataike,
		viso_tasku;
	double taiklumas;
public:
	void set_all(int, int, int, int, int, int, int),
		 set_metimai(),
		 set_viso_tasku(),
		 set_taiklumas();

	int get_tritaskiu_mete(),
		get_tritaskiu_pataike(),
		get_dvitaskiu_mete(),
		get_dvitaskiu_pataike(),
		get_baudu_mete(),
		get_baudu_pataike(),
		get_viso_tasku();

	double get_taiklumas();
};

int main()
{
	krepsininkai Zaidejas[100];
	int n, daugiausiai_tasku = 0, daugiausiai_pelnes_tasku; std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		Zaidejas[i].set_metimai();
		Zaidejas[i].set_viso_tasku();
		Zaidejas[i].set_taiklumas();
		if (Zaidejas[i].get_viso_tasku() > daugiausiai_tasku && Zaidejas[i].get_viso_tasku() != daugiausiai_tasku)
		{
			daugiausiai_pelnes_tasku = i;
			daugiausiai_tasku = Zaidejas[i].get_viso_tasku();
		}
	}

	printf("%.2f", Zaidejas[daugiausiai_pelnes_tasku].get_taiklumas());
	return 0;
}

void krepsininkai::set_all(int tritaskiu_mete, int tritaskiu_pataike,
	int dvitaskiu_mete, int dvitaskiu_pataike,
	int baudu_mete, int baudu_pataike,
	int viso_tasku)
{
}

void krepsininkai::set_metimai()
{
	std::cin >> this->dvitaskiu_mete >> this->dvitaskiu_pataike
			>> this->tritaskiu_mete >> this->tritaskiu_pataike
			>> this->baudu_mete >> this->baudu_pataike;
}

void krepsininkai::set_taiklumas()
{
	this->taiklumas = (double)(this->tritaskiu_pataike + this->dvitaskiu_pataike + this->baudu_pataike) /
		(double)(this->tritaskiu_mete + this->dvitaskiu_mete + this->baudu_mete) * 100;
}

void krepsininkai::set_viso_tasku()
{ this->viso_tasku = (this->tritaskiu_pataike * 3) + (this->dvitaskiu_pataike * 2) + this->baudu_pataike; }

int krepsininkai::get_tritaskiu_mete() { return this->tritaskiu_mete; }
int krepsininkai::get_tritaskiu_pataike() { return this->tritaskiu_pataike; }
int krepsininkai::get_baudu_pataike() { return this->baudu_pataike; }
int krepsininkai::get_baudu_mete() { return this->baudu_mete; }
int krepsininkai::get_dvitaskiu_mete() { return this->dvitaskiu_mete; }
int krepsininkai::get_dvitaskiu_pataike() {	return this->dvitaskiu_pataike; }
int krepsininkai::get_viso_tasku() { return this->viso_tasku; }
double krepsininkai::get_taiklumas() { return this->taiklumas; }
