namespace canvas {
void RefreshCtx();
void SetColor(const char* color);
void DrawRectangle(int x, int y, int w, int h);
}  // namespace canvas

// Putting it here as an example

// uint32_t screen[320 * 320];

// void Copy_ToCanvas(uint32_t* ptr, int w, int h) {
//   EM_ASM_(
//       {
//         let data = Module.HEAPU8.slice($0, $0 + $1 * $2 * 4);
//         let canvas = document.getElementById("target");
//         if (canvas !== undefined) {
//           let context = canvas.getContext('2d');
//           let imageData = context.getImageData(0, 0, $1, $2);
//           imageData.data.set(data);
//           context.putImageData(imageData, 0, 0);
//         } else {
//             console.error("canvas is undefined");
//             console.log(Module);
//         }
//       },
//       ptr, w, h);
// }

// static void main_loop() {
//   uint32_t screen[320 * 320];

//   memset(screen, 0, 320 * 320 * 4);  // Clear screen
//   for (int x = 0; x < 320; x++)
//     for (int y = 0; y < 320; y++)
//       screen[320 * (x | y) + (x & y)] =
//           0xffffffff;  // set pixel(x or y, x and y) to white... (will draw a
//                        // serpinsky triangle)
//     Copy_ToCanvas(screen, 320, 320);
//}
