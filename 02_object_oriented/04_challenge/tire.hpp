#pragma once

enum class TyreType { allseason, summer, snow, sports };

class Tire {
 public:
  Tire();
  void setSize(int size);
  int getSize() const;

 private:
  int size;
  TyreType type;
};