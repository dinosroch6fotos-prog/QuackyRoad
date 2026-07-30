#include <iostream>
#include "raylib.h"

int main() {

         InitWindow(800, 450, "QuackyRoad");
         SetTargetFPS(60);
    
         //Loop Principal que mantiene al juego activo hasta que se cierre la ventana
         while(!WindowShouldClose()){
            BeginDrawing();
            ClearBackground(RAYWHITE);
            EndDrawing();
         }
         
         CloseWindow(); // Cierra la ventana y libera recursos

        
    return 0;
}