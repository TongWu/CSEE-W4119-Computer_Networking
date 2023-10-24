#!/usr/bin/env python3.10
from socket import *

if __name__ == '__main__':
    serverName = 'localhost'
    serverPort = 8080
    clientSocket = socket(AF_INET, SOCK_STREAM)
    clientSocket.connect((serverName,serverPort))
    message = input('Input sentence: ')
    clientSocket.send(message.encode())
    modifiedSentence = clientSocket.recv(2048)
    print('From Server: ' +  modifiedSentence.decode())
    clientSocket.close()
