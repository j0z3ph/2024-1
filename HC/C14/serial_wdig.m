clc;
clear;
disp("Conectando")
arduino=serialport('/dev/cu.usbmodem14201',9600);
disp("Conectado")
cmd = " ";
while cmd ~= "q"
    cmd = input("Comando [ON/OFF/q]: ","s");
    writeline(arduino, cmd);
    data = readline(arduino);
    disp(data);
end
clear arduino;