# Sound Processor

A program that receives one or more WAV audio files and a text file with a description of what needs
to be done with the sound. The program performs audio conversions and saves the result to a WAV format
output file.

### Usage:
```
./s_p -h
./s_p -c <config filename> -i <filename> -o <filename>
```

### Requirements:
Boost 1.74.0
### Building instructions:

```
mkdir  build  
cd  build
cmake  ../  
cmake  --build  .
```

