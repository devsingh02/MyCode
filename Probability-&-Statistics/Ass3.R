#Q1
pbinom(9,size =12, prob=1/6)-pbinom(6,size =12, prob=1/6)

#Q2
#both can be used for the answer
pnorm(84,mean=72,sd=15.2,lower.tail = FALSE)
1-pnorm(84,mean=72,sd=15.2)

#Q3
#X->No. of cars arriving during the time period of 10AM to 11AM
dpois(0,lambda = 5)
#Y->No. of cars arriving during the time period of 8AM to 6PM
ppois(50,lambda = 50)-ppois(47,lambda = 50)

#Q4
#total = 250; defective=17; non defective=233; inspection=5;
#X=no. of defectives in sample 
##HYPERGEOMETRIC
#P(X=3)
dhyper(3,m=17,n=233,k=5)

#Q5
n=31
p=0.447
#(a) Binomailly
#(b) pmf
pmf<-c() #DEFINE EMPTY ARRAY
x=seq(0,31)
for(i in 1:length(x)){
  pmf[i]<-dbinom(x[i],n,prob = p)
}
plot(x,pmf)
plot(x,pmf,type="o",pch=16)
#(c) cdf
cdf<-c() #DEFINE EMPTY ARRAY
for(i in 1:length(x)){
  cdf[i]<-pbinom(x[i],size = n,prob = p)
}
plot(x,cdf)
#(d)
mean=n*p
variance = n*p*(1-p)
std = sqrt(variance)