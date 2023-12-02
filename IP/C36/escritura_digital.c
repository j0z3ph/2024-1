/**
 * @file escritura_digital.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "serial.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char *portName = "/dev/cu.usbmodem14201";
	char command[MAX_DATA_LENGTH];
	char response[MAX_DATA_LENGTH];
	command[0] = '\n';

	SerialPort arduino = initSerialPort(portName);

	printf("Conectando");
	while (!isConnected(&arduino))
	{
		Sleep(100);
		printf(".");
		arduino = initSerialPort(portName);
	}

	if (isConnected(&arduino))
	{
		printf("\nConectado al puerto %s\n", portName);
	}
	while (isConnected(&arduino) && command[0] != 'q')
	{
		printf("Comando [ON/OFF/q]: ");
		fgets(command, MAX_DATA_LENGTH, stdin);
		writeSerialPort(command, strlen(command), &arduino);
		Sleep(100);
		readSerialPort(response, MAX_DATA_LENGTH, &arduino);
		puts(response);
	}
	closeSerial(&arduino);
	return 0;
}

