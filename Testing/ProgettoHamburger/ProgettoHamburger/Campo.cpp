#include "Campo.h"

std::string Campo::renderToString(const Mappa& mappa, int width, int height, Pacman& pacman, fantasma fantasmi[], int numFantasmi, Hamburger& hamb)
{
	std::string s = "";

	s += "========================================================\n";
	s += pacman.toString() + "\n";
	s += hamb.toString() + "\n";
	s += "========================================================\n";

	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			if (pacman.isAlive() && pacman.getX() == x && pacman.getY() == y)
			{
				s.push_back(pacman.getForma());	//Mette in coda alla stringa dei caratteri, sarebbe come fare s+=...
			}
			else
			{
				bool ghostPrinted = false;
				for (int i = 0; i < numFantasmi; ++i)
				{
					if (fantasmi[i].getX() == x && fantasmi[i].getY() == y)
					{
						if (fantasmi[i].isSpaventato())
						{
							s.push_back('e');
						}
						else
						{
							s.push_back('F');
						}
						ghostPrinted = true;
						break;
					}
				}

				if (!ghostPrinted)
				{
					if (hamb.getX() == x && hamb.getY() == y)
					{
						s.push_back('H');
					}
					else
					{
						blocks b = mappa.getBlock(x, y);
						if (b == blocks::wall)
						{
							s.push_back(mappa.getWallChar());
						}
						else if (b == blocks::point)
						{
							s.push_back(mappa.getPointChar());
						}
						else if (b == blocks::bigpoint)
						{
							s.push_back(mappa.getBigPointChar());
						}
						else
						{
							s.push_back(' ');
						}
					}
				}
			}
		}
		s.push_back('\n');
	}
	s += "========================================================\n";
	return s;
}