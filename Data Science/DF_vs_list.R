# DIFFERNCE B/W LIST AND DATA.FRAME

# Creating a list : HETROGENOUS DATA
my_list <- list(
  Name = c("Alice",6723),
  Age = c(25,"age"),
  Scores = c(90, 85, 88)
)

# Creating a data frame : HOMOGENOUS DATA
df <- data.frame(
  Name = c("Alice", "Bob", "Charlie"),
  Age = c(25, 30, 35),
  Score = c(90, 85, 88)
)

print(df)
print(my_list)