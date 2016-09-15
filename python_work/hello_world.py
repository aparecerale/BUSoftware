

print ("Hello Python World!")

# 3 Part A: Integer Limit Calculations
# Using python, calculate and print a table 
# for the capability of integers using 1, 2, 4, and 8 bytes of storage

# Use the following format string to print both the header and the data. 
# This string can be used to createa format: the braces {} indicate 
# fields, < means left justify, and the number indicates the width 
# of the field to use for this data.

# A single byte hold 8 bits
onebytenum = 0
length = 0

#print (bin(onebytenum)[:10])

#length = (onebytenum.bit_length())

# Why does it object when I use spaces versus tabs and  gives me an error
# The operation is calculated and still add 1 to onebytenum

#Make one big loop to get the max and mins and output them to a table. 


#1 byte 8
#2 bytes 16
#3 bytes 
# print ("1,2,4,8")
print (2**3)
print (8*1)
print (2**4)
print (8*2)
print (2**5)
print (8*4)
print (2**6)
print (8*8)
#Part C: sizeof(longsigneInt)

length = 0
bytenum = 1
LargUnInt1 = 0
Table = "{:<6} {:<22} {:<22} {:<22}"

while length < 8:
  length = (bytenum.bit_length())
  bytenum = bytenum * 2

LargUnInt1 = (bytenum-1)
MinSigInt = (bytenum//-2)
MaxSigInt = ((bytenum//2)-1)
print(Table.format('Bytes','Largest Unsigned Int','Minimum Signed Int','Maximum Signed Int'))
print(Table.format('1',LargUnInt1,MinSigInt,MaxSigInt))


while length < 16:
  length = (bytenum.bit_length())
  bytenum = bytenum * 2

LargUnInt2 = (bytenum-1)
MinSigInt2 = (bytenum//-2)
MaxSigInt2 = ((bytenum//2)-1)
print(Table.format('2',LargUnInt2,MinSigInt2,MaxSigInt2))

while length < 32:
  length = (bytenum.bit_length())
  bytenum = bytenum * 2

LargUnInt2 = (bytenum-1)
MinSigInt2 = (bytenum//-2)
MaxSigInt2 = ((bytenum//2)-1)
print(Table.format('4',LargUnInt2,MinSigInt2,MaxSigInt2))

while length < 64:
  length = (bytenum.bit_length())
  bytenum = bytenum * 2

LargUnInt2 = (bytenum-1)
MinSigInt2 = (bytenum//-2)
MaxSigInt2 = ((bytenum//2)-1)
print(Table.format('8',LargUnInt2,MinSigInt2,MaxSigInt2))


