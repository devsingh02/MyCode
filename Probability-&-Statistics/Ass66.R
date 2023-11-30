library(pracma)
# Define the joint probability density function f(x, y)
f2 <- function(x, y) {
  return (2 * (2 * x + 3 * y) / 5)
}
# (i) Check if it is a joint density function using integral2()
integral2(f2, xmin = 0, xmax = 1, ymin = 0, ymax = 1)


# (iii) Find marginal distribution h(y) at y = 0
fx <- function(x) {
  f2(x, 0)
}
hy1 <- integrate(fx, 0, 1)
hy1


f4 <- function(x,y) {
  return(x*y*f2(x, y))
}
E <- integral2(f4,xmin = 0, xmax = 1, ymin = 0, ymax = 1)
E


