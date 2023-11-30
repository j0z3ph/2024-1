clc;
clear;
ard = arduino("/dev/cu.usbmodem14201", "Uno");
cmd = " ";
while cmd ~= "q"
    cmd = input("Comando [ON/OFF/q]: ","s");
    if cmd == "on" || cmd == "ON"
        writeDigitalPin(ard, "D10", 1);
    elseif cmd == "off" || cmd == "OFF"
        writeDigitalPin(ard, "D10", 0);
    else
        disp("Comando no reconocido.");
    end
end
clear;