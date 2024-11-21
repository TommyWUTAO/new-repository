# -*- coding: utf-8 -*-

import numpy as np # type: ignore
import matplotlib.pyplot as plt # type: ignore



def f(x):
    return 1+1/x

def g(x):
    return 1/(x-1)


x = np.arange(0.1,9,0.1)
x1 = np.arange(1.1,10,0.1)
z = np.arange(0,10)

plt.plot(x,f(x),label='f(x)')
plt.plot(x1,g(x1),label='g(x)')
plt.plot(z,z)
plt.legend()
plt.axis('scaled')
plt.show()