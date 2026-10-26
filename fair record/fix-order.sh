#!/bin/bash
for f in *.c; do
  if [[ $f =~ ^([0-9]+)(.*) ]]; then
    num="${BASH_REMATCH[1]}"
    rest="${BASH_REMATCH[2]}"
    # Format number to be at least 2 digits with a leading zero
    new_num=$(printf "%02d" "$num")
    if [ "$num" != "$new_num" ]; then
      mv "$f" "${new_num}${rest}"
      echo "Renamed: $f -> ${new_num}${rest}"
    fi
  fi
done
