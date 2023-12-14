/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include"miniwin.h"

int main()
{
    int t;
    float x = 150, y = 150;
    vredimensiona(800,600);
    vtitulo("Mi Primer Juego");

    t = tecla();
    while(t != ESCAPE) {
        borra();
        color(BLANCO);
        texto(20,20,"Presione ESC para salir");
        
        color_rgb(200, 10, 100);
        linea(100,100, 400,100);
        color(VERDE);
        rectangulo(x,y, x+200,y+200);

        rectangulo_lleno(x+50,y+50,x+150,y+150);

        color(MAGENTA);
        circulo(x+100,y+100,30);

        circulo_lleno(x+100,y+100,20);

        color(NEGRO);
        punto(x+100,y+100);


        // mouse
        if(raton_dentro()) {
            raton(&x, &y);
            if(raton_boton_izq()) {
                //mensaje("Click");
                if(pregunta("Estas bien?")) {
                    mensaje("Perfecto");
                } else{
                    mensaje("No estes triste");
                }
            }
            if(raton_boton_der()) {
                mensajeT("Click secundario", "Raton en accion");
            }
        }

        refresca();
        t = tecla();

        if(t == IZQUIERDA) {
            x-=10;
        }
        if(t == DERECHA) {
            x+=10;
        }
        if(t == ARRIBA) {
            y-=10;
        }
        if(t == ABAJO) {
            y+=10;
        }
        espera(1);
    }
    vcierra();
    return 0;
}
