/**
 * @file serial.h
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Serial communication for Arduino device
 * @version 0.1
 * @date 2023-08-23
 * 
 * @copyright Copyright (c) 2023
 *  
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SERIAL_ARDUINO_H__
#define __SERIAL_ARDUINO_H__ 1

#define ARDUINO_WAIT_TIME 2000
#define MAX_DATA_LENGTH 255

#ifdef _WIN32 
#include <windows.h>
#include <stdio.h> 
#include <stdbool.h>
typedef struct Handler
{
    HANDLE handler;
    bool connected;
    COMSTAT status;
    DWORD errors;
} SerialPort;
#else
#include <stdio.h> 
#include <string.h> 
#include <unistd.h> 
#include <fcntl.h>  
#include <errno.h>  
#include <termios.h>
#include <time.h>
#include <sys/types.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h> 
#include <unistd.h> 
#include <sys/ioctl.h>
#include <getopt.h>
typedef struct Handler
{
    int handler;
    bool connected;
} SerialPort;
#endif

/// @brief Inicializa la conexión con el puerto serie.
/// @param portName Nombre del puerto donde se conecta el arduino.
/// @return Variable tipo SerialPort con la conexión establecida.
SerialPort initSerialPort(const char *portName);
#ifdef _WIN32 
/// @brief Lee una cadena de texto por el puerto serie.
/// @param buffer Variable donde se escribirá la cadena leida. 
/// @param buf_size Tamaño máximo de la cadena a leer.
/// @param handler Puerto serie.
/// @return Total de bytes leidos. 
int readSerialPort(const char *buffer, unsigned int buf_size, SerialPort *handler);
#else
/// @brief Lee una cadena de texto por el puerto serie.
/// @param buffer Variable donde se escribirá la cadena leida. 
/// @param buf_size Tamaño máximo de la cadena a leer.
/// @param handler Puerto serie.
/// @return Total de bytes leidos. 
int readSerialPort(char *buffer, unsigned int buf_size, SerialPort *handler);
#endif
/// @brief Escribe una cadena de texto en el puerto serie.
/// @param buffer Cadena de texto a enviar.
/// @param buf_size Tamaño de la cadena.
/// @param handler Puerto serie.
/// @return \c true si  la cadena se envió. \c false en caso de error.
bool writeSerialPort(const char *buffer, unsigned int buf_size, SerialPort *handler);
/// @brief Permite saber si un puerto serie esta conectado.
/// @param handler Puerto serie.
/// @return \c true si esta conectado. \c false si no hay conexión.
bool isConnected(SerialPort *handler);
/// @brief Cierra el puerto serie.
/// @param handler Puerto serie.
void closeSerial(SerialPort *handler);
/// @brief Detiene la ejecución del código por \e val milisegundos.
/// @param val Valor en milisegundos.
void Sleep(int val);

#endif