
####################################################################
# AUTHOR Alejandro Aparicio aaparici@bu.edu
#
# 3 Part A: Integer Limit Calculations
# Using python, calculate and print a table 
# for the capability of integers using 1, 2, 4, and 8 bytes of storage.
# Use the following format string to print both the header and the data. 
# This string can be used to createa format: the braces {} indicate 
# fields, < means left justify, and the number indicates the width 
# of the field to use for this data.
####################################################################
# A single byte hold 8 bits, 2 hold 16, 4 holds 32 and 8 holds 64

#variable declaration
length = 0
bytenum = 1
LargUnInt1 = 0
Table = "{:<6} {:<22} {:<22} {:<22}"

while length < 8:
  length = (bytenum.bit_length())
  bytenum = bytenum * 2

# Do an integer Division by using // while dividing
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


