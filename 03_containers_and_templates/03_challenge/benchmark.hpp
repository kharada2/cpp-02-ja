#include <chrono>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
void benchmark() {
  const int iterations = 1000000;

  // push時間
  auto start_push = std::chrono::steady_clock::now();
  T stack_push;
  for (auto i = 0; i < iterations; ++i) {
    stack_push.push_back(i);
  }
  auto end_push = std::chrono::steady_clock::now();

  std::cout << "Push Time: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_push - start_push).count()
            << " ms" << std::endl;

  // pop時間
  auto start_pop = std::chrono::steady_clock::now();
  T stack_pop = stack_push;
  for (auto i = 0; i < iterations; ++i) {
    stack_pop.pop_back();
  }
  auto end_pop = std::chrono::steady_clock::now();

  std::cout << "Pop Time: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_pop - start_pop).count()
            << " ms" << std::endl;
}