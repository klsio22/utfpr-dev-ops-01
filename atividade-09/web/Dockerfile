FROM ubuntu

RUN apt-get update && apt-get install -y tzdata

ENV TZ=America/Sao_Paulo

RUN apt-get install -y apache2 \
            mariadb-server \
            php-mysql \
            libapache2-mod-php

RUN rm /var/www/html/index.html

COPY ./ /var/www/html/
COPY ./dados.sql /
COPY ./init.sh /

VOLUME /var/lib/mysql

ENTRYPOINT sh /init.sh
