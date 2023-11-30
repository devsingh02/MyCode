#Q1
x<-c(0,1,2,3,4)
px<-c(0.41,0.37,0.16,0.05,0.01)
Expral <- sum(x*px)
EEE <- weighted.mean(x,px)
EEEE <- c(x%*%px)

#Q3
#CP=3*6=18
#SP=12*X + 2*(3-X) = 10X +6
x<-c(0,1,2,3)
y<-c()
px<-c(0.1,0.2,0.2,0.5)
for(i in 1: length(x))
{y[i]<-10*x[i] -12}
ANS<-sum(y*px)

#Q2
ft<-function(t){
  t*0.1*exp(-0.1*t)
}
Expral<-integrate(ft,lower = 0, upper = Inf)$value
print(Expral)

#Q4
fl<-function(x){
  x*0.5*exp(-abs(x))
}
M1<-integrate(fl,lower=0,upper=10)$value
print(M1)
f2<-function(x){
  x*x*0.5*exp(-abs(x))
}
M2<-integrate(f2,lower=0,upper=10)$value
print(M2)
mean=M1 #E(X)
variance= M2 - (M1^2) #E(X*X) - (E(X)*E(X))

#Q5
fy<-function(y){
  (3/4)*(1/4)^(sqrt(y)-1)
}
x=3
y=x^2
proby<-fy(y)
xx<-c(1,2,3,4,5)
yy<-c()
pry<-c()
for(i in 1:length(xx)){
  yy[i]<-(xx[i])^2
  pry[i]<-fy(yy[i])
}
expraal <- sum(yy*pry)
variance <- sum((yy^2)*pry) - (expraal^2)

# MINE
x<-c(1,2,3,4,5)
y<-x^2
fy<-function(y){
  (3/4)*(1/4)^(sqrt(y)-1)
}
Py<-fy(y)
sum(y*Py)
sum(y*y*Py)-sum(y*Py)^2