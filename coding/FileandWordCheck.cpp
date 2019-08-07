//============================================================================
// Name        : FileandWordCheck.cpp
// Author      : shweta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

FILE=$1
WORD=$2
NOWORD=0

if [ -e "$FILE" ]
then
echo "File exists"
else
echo "File does not exist"
fi
#grep command used with wordcount
WORD_COUNT=$(grep -i -o $WORD $FILE | wc -l)

if [ "$WORD_COUNT" -ne "$NOWORD" ]
then
echo "WORD FOUND "
echo "The word "$WORD" appeard ="
echo "$WORD_COUNT"
else
echo "NO WORD FOUND"
fi
