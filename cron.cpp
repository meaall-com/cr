#!/bin/sh

 #

 SNOOZE=5

 COMMAND="/usr/bin/php /path/to/your/script.php"

 LOG=/var/log/httpd/script_log.log

 echo `date` "starting..." >> ${LOG} 2>&1

 while true

 do

  ${COMMAND} >> ${LOG} 2>&1

  echo `date` "sleeping..." >> ${LOG} 2>&1

  sleep ${SNOOZE}

 done
