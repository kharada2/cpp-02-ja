#pragma once

class Drawable {
 public:
  Drawable(){};
  virtual void draw() const = 0;

 protected:
};