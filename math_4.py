#this script provides simulations of dice games discussed in the week 4 seminar

import random
import numpy as np # type: ignore
import matplotlib.pyplot as plt # type: ignore

#initialise sum
S = 0
T= 0
#initialise number of games
n = 10
x = np.arange(n)
#initialise list of y values for plot
y = []
z = []


# simulate a game where you win odd numbers outcomes and lose even ones
# to simulate a game where 2 dice is rolled uncomment the extra part in the loop
for i in x:
  d = random.randint(1,6) # + random.randint(1,6)
  S += d*(-1)**(d+1)
  y.append(S)

# simulate a game where you lose 3 when 1 is rolled, otherwise win nothing  
for i in x:
  d = random.randint(1,6)
  if d == 1:
    T+=-3
    z.append(T)
  else:
    z.append(T)
    



    
plt.plot(x,z,label="low var")
plt.plot(x,y,label="high var")
plt.plot(x,-x/2)
plt.legend()
plt.show()
  

