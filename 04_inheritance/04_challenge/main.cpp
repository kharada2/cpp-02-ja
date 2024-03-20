#include "circle.hpp"
#include "scene.hpp"
#include "square.hpp"

int main() {
  Circle circle;
  //   circle.draw();

  Square square;
  //   square.draw();

  Scene scene;
  scene.addDrawable(&circle);
  scene.addDrawable(&square);
  scene.addDrawable(&circle);

  scene.render();

  return 0;
}