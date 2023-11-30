#EXP 2 
#Q1
#a
chest<-c(rep("gold",20),rep("silver",30),rep("bronze",50))
sample(chest,size=10)

#b
surgery<-c("success","fail")
pb<-c(0.9,0.1)
sample(surgery,10,replace=TRUE,prob=pb)

#Q2
n=7
prob=1
for(i in 1:n-1){
  prob=prob*(1-(i/365))
}
pr = 1-prob
cat("Desired prob is :",pr)

#Q3
p_A = 0.4
p_B = 0.2
p_AB = 0.85

Bayes<-function(p_A, p_B, p_AB){
  p_BA = p_B*p_AB/p_A
  return(p_BA)
}
p_BA = Bayes(p_A, p_B, p_AB)
cat("Required prob is ",p_BA)

#Q4
data<-iris #load iris in built dataset
head(data) #a
str(data)  #b structure of data
range(data$Sepal.Length) #c $ is used for finding a particular column
mean(data$Sepal.Length)  #d
median(data$Sepal.Length) #e
quantile(data$Sepal.Length,0.25) #f 1st quartile
quantile(data$Sepal.Length,0.75) #f 3rd quartile
IQR(data$Sepal.Length)  #f interquartile range
sd(data$Sepal.Length)  #g standard deviation
var(data$Sepal.Length) #g variance
summary(data) #i

#Q5
mode<-function(v){
  uniq_v<-unique(v)
  count<-tabulate(v)
  index<-which.max(count)
  return (uniq_v[index])
}
v=c(1,2,3,4,2,2,4,5,5)
res=mode(v)
res