# Set parameters
n <- 100
df <- n - 1

# Generate random sample from t-distribution
sample <- rt(n, df)

# Plot histogram
hist(sample)

x <- seq(-6, 6, length = 100)
df <- c(1, 4, 10, 30)
colour <- c("black", "yellow", "green", "red")
plot(x, dt(x, df[4]), type = "l", xlab = "t-value", ylab = "Density", col = colour[4])
for (i in 1:3) {
  lines(x, dt(x, df[i]), type = "l", col = colour[i])
}

