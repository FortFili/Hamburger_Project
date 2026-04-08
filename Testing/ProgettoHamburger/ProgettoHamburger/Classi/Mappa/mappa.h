#pragma once

#include <vector>
#include <string>
#include "color.h"

enum class blocks {
	air, wall, point, bigpoint
};

class Mappa {

public:
	Mappa();
	Mappa(int w_in, int h_in);
	Mappa(int w_in, int h_in, const std::vector<blocks>& matrice);

	void fill(blocks block);

	void setBlock(int x, int y, blocks block) { this->map[this->w * y + x] = block; }
	blocks getBlock(int x, int y) const { return this->map[this->w * y + x]; }

	bool isWalkable(int x, int y) const { return(this->map[this->w * y + x] != blocks::wall); }
	bool isInside(int x, int y) const { return (x >= 0 && x <= this->w && y >= 0 && y <= this->h); }

	void setWallChar(char c) { this->wall_char = c; }
	void setPointChar(char c) { this->point_char = c; }
	void setBigPointChar(char c) { this->big_point_char = c; }

	char getWallChar() const { return this->wall_char; }
	char getPointChar() const { return this->point_char; }
	char getBigPointChar() const { return this->big_point_char; }

	void setWallColor(Colore c) { this->wall_col = c; }
	void setPointColor(Colore c) { this->point_col = c; }
	void setBigPointColor(Colore c) { this->big_point_col = c; }

	Colore getWallColor() const { return this->wall_col; }
	Colore getPointColor() const { return this->point_col; }
	Colore getBigPointcolor() const { return this->big_point_col; }

	std::vector<blocks> getVector() const { return map; }

	std::string debugToString();

private:
	std::vector<blocks> map;
	int w, h;

	char wall_char = '#';
	Colore wall_col = { 20, 40, 240 };

	char point_char = '.';
	Colore point_col = { 220,220,220 };

	char big_point_char = 'o';
	Colore big_point_col{ 255,255,255 };


};