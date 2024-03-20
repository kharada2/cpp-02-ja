#include "scene.hpp"

Scene::Scene(){};

void Scene::addDrawable(const Drawable* obj) { objects.push_back(obj); }

void Scene::render() {
  for (const Drawable* obj : objects) {
    obj->draw();
  }
}