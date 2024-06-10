I=input
for _ in[0]*int(I()):
 I();s=I()+'2';t='2'+I();i=j=0
 while s[i]<=t[i]:j=(j,i)[s[i]<t[i]];i+=1
 print(s[:i]+t[i:],i-j)
