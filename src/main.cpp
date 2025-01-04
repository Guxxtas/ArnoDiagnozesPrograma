#include <iostream>  
#include <raylib.h>
#include <string>

int main(){
    Color green = {20, 160, 133, 255};
    InitWindow(800, 800, "My first Raylib game");
    SetTargetFPS(60);


    Texture2D arnas = LoadTexture("sprites/arnas.jpg");
    Vector2 arnasPos{240.f, 200.f};

    //Game loop
    while(WindowShouldClose() == false)
    {
        // Event Handling


        
        // Updating Positions
        
        // Drawing

        BeginDrawing();
        ClearBackground(green);
        
        DrawTextureEx(arnas, arnasPos, 0.f, 1, WHITE);
        DrawText("Sitas autistas gejus", 200, 100, 40, WHITE);
        EndDrawing();
    }
    


    CloseWindow();
    return 0;
}