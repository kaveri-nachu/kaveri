FILE1='somefile'
FILE2='someotherfile'
# File 1, column 1
f1c1=($(cut -f1 -s $FILE1))
# File 1, column 2
#f1c2=($(cut -f2 -s $FILE1))
  # File 2, column 1
f2c1=($(cut -f1 -s $FILE2))
# File 2, column 2
#f2c2=($(cut -f2 -s $FILE2))
# Looping through all items in file 1 column 1
for x in "${f1c1[@]}"
do
  # For each item in f1c1, check all items in f2c1 for a match
for y in "${f2c1[@]}"
  do
  if [[ $x == $y ]]
  then
  # The items matched!
  echo $x
  # Breaking out of the loop (no need to check for more than one
  # match, right?)
  break
  fi
  done
  done
