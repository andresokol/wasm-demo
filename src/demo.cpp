#include "demo.hpp"

#include <iostream>
#include <vector>

#include <emscripten.h>

#include <src/canvas.hpp>

namespace demo {

namespace {
int FRAME_CNT = 0;

// class Dot {
//  public:
//   double x;
//   double y;
// };

// // static constexpr uint32_t WIDTH = 320;
// // static constexpr uint32_t HEIGHT = 320;

}  // namespace

void init() {}

void update() {
//   std::cout << "Frame " << FRAME_CNT << "\n";
//   FRAME_CNT++;

  canvas::RefreshCtx();
  canvas::SetColor("#ff0000");
  canvas::DrawRectangle(10, 10, 10, 10);
}

}  // namespace demo