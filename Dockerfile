# Use a imagem base do Ubuntu
FROM ubuntu:20.04

# Definir o maintainer (opcional)
LABEL maintainer="tiagomsrs2012@gmail.com"

ENV COMPILATION_MODE=unittest

# Desativar prompts interativos durante a instalação de pacotes
ENV DEBIAN_FRONTEND=noninteractive

# Atualizar os repositórios de pacotes e instalar pacotes básicos
RUN apt-get update && apt-get install -y \
    build-essential \      
    g++ \                  
    cmake \                
    make \                 
    libboost-all-dev \     
    libssl-dev \           
    libcurl4-openssl-dev \ 
    git \                  
    vim \                  
    && apt-get clean \     
    && rm -rf /var/lib/apt/lists/*

# Definir o diretório de trabalho
WORKDIR /IPR

# Copiar o código fonte da aplicação para o contêiner
COPY . .

# CMD ["/bin/bash", "-c", \
#     "if [ \"$COMPILATION_MODE\" = \"all\" ]; then /IPR/test/unittest/script_build_unittest_random_generator.sh; \
#      elif [ \"$COMPILATION_MODE\" = \"unittest\" ]; then /IPR/test/unittest/script_build_unittest_random_generator.sh; fi"]

