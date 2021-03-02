/* Template untuk C++ SFML */

#include <iostream>
#include <SFML/Graphics.hpp>

sf::Vector2f viewSize(800, 600);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "SFML");

/*
 * Inisialisasi dijalankan hanya saat diawal app
 * dijalankan.
 */
void init() {

}

/*
 * Simpan draw call di sini.
 */
void draw() {
  window.clear(sf::Color(120, 120, 255, 255));

  window.display();
}

/*
 * Dijalankan setiap saat.
 */
void update() {

}

/*
 * Menghandle masukan dari perangkat keras.
 */
void input(sf::Event e) {
  while (window.pollEvent(e)) {
    if (e.key.code == sf::Keyboard::Escape) {
      window.close();
    }

    if (e.type == sf::Event::Closed) {
      window.close();
    }
  }
}

int main(int argc, char* argv[]) {
  init();
  sf::Event e;

  while (window.isOpen()) {
    update();
    input(e);
    
    draw();
  }

  return 0;
}
