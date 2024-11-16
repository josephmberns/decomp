#!/bin/bash

# Set variables for source and binary directories
SOURCE_DIR="source_code"
BINARY_DIR="binary"

# Create the binary directory if it does not exist
mkdir -p "$BINARY_DIR"

# Loop through all .c files in the source directory
for source_file in "$SOURCE_DIR"/*.c; do
  # Get the base name of the file without the extension
  base_name=$(basename "$source_file" .c)
  
  # Set the output binary file name
  output_file="$BINARY_DIR/$base_name"
  
  # Compile the source file with GCC
  gcc "$source_file" -o "$output_file"
  
  # Check if the compilation was successful
  if [[ $? -eq 0 ]]; then
    echo "Compiled $source_file to $output_file"
  else
    echo "Error compiling $source_file"
    echo "Deleting $source_file due to compilation error"
    rm "$source_file"
  fi
done
