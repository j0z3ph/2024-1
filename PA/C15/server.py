import socket

HOST = "127.0.0.1"  # dirección loopback (localhost)
PORT = 65535  # Puerto por el que se escucha 

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print(f"Cliente {addr} conectado.")
        while True:
            data = conn.recv(1024)
            if not data:
                break
            print(f'Mensaje recibido del cliente: {data!r}')
            conn.sendall(b"Hola cliente")
