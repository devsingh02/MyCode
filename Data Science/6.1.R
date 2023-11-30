# Install and load required packages
install.packages("dplyr")
library(dplyr)

# Create the dataset with 20 different years
set.seed(123) # Setting seed for reproducibility
n_years <- 20
data <- data.frame(
  Country = rep(c("CountryA", "CountryB", "CountryC"), each = n_years),
  Continent = rep(c("Continent1", "Continent2", "Continent3"), each = n_years),
  Year = rep(2000:2019, times = 3),
  LifeExp = rnorm(n_years * 3, mean = 75, sd = 5),
  Pop = sample(1000000:10000000, n_years * 3, replace = TRUE),
  gdpPerc = runif(n_years * 3, min = 500, max = 50000)
)

# Q1: How many unique countries are represented per continent?
unique_countries_per_continent <- data %>%
  group_by(Continent) %>%
  summarize(UniqueCountries = n_distinct(Country))

# Q2: Which European nation had the lowest GDP per capita in a given year?
lowest_gdp_per_capita_europe <- data %>%
  filter(Continent == "Europe") %>%
  arrange(gdpPerc) %>%
  slice(1)

# Q3: Average life expectancy across each continent in a given year
average_life_expectancy <- data %>%
  group_by(Continent, Year) %>%
  summarize(AvgLifeExpectancy = mean(LifeExp, na.rm = TRUE))

# Q4: What 5 countries have the highest total GDP over all years combined?
top_countries_by_gdp <- data %>%
  group_by(Country) %>%
  summarize(TotalGDP = sum(gdpPerc))

top_5_countries_gdp <- top_countries_by_gdp %>%
  arrange(desc(TotalGDP)) %>%
  head(5)

# Q5: Countries and years with life expectancies of at least 80 years
high_life_expectancy <- data %>%
  filter(LifeExp >= 80)

# Q6: What 10 countries have the strongest correlation between life expectancy and per capita GDP?
correlation_top_countries <- data %>%
  group_by(Country) %>%
  summarize(Correlation = cor(LifeExp, gdpPerc, use = "complete.obs")) %>%
  arrange(desc(abs(Correlation))) %>%
  head(10)

# Q7: Combinations of continent (besides Asia) and year with the highest average population
highest_avg_population <- data %>%
  filter(Continent != "Asia") %>%
  group_by(Continent, Year) %>%
  summarize(AvgPopulation = mean(Pop))

# Q8: Three countries with the most consistent population estimates (lowest standard deviation)
consistent_population_countries <- data %>%
  group_by(Country) %>%
  summarize(StdDevPopulation = sd(Pop)) %>%
  arrange(StdDevPopulation) %>%
  head(3)

# Q9: Observations where the population has decreased from the previous year and life expectancy has increased
population_decreased_life_expectancy_increased <- data %>%
  filter(Pop < lag(Pop) & LifeExp > lag(LifeExp))
