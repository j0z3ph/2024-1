/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include "tools.h"
#include "serial.h"

int main()
{
    int x=5, y=5;
    char c='\0';
    char *portName = "COM3";
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

    while(1) {
        clear();
        gotoXY(x,y);
        //printf("%c", c);
        readSerialPort(response, MAX_DATA_LENGTH, &arduino);
        if(response[2] == '\n') {
            if(response[0] == '1') {
                x--;
            }
            if(response[1] == '1') {
                x++;
            }
        }
        Sleep(10);
        /*
        c = wait4Key();
        if(c == LEFT) {
            x--;
        }
        if(c == RIGTH) {
            x++;
        }
        if(c == UP) {
            y--;
        }
        if(c == DOWN) {
            y++;
        }
        if(c == ESC) {
            break;
        }*/
    }

    return 0;
}
