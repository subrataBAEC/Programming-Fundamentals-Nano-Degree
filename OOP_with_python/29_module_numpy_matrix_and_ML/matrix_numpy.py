# matrix numpy

import numpy as np
one_d=np.array([1,2,3,4,5,6])
two_d=np.array([[3,5], [5,6], [8,1]])
three_d=np.array([
    [[3,5], [5,6], [8,1]],
    [[3,5], [5,6], [8,1]],
    [[3,5], [5,6], [8,1]]
])

# reshape matrix shape
changed=one_d.reshape(2,3)
print(changed)

# flip- elements in a single row are flipped
flipped=np.flip(changed)
print(flipped)
print("\n")
# matrix sum
add=changed+flipped
print(add)

# flatten
flat=add.flatten()
flat=add.flatten().max()
flat=add.flatten().sum()
print(flat)

# know size, shape
sz=add.size # number of elements
sp=add.shape # shape
dim=add.ndim # dimention
print(sz, sp, dim)

# check data type and change data type
print(two_d.dtype) # int 32
diff_type=two_d.astype("f")
print(diff_type.dtype) # float

# sorted
sorted=np.sort(two_d)
print(sorted)