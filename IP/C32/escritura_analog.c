/**
 * @file escritura_analog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-27
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
	while (!isConnected(&arduino)) {
		Sleep(100);
		printf(".");
		arduino = initSerialPort(portName);
	}
	if (isConnected(&arduino))
		printf("\nConectado al puerto %s\n", portName);

	while (isConnected(&arduino)) {
		strcpy(command, "ack\n");
		writeSerialPort(command, strlen(command), &arduino);
		Sleep(1);
		readSerialPort(response, MAX_DATA_LENGTH, &arduino);
		Sleep(10);
		// puts(response);
		int val = atoi(response);
		val = (val * 255) / 1023;
		sprintf(command, "%d\n", val);
		writeSerialPort(command, strlen(command), &arduino);
		Sleep(10);
	}
	closeSerial(&arduino);
	return 0;
}
