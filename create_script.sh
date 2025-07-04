#!/bin/bash

# Verificar que se pasaron exactamente 2 argumentos
if [ "$#" -ne 2 ]; then
  echo "Uso: $0 <nombre_carpeta> <nombre_archivo>"
  exit 1
fi

# Asignar argumentos a variables
FOLDER_NAME="$1"
SCRIPT_NAME="$2"

# Crear la carpeta si no existe
mkdir -p "$FOLDER_NAME"

# Copiar contenido de template.txt al nuevo archivo dentro de la carpeta
cat template.txt >> "${FOLDER_NAME}/${SCRIPT_NAME}.cpp"

# Abrir el archivo con Visual Studio Code
code "${FOLDER_NAME}/${SCRIPT_NAME}.cpp"
