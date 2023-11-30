# Q1
df <- data.frame(
  PatientID = c(1,2,3,4),
  AdmDate = c("10/15/2009", "11/01/2009", "10/21/2009", "10/28/2009"),
  Age = c(25, 34, 28, 52),
  Diabetes = c("Type1", "Type2", "Type1", "Type1"),
  Status = c("Poor", "Improved", "Excellent", "Poor")
)

print(df)
print(df, row.names = FALSE) #doesn't print unnecessary rownames (1 2 3 4 ...)

# Q2
# a) extract patientid and age
subset1 <- df[ ,1:2]
print(subset1, row.names = FALSE)

# b) Type1
#type1 <- df[df$Diabetes == "Type1", c("PatientID")]  NOOBIE WAY
type1 <- df[grepl("Type1", df$Diabetes, ignore.case = TRUE), c("PatientID")] #prints a list
print(type1)

# c) count poor status patients
count <- 0
for (i in 1:nrow(df)) {
  if (df$Status[i] == "Poor") {   # NOOBIE
    count <- count + 1
  }
}
print(count)

n_poor_patients <- sum(df$Status == "Poor")   #PRO
n_poor_patients

# d) summary of df
summary(df)

# e) average age of diabetic patients
avg.age.diabtetic <- mean(df[df$Diabetes == "Type2", c("Age")])
print(avg.age.diabtetic)

# input 1 patient 
new.patients <- data.frame(
  PatientID = as.integer(readline("Enter ID : ")),
  AdmDate = readline("Enter date : "),
  Age = as.integer(readline("Enter age : ")),
  Diabetes = readline("Enter type : "),
  Status = readline("Enter status : ")
)
df <- rbind(df, new.patients)
print(df)

# Q3
s = c("First","Second","Third")

MyList <- list(
  Title = "My First List",
  Criteria = list(
    Age = c(12,14,16,20),
    Matrix = matrix(1:10, nrow = 5), # random
    Score = s
  )
)
print(MyList)
