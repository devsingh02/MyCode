#-------------------------------MINE-----------------------------------------------

# tapply(<vector>, <factor>, <function>)

# CATEGORIZING USING TAPPLY()
grades <- c("A","B","C","C","B","A")
marks <- c(99, 88, 77, 79, 82, 91) # grades and marks related by indexes

mean.scores <- tapply(marks, grades, mean)

print(mean.scores)
