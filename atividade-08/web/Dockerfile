# Use a imagem oficial do PHP com Apache
from php:apache

# Instalação da extensão mysqli
run docker-php-ext-install mysqli

# Copie os arquivos da aplicação para o diretório do servidor web
COPY ./ /var/www/html

# Exponha a porta 80
EXPOSE 80
