# Define the joint probability mass function f(x, y)
f <- function(x, y) {
  return ((x + y) / 30)
}

# Define a function to calculate x*y*(x+y)/30 for later use
f1 <- function(x, y) {
  return (x * y * (x + y) / 30)
}

# (i) Display the joint mass function in rectangular (matrix) form
m <- matrix(c(f(0, 0:2), f(1, 0:2), f(2, 0:2), f(3, 0:2)), nrow = 4, ncol = 3, byrow = TRUE)
print(m)

# (ii) Check if it is a joint mass function or not (using Sum())
if (sum(m) == 1) {
  print("Joint pmf")
} else {
  print("Not joint pmf")
}
print(sum(m))

# (iii) Find the marginal distribution g(x) for x = 0, 1, 2, 3 (using apply())
gx = apply(m, 1, sum)
print(gx)
# (iv) Find the marginal distribution h(y) for y = 0, 1, 2 (using apply())
hy = apply(m, 2, sum)
print(hy)


# (vi) Find E(x), E(y), E(xy), Var(x), Var(y), Cov(x, y), and its correlation coefficient
ex = sum(0:3 * gx)
ey = sum(0:2 * hy)

