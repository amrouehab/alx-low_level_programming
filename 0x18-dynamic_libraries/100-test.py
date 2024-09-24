import ctypes

# Load the shared object file
operations = ctypes.CDLL('./100-operations.so')

# Test the C functions
a = 10
b = 5

print("Addition:", operations.add(a, b))
print("Subtraction:", operations.sub(a, b))
print("Multiplication:", operations.mul(a, b))
print("Division:", operations.div(a, b))
print("Modulus:", operations.mod(a, b))

