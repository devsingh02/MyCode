#----------------------------------------------------------------------------------------------
# Q1
#----------------------------------------------------------------------------------------------
c = c(5, 10, 15, 20, 25, 30)
max.ele <- max(c)
min.ele <- min(c)
cat(paste("Max Element = ", max.ele, "\nMin Element = ", min.ele))

#----------------------------------------------------------------------------------------------
# Q2
#----------------------------------------------------------------------------------------------
factorial <- function(n) {
  if (n < 0) print("Error : Negative Number")
  
  if (n == 0 || n == 1) return(1)
  else return(n*factorial(n-1))
}
n.fact <- as.integer(readline(prompt = "Enter number : "))
print(paste("Factorial of ", n.fact, "is ", factorial(n.fact)))

#----------------------------------------------------------------------------------------------
# Q3
#----------------------------------------------------------------------------------------------
fibonacci <- function(n) {
  fib <- c() # ArrayList numeric()
  fib[1] <- 0
  fib[2] <- 1
  for (i in 3:n) {
    fib[i] <- fib[i-1] + fib[i-2]
  }
  return(fib)
}
n.fibo <- as.integer(readline(prompt = "Enter number : "))

cat(paste("Fibonacci series till",n.fibo,"is :-\n"))
cat(fibonacci(n.fibo))

#----------------------------------------------------------------------------------------------
# Q4
#----------------------------------------------------------------------------------------------
add <- function(x, y) {
  return(x + y)
}
subtract <- function(x, y) {
  return(x - y)
}
multiply <- function(x, y) {
  return(x * y)
}
divide <- function(x, y) {
  return(x / y)
}

# Get the operation and the two numbers from the user
operation = readline(prompt = "Enter the operation (add, subtract, multiply, divide): ")
number_1 = as.numeric(readline(prompt = "Enter the first number: "))
number_2 = as.numeric(readline(prompt = "Enter the second number: "))

result <- switch(
  operation,
  "add"      = number_1 + number_2,
  "subtract" = number_1 - number_2,
  "multiply" = number_1 * number_2,
  "divide"   = number_1 / number_2,
  "default"  = {
    cat("Invalid operation\n")
    return()
  }
)
# Print the result
print(paste(number_1, operation, number_2, "=", result))

#----------------------------------------------------------------------------------------------
# Q5
#----------------------------------------------------------------------------------------------

x <- seq(1,10,by=1)
y <- x^2
plot(x,y)
#Scatter Plot -> type="o"   (points also)
plot(x,y,type="o")
plot(x,y,type="o",pch=0)
plot(x,y,type="o",main="Scatterplot Example")
plot(x,y,type="o",main="Scatterplot Example",xlab="x-axis",ylab="y-axis",pch=2)

#Line Plot -> type="l"      (only line)
plot(x,y,type="l")
plot(x,y,type="l",main="Lineplot Example")
plot(x,y,type="l",main="Lineplot Example",xlab="x-axis",ylab="y-axis")

#Pie Charts (categorical data)
class <- c("A","B","C")
students <- c(50,30,20)
pie(students,labels=class,main="Pie Chart of No of Students")

#Bar Plot
barplot(students,names.arg=class,main="Bar Graph of No of Students")

