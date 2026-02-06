
for dir in [0-9]*; do
    if [[ -d "$dir" && ${#dir} -eq 3 ]]; then
        newdir=$(printf "%04d" "$dir")
        if [[ "$dir" != "$newdir" ]]; then
            mv "$dir" "$newdir"
        fi
    fi
done

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
