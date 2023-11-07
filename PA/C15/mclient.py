import socket
import select
import sys

if __name__ == "__main__":
    host = socket.gethostname()  # Esta función nos da el nombre de la máquina
    port = 65535
    BUFFER_SIZE = 1024  # Usamos un número pequeño para tener una respuesta rápida
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.connect((host, port))
    connected = True
    try:
        while connected:
            # Lista de buffers de entrada (tclado y servidor)
            sockets_list = [sys.stdin, server]
            read_sockets, write_socket, error_socket = select.select(sockets_list, [], [])
            for socks in read_sockets:
                if socks == server:
                    message = socks.recv(BUFFER_SIZE)
                    if message:
                        print(message)
                    else:
                        print("Conexión cerrada")
                        connected = False
                        break
                else:
                    message = sys.stdin.readline()
                    server.send(bytes(message, 'utf-8'))
                    sys.stdout.write("<Tú>")
                    sys.stdout.write(message)
                    sys.stdout.flush() 
    except KeyboardInterrupt:
        print("Caught keyboard interrupt, exiting")
    finally:
        server.close()