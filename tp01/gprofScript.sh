#!/bin/bash

SRC_DIR="sources"
OUT_DIR="out"
GPROF_DIR="gprof"

mkdir -p $OUT_DIR
mkdir -p $GPROF_DIR

CC="gcc"
CFLAGS="-pg"

SRC_FILES=$(find $SRC_DIR -name '*.c')

for SRC_FILE in $SRC_FILES; do
    EXE_FILE="$OUT_DIR/$(basename ${SRC_FILE%.c})"
    
    $CC $CFLAGS -o $EXE_FILE $SRC_FILE
    ./$EXE_FILE
    
    GPROF_FILE="$GPROF_DIR/$(basename ${SRC_FILE%.c})gprof.txt"
    gprof $EXE_FILE gmon.out > $GPROF_FILE
    
    rm -f gmon.out
done

echo "fichier rapport de gprof ecris dans $GPROF_DIR."