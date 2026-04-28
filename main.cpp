#include <iostream>
#include <string>
#include "raylib.h"

using namespace std;
#define MAX_FRAME_SPEED     15
#define MIN_FRAME_SPEED      1

// making a screen using raylib
int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 450; 
    const char* title = "FormulaZero";

    SetTargetFPS(60); 
    InitWindow(screenWidth, screenHeight, title); 
    Vector2 position = { (float)screenWidth/2, (float)screenHeight/2}; 
    Texture2D formulacar = LoadTexture("./car_sprites/formula1car.png");

    // origin of the screen (0,0) is at the top left
    // to move up we have to -= 
    // to move down we have to += 
    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {
            position.x += 2.0f;
        }
        if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {
            position.x -= 2.0f;
        }
        if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) {
            position.y -= 2.0f;
        }
        if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) {
            position.y += 2.0f; 
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTextureEx(formulacar, position, 0.0f, 0.25f, WHITE); 
        EndDrawing(); 
    }

    UnloadTexture(formulacar);
    CloseWindow(); 

    return 0;
}

// int main() {
//     cout << "Hello World\n"; 
//     string greeting = "Hello, I'm Arjun"; 
//     int myNumbers[5]; 
//     for (int i = 0; i < 5; i++) {
//         myNumbers[i] = i; 
//         cout << myNumbers[i] << endl; 
//     }
    
//     cout << greeting << endl; 
//     return 0;
// }