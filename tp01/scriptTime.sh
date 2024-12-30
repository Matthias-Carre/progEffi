#!/bin/bash

OUT_DIR="out"

for file in "$OUT_DIR"/*.out; do
    if [[ -f "$file" ]]; then
        filename=$(basename -- "$file" .out)
        echo "Exécution de $file :"
        time ./"$file"
        echo ""
    fi
done