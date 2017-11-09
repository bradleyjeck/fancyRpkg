# fancyRpkg
Minimal R package for calling compiled code

## Calling C code using the .C() function in R 

In `src/mylib.c` there is function that converts 
its arguments to an integer representation, adds them
up and returns the result.
```
int intsum( int x, double y, char* z)
```
To call this function from R using the function .C(), we need to provide 
a wrapper function that returns void instead of int.
Thus, `src/r_to_mylib.c` provides the function:
```
void Rintsum( int* x, double* y, char** z, int* tot )
```
For packaging purposes `src/init.c` tells R about the function `Rintsum`.

The R function intsum() in `R/funcs.r`  contains the call and prints
the return value from .C(): the list of arguments as modified by the function.

## Usage 
Clone the repo and cd to the package root.

### Terminal  
Build and install the package from the terminal.
```
# build 
R CMD build . 

# Check it if you want 
R CMD check fancyRpkg_0.0.1.tar.gz

# install 
R CMD INSTALL fancyRpkg_0.0.1.tar.gz
```

Open an R session
```
library(fancyRpkg)
intsum( 2, 3.333, "abcd")
```

### via devtools
In an R session with packages devtools and roxygen2 installed:
```
library(devtools)
document()
intsum( 2, 3.333, "abcd")
```


## Requirements 

On Ubuntu
```
sudo apt-get install -y libcurl4-openssl-dev libxml2-dev r-base-dev texlive-full
```



