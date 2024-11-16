#!/bin/bash

# Paths
ROSETTA_DIR="RosettaCodeData/Lang/C"
DECOMP_DIR="."
SOURCE_DIR="$DECOMP_DIR/source_code"
BINARY_DIR="$DECOMP_DIR/binary"
COMPILE_SCRIPT="$DECOMP_DIR/compile_source.sh"

# Ensure source_code and binary directories exist
mkdir -p "$SOURCE_DIR"
mkdir -p "$BINARY_DIR"

# Iterate through all symbolic links in RosettaCodeData/Lang/C
for symlink in "$ROSETTA_DIR"/*; do
  # Skip non-symlinks and metadata files
  if [[ ! -L "$symlink" || "$symlink" == *"00-LANG.txt" || "$symlink" == *"00-META.yaml" ]]; then
    continue
  fi

  # Resolve the target of the symlink
  target=$(readlink -f -- "$symlink")

  # Check if the target directory exists
  if [[ -d "$target" ]]; then
    # Find all .c files in the target directory
    c_files=$(find "$target" -type f -name "*.c")

    # Copy each .c file to the source_code directory
    for c_file in $c_files; do
      cp "$c_file" "$SOURCE_DIR"
      echo "Copied $c_file to $SOURCE_DIR"
    done
  else
    echo "Target directory $target does not exist, skipping."
  fi
done

# Run the compile_source.sh script
if [[ -x "$COMPILE_SCRIPT" ]]; then
  echo "Running $COMPILE_SCRIPT..."
  bash "$COMPILE_SCRIPT"
else
  echo "Compile script $COMPILE_SCRIPT not found or not executable."
  exit 1
fi

echo "Process completed!"
