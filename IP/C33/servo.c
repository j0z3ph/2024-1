/**
 * @file servo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "serial.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	char *portName = "/dev/cu.usbmodem14201";
	char command[MAX_DATA_LENGTH];
	char response[MAX_DATA_LENGTH];
	command[0] = '\n';
	SerialPort arduino = initSerialPort(portName);
	printf("Conectando");
	while (!isConnected(&arduino)) {
		Sleep(100);
		printf(".");
		arduino = initSerialPort(portName);
	}
	if (isConnected(&arduino))
		printf("\nConectado al puerto %s\n", portName);

	int cont = 0;
	while (isConnected(&arduino) && command[0] != 'q') {
		/*sprintf(command, "%i\n", cont);
		writeSerialPort(command, strlen(command), &arduino);
		Sleep(100);
		cont++;*/

		printf("Angulo [0-180/q]: ");
		fgets(command, MAX_DATA_LENGTH, stdin);
		if(command[0] == 'q' || command[0] == 'Q') break;
		writeSerialPort(command, strlen(command), &arduino);
		Sleep(1);
	}
	closeSerial(&arduino);
	return 0;
}
