
#include "mappa.h"

Mappa::Mappa() {

	this->w = 100;
	this->h = 25;
	map.resize(w * h, blocks::air);

}

Mappa::Mappa(int w_in, int h_in) : w(w_in), h(h_in) {



}

Mappa::Mappa(int w_in, int h_in, const std::vector<blocks>& matrice) : w(w_in), h(h_in) {

	map = matrice;

}

void Mappa::fill(blocks block) {

	for (auto& it : map) it = block;

}

std::string Mappa::debugToString() {

	std::string s = "\t\tDEBUG\n";

	auto newl = [&]() {s.append("\n\t"); };

	newl();
	s.append("Chars: ");
	s.push_back(this->wall_char);
	s.push_back(this->point_char);
	s.push_back(this->big_point_char);

	newl();
	s.append("Size: " + std::to_string(w) + "x" + std::to_string(h));

	s.append("\n\n");

	return s;

}