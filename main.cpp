#include <emscripten.h>

#include <iostream>
#include <src/demo.hpp>

extern "C" {

int main() {
  printf("Library imported\n");
  //  emscripten_set_canvas_size(320, 320);
  emscripten_set_main_loop(demo::update, 2, false);
  return 0;
}

void EMSCRIPTEN_KEEPALIVE init() { demo::init(); }
void EMSCRIPTEN_KEEPALIVE update() { demo::update(); }
}
