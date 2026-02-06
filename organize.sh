#!/bin/bash

# Rename folders: 800 -> 0800, 900 -> 0900
for dir in [0-9]*; do
    if [[ -d "$dir" && ${#dir} -eq 3 ]]; then
        newdir=$(printf "%04d" "$dir")
        if [[ "$dir" != "$newdir" ]]; then
            mv "$dir" "$newdir"
        fi
    fi
done

# Rename files inside folders: 1.cpp -> 01.cpp
for dir in [0-9]*; do
    if [[ -d "$dir" ]]; then
        for file in "$dir"/*.cpp; do
            [[ -e "$file" ]] || continue
            base=$(basename "$file" .cpp)
            if [[ ${#base} -eq 1 ]]; then
                newfile=$(printf "%02d.cpp" "$base")
                mv "$file" "$dir/$newfile"
            fi
        done
    fi
done
