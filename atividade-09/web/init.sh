#!bin/sh
service apache2 restart
service mariadb restart
mariadb -u root -e "CREATE DATABASE crud"
mariadb-dump crud < /cru.sql
/bin/bash
