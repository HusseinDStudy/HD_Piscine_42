#!/bin/sh
cat /etc/passwd | grep -v "#" | cut -f1 -d ":" | sed -n "n;p" | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr "\n" "," | sed 's/,/, /g' | rev | cut -c2- | sed 's/,/./' | rev | tr -d '\n'