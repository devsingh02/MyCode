# BASIC LOADING, INFO
data("iris") #load dataset using data()
dim(iris)    #dimensions
str(iris)    #show structure 

# Operations
mean(iris$Sepal.Length) #mean of all sepal lengths regardless of category
sl.cat.mean <- tapply(iris$Sepal.Length, iris$Species, mean)
sl.cat.sd <- tapply(iris$Sepal.Length, iris$Species, sd)
print(sl.cat.mean)
print(sl.cat.sd)

# Ternary : ifelse(<cond>, <return if TRUE>, <return if FALSE>)
iris.class <- iris
#iris.class$Calyx.Width <- ifelse(iris.class$Sepal.Length<5, "short", "long")
print(iris.class)

#method 2
iris.class$Calyx.Width <- character(length = nrow(iris))
for (i in 1:nrow(iris)) {
  if (iris.class$Sepal.Length[i] < 5) {
    iris.class$Calyx.Width[i] = "short"
  }
  else {
    iris.class$Calyx.Width[i] = "long"
  }
}
print(iris.class)