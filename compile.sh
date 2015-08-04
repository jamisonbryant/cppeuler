# Check if problem number is specified
if [ -z ${1+x} ]; then
  # Display error message and exit
  echo "Error: missing number of problem to compile"
  exit
else
  # Pad problem number with zeros
  number=$(printf "%03d" $1)
  problem=problem$number

  # Check if problem directory exists
  if [ -d $problem ]; then
    # Compile program source code
    g++ -Wall -g -o $problem/program $problem/program.cpp
  else
    # Display error message and exit
    echo "Error: specified problem directory not found"
    exit
  fi
fi
