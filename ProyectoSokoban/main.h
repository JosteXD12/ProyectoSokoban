#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

int main() {
	bool gameover = false;
	RenderWindow ventana(VideoMode(800, 800, 64), "mi Ventana");
	//hola
	while (!gameover) {
		ventana.display();
	}

	RenderWindow ventana(VideoMode(800, 600, 64), "mi Ventana");
	while (!gameover) {
		ventana.display();
	}
	return 0; 
}
