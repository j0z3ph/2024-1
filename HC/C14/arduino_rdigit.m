clc;
clear;
ard = arduino("/dev/cu.usbmodem14201","Uno");
cmd = " ";
while cmd ~= "q"
    button = readDigitalPin(ard, "D8");
    if button == 1
        writeDigitalPin(ard, "D10", 1);
    else
        writeDigitalPin(ard, "D10", 0);
    end
end
clear;