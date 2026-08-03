#include <iostream>
#include "raylib.h"

int main() {

    InitWindow(800, 450, "QuackyRoad");
    SetTargetFPS(60);

    Camera3D camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };  // dónde está la cámara
    camera.target   = (Vector3){ 0.0f, 0.0f, 0.0f };    // hacia dónde mira
    camera.up       = (Vector3){ 0.0f, 1.0f, 0.0f };    // qué dirección es "arriba"
    camera.fovy     = 45.0f;                             // ángulo de visión (zoom)
    camera.projection = CAMERA_PERSPECTIVE;              // perspectiva vs ortográfica

    int patoFila = 0;
    int patoColumna = 0;

    // Loop Principal que mantiene al juego activo hasta que se cierre la ventana
    while (!WindowShouldClose()) {

        if (IsKeyPressed(KEY_UP)) {
    // mover pato
            patoFila--;
        }
        if (IsKeyPressed(KEY_DOWN)) {
    // mover pato
            patoFila++;
        }
        if (IsKeyPressed(KEY_LEFT)) {
    // mover pato
            patoColumna--;
        }
        if (IsKeyPressed(KEY_RIGHT)) {
    // mover pato
            patoColumna++;
        }
        BeginDrawing();
        ClearBackground(RAYWHITE);

        BeginMode3D(camera);
            DrawPlane((Vector3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 10.0f, 10.0f }, GREEN);
            DrawCube((Vector3){ 0.0f, 0.5f, 0.0f }, 1.0f, 1.0f, 1.0f, YELLOW);
        EndMode3D();

        

        EndDrawing();
    }

    CloseWindow(); // Cierra la ventana y libera recursos

    return 0;
}