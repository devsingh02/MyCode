n=31
p=0.447
pmf<-c() #DEFINE EMPTY ARRAY
x=seq(0,31)
for(i in 1:length(x)){
  pmf[i]<-dbinom(x[i],n,prob = p)
}
#plot(x,pmf)
#plot(x,pmf,type="o",pch=16)
plot(x,pmf,type="o",main="Lineplot Example",xlab="x-axis",ylab="y-axis",pch=16,cex=0.2)

# Define the joint probability density function f(x, y)
f2 <- function(x, y) {
  return (2 * (2 * x + 3 * y) / 5)
}

# (i) Check if it is a joint density function using integral2()
integral2(f2, xmin = 0, xmax = 1, ymin = 0, ymax = 1)
