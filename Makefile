CXX = clang++
CXXFLAGS = -I$(shell brew --prefix raylib)/include
LDFLAGS = -L$(shell brew --prefix raylib)/lib -lraylib \
	-framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo
		
build:
	$(CXX) main.cpp -o game $(CXXFLAGS) $(LDFLAGS)

run: build
	./game
	
clean: 
	rm -rf game

.PHONY: build run clean