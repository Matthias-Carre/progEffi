#!/bin/bash


if [ -z "$1" ]; then
    echo "Erreur : Aucun fichier spécifié."
    exit 1
fi

FILE=$1
stdbuf -oL $FILE > pid.txt &
sleep 0.1
PID=$(cat pid.txt)
echo "PID = $PID"
ecofloc --cpu -p $PID -i 1000 -t 20



