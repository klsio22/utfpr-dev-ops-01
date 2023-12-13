from ubuntu
run apt update
run apt install tzdata -y
env TZ=America/Sao_Paulo
run apt install -y apache2 mariadb-server php-mysql libapache2-mod-php
run rm /var/www/html/index.html
copy ./www/ /var/www/html
	
