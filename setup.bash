#!/bin/bash
if [ $# -lt 1 ]; then
	echo "Usage: setup c/cpp filenames"
else
	#Setup directories with default files
	mkdir src build
	cp -R /mnt/d/Programs/CMake/$1/. ./
	
	#Initialize variables 
	date="# Date: `date +%Y-%m-%d`"
	project="# Project: ${PWD##*/}"
	projectname="project ( ${PWD##*/}_project )"
	executable="add_executable ( ${PWD##*/} \${SRCS} )"
	header1="/* Name: Jacob Grendahl"
	header2=" * NetID: jhgrendahl"
	header3=" * Date: `date +%Y-%m-%d`"
	header4=" * Project: ${PWD##*/}"
	
	#Edit CMakeLists.txt in both sources and main folders
	sed -i "/# Date: /c $date" ./CMakeLists.txt
	sed -i "/# Date: /c $date" ./src/CMakeLists.txt
	sed -i "/# Project:/c $project" ./CMakeLists.txt
	sed -i "/# Project:/c $project" ./src/CMakeLists.txt
	sed -i "/project ( projectname_project )/c $projectname" ./CMakeLists.txt
	sed -i "/add_executable( projectname \${SRCS} )/c $executable" ./src/CMakeLists.txt
	if [ $1 = "cpp" ]; then
		lib1="#include <iostream>"
	else
		lib1="#include <stdio.h>"
	fi
	lib2="#include <stdlib.h>"
	#Setup the headings for all .cpp/.c and .h files (excluding main.cpp/.c)
	for i in "${@:2}"; do
		../add.bash $1 $i
	done
	
	#Setup headings for main.cpp/c
	echo "$header1" >> ./src/main.$1
	echo "$header2" >> ./src/main.$1
	echo "$header3" >> ./src/main.$1
	echo "$header4" >> ./src/main.$1
	echo " * File: $i.$1" >> ./src/main.$1
	echo " */" >> ./src/main.$1
	echo " " >> ./src/main.$1
	echo "/* Description: */" >> ./src/main.$1
	echo " " >> ./src/main.$1
	echo "/* Libraries: */" >> ./src/main.$1
	echo "$lib1" >> ./src/main.$1
	echo "$lib2" >> ./src/main.$1
	echo " " >> ./src/main.$1
	echo "/* Headers: */" >> ./src/main.$1
	echo " " >> ./src/main.$1
	echo "int main(int argc, char* argv[])" >> ./src/main.$1
	echo "{" >> ./src/main.$1
	echo "	return EXIT_SUCCESS;" >> ./src/main.$1
	echo "}" >> ./src/main.$1
	echo "Added main"

	echo "Setup Complete"
fi
