# Usa a imagem oficial do MariaDB como a base
FROM mariadb

# Define a variável de ambiente que especifica a senha do root do MariaDB
ENV MYSQL_ROOT_PASSWORD=root

# Copia o arquivo crud.sql para o diretório de inicialização do banco de dados
COPY ./dados.sql /docker-entrypoint-initdb.d/
