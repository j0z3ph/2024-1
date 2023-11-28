/**
 * @file lectura_digital.c
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
		readSerialPort(response, MAX_DATA_LENGTH, &arduino);
		//printf("%s\n", response);
		Sleep(1);
		if (response[0] == '1') {
			strcpy(command, "on\n");
			writeSerialPort(command, strlen(command), &arduino);
		}
		else if (response[0] == '0') {
			strcpy(command, "off\n");
			writeSerialPort(command, strlen(command), &arduino);
		}
	}
	closeSerial(&arduino);
	return 0;
}
