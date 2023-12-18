/**
 * @file miniwin.h
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Traduccion a C de MiniWin. Un mini-conjunto de funciones para abrir una ventana, pintar en
 *    ella y detectar la presión de algunas teclas. Básicamente para hacer
 *    juegos sencillos.
 * @version 0.1
 * @date 2023-12-09
 *
 *  MiniWin: Un mini-conjunto de funciones para abrir una ventana, pintar en
 *    ella y detectar la presión de algunas teclas. Básicamente para hacer
 *    juegos sencillos.
 *
 *  (c) Pau Fernández, licencia MIT: http://es.wikipedia.org/wiki/MIT_License
 */

#ifndef _MINIWIN_H_
#define _MINIWIN_H_

#include <stdio.h>
#include <stdbool.h>

#ifndef MINIWIN_SOURCE
#define main _main_ // Super-cutre hack! (pero funciona)
#endif

int _main_();

/**
 * @brief Limpia el contenido de la ventana.
 * El color del fondo de la ventana se manda a negro.
 *
 */
void borra();
/**
 * @brief Forza el repintado del contenido de la ventana.
 *
 */
void refresca();
/**
 * @brief Muestra un dialogo con el mensaje indicado.
 *
 * @param msj Mensaje que se mostrara en el dialogo.
 */
void mensaje(const char *msj);
/**
 * @brief Muestra un dialogo con el mensaje indicado.
 *
 * @param msj Mensaje que se mostrara en el dialogo.
 * @param titulo Titulo del dialogo.
 */
void mensajeT(const char *msj, const char *titulo);
/**
 * @brief Muestra un dialogo de pregunta.
 *
 * @param msj Mensaje que se mostrara en el dialogo.
 * @return true Si la respuesta fue afirmativa.
 * @return false En cualquier otro caso.
 */
bool pregunta(const char *msj);
/**
 * @brief Muestra un dialogo de pregunta.
 *
 * @param msj Mensaje que se mostrara en el dialogo.
 * @param titulo Titulo del dialogo.
 * @return true Si la respuesta fue afirmativa.
 * @return false En cualquier otro caso.
 */
bool preguntaT(const char *msj, const char *titulo);
/**
 * @brief Detiene la ejecucion del proceso por una cantidad
 * de tiempo.
 *
 * @param miliseg Tiempo en milisegundos que se detendra el proceso.
 */
void espera(int miliseg);

/**
 * @brief Obtiene el ancho de la ventana.
 *
 * @return int Ancho de la ventana.
 */
int vancho();
/**
 * @brief Obtiene el alto de la ventana.
 *
 * @return int Alto de la ventana.
 */
int valto();
/**
 * @brief Permite cambiar el tamanio de la ventana.
 *
 * @param ancho Nuevo ancho.
 * @param alto Nuevo alto.
 */
void vredimensiona(int ancho, int alto);
/**
 * @brief Permite cerrar la ventana.
 *
 */
void vcierra();
/**
 * @brief Permite cambiar el titulo de la ventana.
 *
 * @param titulo Nuevo titulo de la ventana.
 */
void vtitulo(const char *titulo);

/**
 * @brief Permite cambiar el color a usar para dibujar en
 * la pantalla.
 *
 * @param c Entero entre 0 y 7
 * 0 - NEGRO
 * 1 - ROJO
 * 2 - VERDE
 * 3 - AZUL
 * 4 - AMARILLO
 * 5 - MAGENTA
 * 6 - CYAN
 * 7 - BLANCO
 */
void color(int c);
/**
 * @brief Permite cambiar el color a usar para dibujar en
 * la pantalla.
 *
 * @param r Cantidad de rojo (0-255)
 * @param g Cantidad de verde (0-255)
 * @param b Cantidad de azul (0-255)
 */
void color_rgb(int r, int g, int b);

/**
 * @brief Permite dibujar un punto en la ventana.
 *
 * @param x Coordenada x.
 * @param y Coordenada y.
 */
void punto(float x, float y);
/**
 * @brief Permite dibujar una linea en la pantalla.
 *
 * @param x_ini Coordenada x inicial.
 * @param y_ini Coordenada y inicial.
 * @param x_fin Coordenada x final.
 * @param y_fin Coordenada y final.
 */
