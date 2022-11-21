"""
intro to numpy

"""
import numpy as np
np_array=np.array([1, 5, 6, 48, 6])

# list of ten zeros- type numpy nd array
ten_zeros=np.zeros(10)
print(ten_zeros)

# ten onens
ten_ones=np.ones(10)
print(ten_ones)

# sequence
sequence=np.arange(14)
print(sequence)

# step- start, dest-1, step
stepper=np.arange(0, 20, 3)
print(stepper)

# spacing- gives 6 numbers between 1 to 21
spaced_mumbers=np.linspace(1, 21, num=6)
print(spaced_mumbers)

