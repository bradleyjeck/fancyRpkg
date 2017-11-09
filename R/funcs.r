#' Convert to int and sum 
#'
#' @param x int 
#' @param y numeric
#' @param z char
#' @useDynLib fancyRpkg Rintsum
#' @export
#' @examples
#' intsum( 3, 3.3, "abc")
intsum <- function( x, y, z){

  x <- .C("Rintsum", as.integer(x), as.numeric(y), as.character(z), as.integer(-1))

  print(x)
} 
