# Definisco la base del container: Ubuntu + ROS2 Jazzy
FROM ubuntu:24.04

# Installazione g++, git (nella lesson 1 non abbiamo usato ROS quindi non necessario)
RUN apt-get update && apt-get install -y \
    g++ \
    git \
    && rm -rf /var/lib/apt/lists/*

# Path relativo all'interno del container
WORKDIR /robot_cpp
COPY SimpleController.cpp .
RUN g++ SimpleController.cpp -o SimpleController

# Comando eseguito dal container
# Lancio l'eseguibile
CMD ["./SimpleController"]