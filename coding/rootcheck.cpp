//============================================================================
// Name        : rootcheck.cpp
// Author      : shweta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#!/bin/bash

UNROOT=1000
if [ "$UID" -ne "$UNROOT" ]
then
echo "user is root "
else
echo "user is not root"
fi
