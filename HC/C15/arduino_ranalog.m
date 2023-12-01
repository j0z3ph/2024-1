clc;
clear;
ard = arduino("/dev/cu.usbmodem14201","Uno");
while true
    value = readVoltage(ard,"A0");
    %disp(value);
    writeDigitalPin(ard, "D13", 0);
    pause(value/5);
    writeDigitalPin(ard, "D13", 1);
    pause(value/5);
end
clear;