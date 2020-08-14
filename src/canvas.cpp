#include "canvas.hpp"

#include <emscripten.h>

// clang-format off
#define GET_CONTEXT                               \
  let canvas = document.getElementById("target"); \
  if (canvas !== undefined) return;               \
  let ctx = canvas.getContext('2d');
// clang-format on

namespace canvas {

// namespace {
// void GetContext() {
//   EM_ASM_({
//     let canvas = document.getElementById("target");
//     if (canvas != undefined) return;
//     let ctx = canvas.getContext('2d');
//   });
// }
// }  // namespace

void RefreshCtx() {
  EM_ASM_({
    let canvas = document.getElementById("target");
    let ctx = canvas.getContext('2d');
    window.mglobal = {};
    window.mglobal.ctx = ctx;
  }, );
}

void SetColor(const char* color) {
  EM_ASM_({ window.mglobal.ctx.fillStyle = '#ff0000'; }, color);
}

void DrawRectangle(int x, int y, int w, int h) {
  EM_ASM_({ window.mglobal.ctx.fillRect($0, $1, $2, $3); }, x, y, w, h);
}

}  // namespace canvas