# Task 1
# a. Create a data matrix MARKS with marks for SUB1, SUB2, and SUB3 for 20 students
MARKS <- data.frame(SUB1 = runif(20, 0, 100),
                    SUB2 = runif(20, 0, 100),
                    SUB3 = runif(20, 0, 100))

# b. Use apply function to find the total marks of each student
Total <- apply(MARKS, 1, sum)
MARKS <- cbind(MARKS,Total)

# c. Create a function st.err() to find the standard error in SUB1, SUB2, and SUB3
st.err <- function(x) {
  sd(x) / sqrt(length(x))
}

# d. Add 0.25 bonus marks to each mark in SUB1, SUB2, and SUB3
MARKS[,1:3] <- sapply(MARKS[,1:3], function(x) x+0.25)
MARKS
# Task 2
# Create three vectors V1, V2, and V3 from SUB1, SUB2, and SUB3
V1 <- MARKS$SUB1
V2 <- MARKS$SUB2
V3 <- MARKS$SUB3

# Use lapply() to find the sum of all the marks in V1, V2, and V3
sums <- lapply(list(V1, V2, V3), sum)

# Task 3
# Create a vector TOTAL_SUM that holds the value of V1, V2, and V3 using sapply()
TOTAL_SUM <- sapply(list(V1, V2, V3), sum)

# Task 4
# Compute the square of each value of marks in V1, V2, and V3 using sapply()
squared_marks <- lapply(list(V1, V2, V3), function(x) sapply(x, function(y) y^2))

# Task 5
# Add an index field I = (1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4) to matrix MARKS
MARKS$I <- rep(1:4, each = 5)

# Use tapply() to compute mean() and sd() of SUB1 based on index I
mean_sd_SUB1 <- tapply(MARKS$SUB1, MARKS$I, function(x) c(mean(x), sd(x)))

# Task 6
# Create a function f(x, y) = x/y where x is V1 and y is V2
f <- function(x, y) x / y

# Use mapply() to compute this function
result <- mapply(f, V1, V2)
