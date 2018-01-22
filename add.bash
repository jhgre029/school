#!/bin/bash
if [ $# -lt 1 ]; then
	echo "Usage: add c/cpp filenames"
else
	#Define all variables
	header1="/* Name: Jacob Grendahl"
	header2=" * NetID: jhgrendahl"
	header3=" * Date: `date +%Y-%m-%d`"
	header4=" * Project: ${PWD##*/}"

	#Setup headings for all files (excluding main.c/cpp)
	for i in "${@:2}"; do
		touch ./src/$i.{h,$1}
		echo "$header1" >> ./src/$i.h
		echo "$header1" >> ./src/$i.$1
		echo "$header2" >> ./src/$i.h
		echo "$header2" >> ./src/$i.$1
		echo "$header3" >> ./src/$i.h
		echo "$header3" >> ./src/$i.$1
		echo "$header4"	>> ./src/$i.h
		echo "$header4" >> ./src/$i.$1
		echo " * File: $i.h" >> ./src/$i.h
		echo " * File: $i.$1" >> ./src/$i.$1
		echo " */" >> ./src/$i.h
		echo " */" >> ./src/$i.$1
		echo " " >> ./src/$i.h
		echo " " >> ./src/$i.$1
		echo "/* Description: */" >> ./src/$i.h
		echo "/* Description: */" >> ./src/$i.$1
		echo " " >> ./src/$i.h
		echo " " >> ./src/$i.$1
		echo "/* Libraries: */" >> ./src/$i.h
		echo "/* Libraries: */" >> ./src/$i.$1
		echo " " >> ./src/$i.h
		echo " " >> ./src/$i.$1
		echo "/* Headers: */" >> ./src/$i.h
		echo "/* Headers: */" >> ./src/$i.$1
		echo "Added $i"
	done
fi
