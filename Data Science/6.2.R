# Assuming you already have a dataset or you can create it
# Let's create a sample dataset
MedicineData <- data.frame(
  MedID = 1:10,
  Med_Name = c("MedA", "MedB", "MedC", "MedD", "MedE", "MedF", "MedG", "MedH", "MedI", "MedJ"),
  Company = c("CompanyA", "CompanyB", "CompanyA", "CompanyC", "CompanyB", "CompanyC", "CompanyA", "CompanyB", "CompanyC", "CompanyA"),
  Manf_year = c(2010, 2012, 2011, 2013, 2012, 2013, 2010, 2011, 2013, 2010),
  Exp_date = as.Date(c("2022-01-01", "2023-02-01", "2022-03-01", "2024-04-01", "2023-05-01", "2022-06-01", "2024-07-01", "2023-08-01", "2022-09-01", "2024-10-01")),
  Quantity_in_stock = c(100, 150, 120, 200, 180, 220, 90, 130, 110, 170),
  Sales = c(50, 70, 40, 80, 60, 90, 30, 45, 55, 75)
)

# Q1: Create a database file "DataSet.csv" with 10 records
write.csv(MedicineData, file = "DataSet.csv", row.names = FALSE)

# Q2: Read the data file and show the first 4 records
data_first_4 <- read.csv("DataSet.csv")
head(data_first_4, 4)

# Q3: Read the data file and show the last 4 records
data_last_4 <- read.csv("DataSet.csv")
tail(data_last_4, 4)

# Q4: Find the correlation between Quantity_in_stock and Exp_date
correlation <- cor(MedicineData$Quantity_in_stock, as.numeric(MedicineData$Exp_date))
print(paste("Correlation:", correlation))

# Q5: Plot the bar graph for Sales with year of manufacturing
install.packages("ggplot2")
library(ggplot2)
ggplot(MedicineData, aes(x = factor(Manf_year), y = Sales, fill = factor(Manf_year))) +
  geom_bar(stat = "identity") +
  labs(title = "Sales with Year of Manufacturing", x = "Manufacturing Year", y = "Sales") +
  theme_minimal()

# Q6: Find the company having more than one type of medicine
multiple_meds_company <- MedicineData %>%
  group_by(Company) %>%
  filter(n_distinct(Med_Name) > 1) %>%
  distinct(Company)

# Q7: Find the type of Medicine available
medicine_types <- unique(MedicineData$Med_Name)

# Q8: Which medicines are expiring? Show by box plots
library(ggplot2)
ggplot(MedicineData, aes(x = Med_Name, y = Exp_date)) +
  geom_boxplot() +
  labs(title = "Medicine Expiry Dates", x = "Medicine", y = "Expiry Date") +
  theme_minimal() +
  theme(axis.text.x = element_text(angle = 45, hjust = 1))

# Q9: Find the average stock in the store
average_stock <- mean(MedicineData$Quantity_in_stock)
print(paste("Average Stock in the Store:", round(average_stock, 2)))

# Q10: Draw the regression line between Manufacturing year and Sales
ggplot(MedicineData, aes(x = Manf_year, y = Sales)) +
  geom_point() +
  geom_smooth(method = "lm", se = FALSE, color = "blue") +
  labs(title = "Regression Line between Manufacturing Year and Sales", x = "Manufacturing Year", y = "Sales") +
  theme_minimal()