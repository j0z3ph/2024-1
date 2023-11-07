import socket

HOST = "127.0.0.1"  # Dirección del servidor
PORT = 65535  # Puerto del servidor

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b"Hola servidor") # Dato en binario
    data = s.recv(1024)

print(f"Mensaje recibido del servidor: {data!r}")
