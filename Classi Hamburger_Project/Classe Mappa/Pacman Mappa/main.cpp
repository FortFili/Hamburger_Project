
#include <iostream>
#include "mappa.h"

int main() {

	Mappa mainmap(200, 40);

	std::cout << mainmap.debugToString();

	mainmap.setPointChar('o');
	mainmap.setBigPointChar('O');
	mainmap.setWallChar('@');

	std::cout << mainmap.debugToString();

}