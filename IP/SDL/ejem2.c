/**
 * @file ejem2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de como cargar imagenes con SDL
 * @version 0.1
 * @date 2023-12-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>

#define SCREEN_HEIGHT 600
#define SCREEN_WIDTH 800
#define FPS 60

int main(int argc, char *argv[])
{
    bool running = true;
    SDL_Init(SDL_INIT_VIDEO); // Initialize SDL
    
    SDL_Event event;

    // Creates new SDL window
    SDL_Window *gWindow = SDL_CreateWindow("Mi Juego", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                           SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);


    // Creates the render context of the window
    SDL_Renderer *gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF); // Sets white background color
    

    // Creates a new texture pointer 
    SDL_Texture *gTexture = NULL;

    // Loads PNG file as a surface object
    SDL_Surface *img = IMG_Load("Hongo.png"); 

    // Creates a texture from file
    gTexture = SDL_CreateTextureFromSurface(gRenderer, img); 
    
    // Release surface object
    SDL_FreeSurface(img);

    // Creates a rectangle for texture position and dimension
    SDL_Rect textureRect;

    // Setting texture position and dimension
    textureRect.x = 300;
    textureRect.y = SCREEN_HEIGHT - 200;
    textureRect.w = 200;
    textureRect.h = 200;


    // Main loop
    while (running)
    {
        // If an event occurs
        while (SDL_PollEvent(&event))
        {
            // If user requests to close main window
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
        }
        
        // Clear screen
        SDL_RenderClear(gRenderer);

        // Render texture to screen
        SDL_RenderCopy(gRenderer, gTexture, NULL, &textureRect);
        
        // Update screen
        SDL_RenderPresent(gRenderer);

        // Waits for next fps
        SDL_Delay(1000 / FPS);
    }

    // Destroy textures
    SDL_DestroyTexture(gTexture);
    gTexture = NULL;

    // Destroy render and window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;
    gRenderer = NULL;

    // Quit SDL subsystems
    IMG_Quit();
    SDL_Quit();

    return 0;
}
