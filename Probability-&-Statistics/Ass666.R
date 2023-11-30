# Load the pracma package
library(pracma)

# Define the joint probability density function "f(x,y)"
f <- function(x, y) {
  2 * (2 * x + 3 * y) / 5
}
# i) Check if the function integrates to 1 over its support/definition
I1 <- integral2(f, 0,1, 0,1)    # used for double integral <f(x,y), x-limits, y-limits>
I1$Q                           #value part of the integral

# ii)
# METHOD 1 :-
gx <- function(y) {
  f(1,y)
}
integral(gx,0,1)
# METHOD 2 :-
g <- function(x) {
  integrate(f, 0,1, x=x)$value  # x=x keeps x variable in function f. Hence limits are applied to y
}
g(1) # x=1

# iii)
h <- function(y) {
  integrate(f, 0,1, y=y)$value
}
h(0)

# iv)
g <- function(x,y) {
  x*y*f(x,y)
}
expval <- integral2(g, 0,1, 0,1)$Q
expval