void linea(float x_ini, float y_ini, float x_fin, float y_fin);
/**
 * @brief Permite dibujar un rectangulo sin relleno en la ventana.
 *
 * @param izq Coordenada x de la esquina superior izquierda.
 * @param arr Coordenada y de la esquina superior izquierda.
 * @param der Coordenada x de la esquina inferior derecha.
 * @param aba Coordenada y de la esquina inferior derecha.
 */
void rectangulo(float izq, float arr, float der, float aba);
/**
 * @brief Permite dibujar un rectangulo con relleno en la ventana.
 *
 * @param izq Coordenada x de la esquina superior izquierda.
 * @param arr Coordenada y de la esquina superior izquierda.
 * @param der Coordenada x de la esquina inferior derecha.
 * @param aba Coordenada y de la esquina inferior derecha.
 */
void rectangulo_lleno(float izq, float arr, float der, float aba);
/**
 * @brief Permite dibujar un circulo sin relleno en la ventana.
 *
 * @param x_cen Coordenada x del centro del circulo.
 * @param y_cen Coordenada y del centro del circulo.
 * @param radio Radio del circulo.
 */
void circulo(float x_cen, float y_cen, float radio);
/**
 * @brief Permite dibujar un circulo con relleno en la ventana.
 *
 * @param x_cen Coordenada x del centro del circulo.
 * @param y_cen Coordenada y del centro del circulo.
 * @param radio Radio del circulo.
 */
void circulo_lleno(float x_cen, float y_cen, float radio);
/**
 * @brief Permite dibujar un texto en la ventana.
 *
 * @param x Coordenada x.
 * @param y Coordenada y.
 * @param texto Texto a dibujar.
 */
void texto(float x, float y, const char *texto);

/**
 * @brief Permite determinar si se presiono una tecla.
 * No detiene el proceso.
 *
 * @return int Codigo de la tecla presionada.
 * Las teclas conocidas son:
 * 0 - ESCAPE
 * 1 - IZQUIERDA
 * 2 - DERECHA
 * 3 - ARRIBA
 * 4 - ABAJO
 * 5 - F1
 * 6 - F2
 * 7 - F3
 * 8 - F4
 * 9 - F5
 * 10 - F6
 * 11 - F7
 * 12 - F8
 * 13 - F9
 * 14 - F10
 * 15 - ESPACIO
 * 16 - RETURN
 * 17 - NINGUNA
 *
 * Para cualquier otra tecla se devuelve su valor numerico.
 */
int tecla();

/**
 * @brief Permite obtener la posicion x,y del mouse
 * respecto a la ventana.
 *
 * @param x Posicion del raton en x.
 * @param y Posicion del raton en y.
 * @return true Si el mouse se encuentra dentro de la ventana.
 * @return false Si el mouse se encuentra fuera de la ventana.
 */
bool raton(float *x, float *y);
/**
 * @brief Permite saber si el mouse se encuentra dentro de la ventana.
 *
 * @return true
 * @return false
 */
bool raton_dentro();
/**
 * @brief Permite obtener la coordenada en x del raton.
 *
 * @return float Coordenada en x.
 */
float raton_x();
/**
 * @brief Permite obtener la coordenada en y del raton.
 *
 * @return float Coordenada en y.
 */
float raton_y();
/**
 * @brief Permite obtener el boton del mouse que se a presionado.
 *
 * @param izq true Si se presiono el boton izquierdo. false En cualquier otro caso.
 * @param der true Si se presiono el boton derecho. false En cualquier otro caso.
 */
void raton_botones(bool *izq, bool *der);
/**
 * @brief Permite determinar si se presiono el boton izquierdo del mouse.
 *
 * @return true Si se presiono.
 * @return false Si no se presiono.
 */
bool raton_boton_izq();
/**
 * @brief Permite determinar si se presiono el boton derecho del mouse.
 *
 * @return true Si se presiono.
 * @return false Si no se presiono.
 */
bool raton_boton_der();

enum
{
  ESCAPE,
  IZQUIERDA,
  DERECHA,
  ARRIBA,
  ABAJO,
  F1,
  F2,
  F3,
  F4,
  F5,
  F6,
  F7,
  F8,
  F9,
  F10,
  ESPACIO,
  RETURN,
  NINGUNA
};

enum
{
  NEGRO,
  ROJO,
  VERDE,
  AZUL,
  AMARILLO,
  MAGENTA,
  CYAN,
  BLANCO
};

#endif