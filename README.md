# Comunicação Serial MATLAB-Arduino (Controle de LED)

Este repositório é um exemplo prático de comunicação serial entre o MATLAB e o Arduino para controle de dispositivos físicos, nesse caso, o controle de um LED. O objetivo deste repositório é mostrar a comunicação serial, onde o fluxo de dados se dá do MATLAB para o Arduíno. Os códigos têm as seguintes funcionalidades:

## Arduino (Código Arduino)

### Propósito:
O código Arduino permite o controle de um LED conectado ao pino 4 do Arduino através de comandos enviados via comunicação serial.

### Funcionamento:
1. Ele inicia a comunicação serial a 9600 bauds.
2. O Arduino aguarda comandos enviados pela porta serial.
3. Quando um comando é recebido:
   - '0': Desliga o LED.
   - '1': Liga o LED.
   - '2': Encerra a comunicação serial.
4. O estado do LED é atualizado com base no comando recebido.

## MATLAB (Código MATLAB)

### Propósito:
O código MATLAB permite ao usuário enviar comandos para o Arduino via comunicação serial, controlando assim o LED remotamente.

### Funcionamento:
1. O MATLAB cria um objeto `serialport` para a comunicação serial com o Arduino na porta COM5 a 9600 bauds.
2. Ele entra em um loop que solicita comandos ao usuário ('1' para ligar o LED, '0' para desligar e '2' para encerrar o programa).
3. O comando inserido pelo usuário é enviado ao Arduino.
4. Se o usuário inserir '2', o loop é encerrado.
5. O objeto de comunicação serial é limpo após o uso.

## Uso:
1. Carregue o código Arduino no Arduino.
2. Execute o código MATLAB no próprio MATLAB.
3. Use o MATLAB para enviar comandos ('0', '1' ou '2') ao Arduino.
4. O LED no Arduino responderá de acordo com os comandos enviados.

Lembre-se de configurar corretamente a porta COM no código MATLAB para corresponder à porta do seu Arduino.

Esperamos que esses códigos sejam úteis para entender e iniciar a comunicação serial entre o Arduino e o MATLAB.

Para qualquer dúvida ou problema, sinta-se à vontade para entrar em contato ou contribuir para este repositório.
