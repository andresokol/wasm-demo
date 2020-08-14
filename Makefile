TOOLCHAIN_PATH = /home/andresokol/code/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake

all:
	cd build && \
	cmake -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=$(TOOLCHAIN_PATH) ..



clean:
	rm -r build
	mkdir build