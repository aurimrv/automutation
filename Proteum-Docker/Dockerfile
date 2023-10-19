# Use a imagem base do Ubuntu
FROM ubuntu:latest

# Atualize o sistema e instale as dependências necessárias
RUN apt-get update \
    && apt-get install -y wget unzip build-essential g++-multilib openjdk-11-jdk python3 cmake ninja-build clang-15 \
    && rm -rf /var/lib/apt/lists/*


# Diretório de trabalho
WORKDIR /app

# Download do arquivo Proteum e configuração das permissões
RUN wget https://zenodo.org/record/8428467/files/neoproteum.zip?download=1 -O neoproteum.zip \
    && unzip neoproteum.zip -d Proteum \
    && chmod -R 777 Proteum \
    && rm neoproteum.zip

# Download do programa exemplo para explorar as funcionalidades da neoproteum
RUN wget "https://zenodo.org/record/8428467/files/item.zip?download=1" -O item.zip \
    && mkdir -p examples/item \ 
    && unzip item.zip -d examples/item \
    && rm item.zip

# Criar volume para geracao de relatórios neoproteum-report

# Criar link simbólico para acessar o clang-15
RUN ln -s /usr/bin/clang-15 /usr/bin/clang

# Adicione o caminho do clang-15 ao PATH
ENV PATH="/usr/bin/clang-15:${PATH}"

# Configuração das variáveis de ambiente
ENV PROTEUMIMHOME=/app/Proteum/neoproteum-cli-shadow-0.0.1/bin
ENV PATH=$PROTEUMIMHOME:$PATH

# Comando de entrada padrão (opcional)
CMD ["bash"]
