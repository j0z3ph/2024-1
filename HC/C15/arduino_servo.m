clc;
clear;
ard = arduino("/dev/cu.usbmodem14201","Uno", "Libraries", "Servo");
serv = servo(ard, "D9");
angle = " ";
while angle ~= "q"
    angle = input("Angulo [0-180/q]: ", "s");
    if isstrprop(angle,'digit')
        val = str2double(angle);
        if val < 0 
            val = 0;
        elseif val > 180
            val = 180;
        end
        writePosition(serv, val/180);
        pos = readPosition(serv);
        fprintf("Posición del servo: %.2f\n", pos * 180);
    end
end
clear;