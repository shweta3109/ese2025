//============================================================================
// Name        : filecheck.cpp
// Author      : shweta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#!/bin/bash

FILE=$1
if [ -e "$FILE" ]
then
echo "file exit "
else
echo "file not exit"
fi

