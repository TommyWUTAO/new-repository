  ## population model
## population is in three age groups y,a,m
import numpy as np # type: ignore
import matplotlib.pyplot as plt # type: ignore
# L gives evolution over time
L = np.array([[0, 4, 3],[1/2,0,0],[0,1/4,0]])
x0 = np.array([100,100,100])
#initiate a list of the population vectors
x = [x0]
tmax = 50
# creates a list with the population vectors over time
for i in range(1,tmax):
    x.append(np.matmul(L,x[i-1]))
# create separate lists for each age group for plotting
tvals = np.arange(0,tmax)
y = [x[i][0] for i in tvals]
a = [x[i][1] for i in tvals]
m = [x[i][2] for i in tvals]
#calculates the proportion in each age group at each time
yp = [y[i]/(y[i]+a[i]+m[i]) for i in tvals]
ap = [a[i]/(y[i]+a[i]+m[i]) for i in tvals]
mp = [m[i]/(y[i]+a[i]+m[i]) for i in tvals]
#plt.plot(tvals,y,label="young")
#plt.plot(tvals,a,label="adult")
#plt.plot(tvals,m,label="mature")
plt.plot(tvals,yp,label="young proportion")
plt.plot(tvals,ap,label="adult proportion")
plt.plot(tvals,mp,label="mature proportion")
# the following are the scaled entries of the dominant eigenvector
# caclulated below
plt.axhline(y=0.72)
plt.axhline(y=0.24)
plt.axhline(y=0.04)
plt.legend()
plt.show()
evals, P = np.linalg.eig(L)
# this extracts the first eigenvector
# this corresponds to the largest eigenvalue, and is called the
# dominant eigenvector
Vd = P[:,0]
# we scale it to give the entries as proportions
Vdp = Vd*1/(Vd[0]+Vd[1]+Vd[2])
print(Vdp)
