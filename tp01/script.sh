#!/bin/bash
SOURCE_DIR="sources"
OUT_DIR="out"

if [ ! -d "$SOURCE_DIR" ]; then
    echo "Erreur : Le dossier '$SOURCE_DIR' n'existe pas."
    exit 1
fi

if [ ! -d "$OUT_DIR" ]; then
    mkdir "$OUT_DIR"
    echo "Dossier '$OUT_DIR' créé."
fi

for file in "$SOURCE_DIR"/*.c; do
    if [ ! -e "$file" ]; then
        echo "Aucun fichier source trouvé dans '$SOURCE_DIR'."
        exit 0
    fi

    filename=$(basename -- "$file" .c)

    gcc "$file" -o "$OUT_DIR/$filename".out

    if [ $? -eq 0 ]; then
        echo "Compilation réussie : $file -> $OUT_DIR/$filename"
    else
        echo "Erreur lors de la compilation de : $file"
    fi
done

echo "Compilation terminée."
