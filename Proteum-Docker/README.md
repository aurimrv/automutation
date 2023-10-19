# Proteum Docker

Este repositório contém um Dockerfile para criar um contêiner Docker com o Proteum e suas dependências instaladas.

## Pré-requisitos

Antes de começar, você precisa ter o Docker Engine instalado. Você pode baixá-lo e instalá-lo a partir do [site oficial do Docker](https://www.docker.com/products/docker-desktop).

## Como usar este repositório

1. **Construindo a imagem**

   Para construir a imagem Docker, use o seguinte comando no diretório onde está o arquivo Dockerfile:

`docker build -t proteum-container .`


2. **Executando o contêiner**

Após construir a imagem, você pode executar o contêiner usando o comando:

`docker run -it proteum-container`


Isso iniciará um shell interativo dentro do contêiner, pronto para usar o Proteum.

3. **Máquina Virtual para Proteum 2.1**

Uma máquina virtual com Proteum 2.1 já instalado está disponível para download [aqui](http://bit.ly/2SrfEoB). Após baixar, instale a máquina virtual e execute-a. As credenciais de login são:

- **Login:** student
- **Senha:** student

## Configuração das Variáveis de Ambiente

As variáveis de ambiente `PROTEUMIMHOME` e `PATH` já estão configuradas no contêiner para facilitar o uso do Proteum. Certifique-se de que `PROTEUMIMHOME` aponta para o diretório onde você deseja que o Proteum seja executado.

4. **Máquina Virtual para NeoProteum**

TO DO