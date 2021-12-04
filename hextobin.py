my_hexdata = "0x3f800000"

scale = 16 ## equals to hexadecimal

num_of_bits = 8

print(bin(int(my_hexdata, scale))[2:].zfill(num_of_bits))