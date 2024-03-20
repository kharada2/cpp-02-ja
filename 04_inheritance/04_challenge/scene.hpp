#pragma once
#include <vector>

#include "drawable.hpp"

class Scene {
 public:
  Scene();
  void render();
  void addDrawable(const Drawable* obj);

 private:
  std::vector<const Drawable*> objects;
};