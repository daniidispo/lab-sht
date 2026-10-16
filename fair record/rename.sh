#!/bin/bash
for f in *.c; do
  if [[ $f =~ ^([0-9]+)(.*) ]]; then
    num="${BASH_REMATCH[1]}"
    rest="${BASH_REMATCH[2]}"
    new_num=$((num - 1))
    mv "$f" "${new_num}${rest}"
  fi
done
