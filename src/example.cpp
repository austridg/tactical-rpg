#include "raylib.h"

int main()
{
    const int screenWidth = 960;
    const int screenHeight = 640;

    InitWindow(screenWidth, screenHeight, "Arena Tactics");
    SetTargetFPS(60);

    // ---- Load texture AFTER InitWindow ----
    Texture2D warrior = LoadTexture("assets/Mages/Mage_Hooded_BROWN.png");
    SetTextureFilter(warrior, TEXTURE_FILTER_POINT);

    const int frameWidth = 16;
    const int frameHeight = 16;

    const float scale = 4.0f;

    int framesPerRow = warrior.width / frameWidth;

    int currentFrame = 0;
    int animationRow = 0;   // This will change with input

    float frameTime = 0.15f;
    float timer = 0.0f;

    Rectangle src = { 0, 0, (float)frameWidth, (float)frameHeight };

    Vector2 position = {
        screenWidth / 2.0f - (frameWidth * scale) / 2.0f,
        screenHeight / 2.0f - (frameHeight * scale) / 2.0f
    };

    while (!WindowShouldClose())
    {
        // -------- INPUT --------
        if (IsKeyPressed(KEY_S)) animationRow = 0; // down
        if (IsKeyPressed(KEY_A)) animationRow = 1; // left
        if (IsKeyPressed(KEY_D)) animationRow = 2; // right
        if (IsKeyPressed(KEY_W)) animationRow = 3; // up

        // -------- ANIMATION TIMER --------
        timer += GetFrameTime();

        if (timer >= frameTime)
        {
            timer = 0.0f;
            currentFrame++;

            if (currentFrame >= framesPerRow)
                currentFrame = 0;
        }

        // Update source rectangle
        src.x = currentFrame * frameWidth;
        src.y = animationRow * frameHeight;

        // -------- DRAW --------
        BeginDrawing();
        ClearBackground(BLACK);

        // Grid background (32px grid)
        for (int y = 0; y < screenHeight; y += 32)
            DrawLine(0, y, screenWidth, y, Color{ 30, 30, 30, 255 });

        for (int x = 0; x < screenWidth; x += 32)
            DrawLine(x, 0, x, screenHeight, Color{ 30, 30, 30, 255 });

        Rectangle dst = { position.x, position.y, frameWidth * scale, frameHeight * scale };

        DrawTexturePro(warrior, src, dst, Vector2{ 0, 0 }, 0.0f, WHITE);

        DrawText("WASD = Change Direction Row", 20, 20, 20, RAYWHITE);

        EndDrawing();
    }

    UnloadTexture(warrior);
    CloseWindow();
    return 0;
}