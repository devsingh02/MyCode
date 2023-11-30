data(mtcars)
print(mtcars)
mtcars[,mtcars$cyl]
# Find cars matching "Honda" in the mtcars dataset based on car names
honda_cars <- mtcars[grepl("Honda", rownames(mtcars), ignore.case = TRUE), ]

# View the Honda cars
honda_cars
