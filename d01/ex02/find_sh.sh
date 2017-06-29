find . -name '*.sh' -type f -printf '%f\n' | sed 's/\.\///'| sed 's/\.sh//' 
