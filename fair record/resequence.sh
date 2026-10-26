#!/bin/bash

# Get all .c files into an array
files=(*.c)

# Counter starting at 1
i=1

echo "--- Pass 1: Moving to temporary names ---"
for f in "${files[@]}"; do
  mv "$f" "temp_$f"
done

echo "--- Pass 2: Assigning sequential numbers (1 to 25) ---"
for f in "${files[@]}"; do
  # Extract everything after the leading numbers
  if [[ $f =~ ^[0-9]+(.*) ]]; then
    rest="${BASH_REMATCH[1]}"
    new_name="${i}${rest}"
    mv "temp_$f" "$new_name"
    echo "Renamed: $f -> $new_name"
    ((i++))
  fi
done

echo "Done! Files have been successfully re-sequenced."
