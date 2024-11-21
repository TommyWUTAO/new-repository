#!/usr/bin/env python3
# -*- coding: utf-8 -*-

def f(x): 
    return 1 + 1/x

def g(x):
    return 1 - 1/x

def h(x) :
    return f(x) + g(x) 

print(h(-5))
print(h(3))
