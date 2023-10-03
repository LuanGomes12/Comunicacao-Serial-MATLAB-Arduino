% Initializations
clear all;
clc;

% Create a Serial Communication Object
obj_arduino = serialport("COM5", 9600); % Open the serial port

while true
    % Input data
    dados = input('Pressione 1 para ligar o LED, 0 para desligar e 2 para encerrar o programa: ', 's');

    % Write to the Arduino
    obj_arduino.write(dados, "char");

    % End the program
    if dados == '2'
        break;
    end
end

% Close the Serial Communication
clear obj_arduino;
