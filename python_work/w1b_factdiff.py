
####################################################################
# AUTHOR Alejandro Aparicio aaparici@bu.edu
#
# 4 Part B: Demonstration of Python integers
# Write a python program that does the following:
# - reads two integers X and Y using input()
# - calculates Z = X! - Y!
# Your program should print out Z, the number of decimal digits of Z, and the number of bytes 
# that are required to store this number
#
# You may use math.factorial() to check your answer but you must calculate the factorial yourself.
####################################################################

Xstr = input("Input integer X: ")
X = int(Xstr)
while X < 0:
	Xstr = input("Please input a positive integer number for X:")
	X = int(Xstr)

Ystr = input("Input integer Y: ")
Y = int(Ystr)
while Y < 0:
	Ystr = input("Please input a positive integer number for Y:")
	Y = int(Ystr)

i = 0
Xfact = 1
Yfact = 1
Xplus1 = X + 1
Yplus1 = Y + 1
#Calculate X Factorial
for i in range(1,Xplus1):
  Xfact = i * Xfact

#Calculate Y Factorial,
for i in range(1,Yplus1):
  Yfact = i * Yfact

#Substract
Z = Xfact - Yfact
print (Z)

#next line of code from: Karanja Denis
#http://stackoverflow.com/questions/22656345/how-to-count-the-number-of-digits-in-python
size = len(str(abs(Z)))
print (size)

#bytes required to store the number, 
# since a fraction of a byte is actually a whole byte
# calculate if the size is divisible by 8 bits
remain = ((Z.bit_length() % 8))
if remain == 0:
  print ((Z.bit_length() // 8))
else:
  print ((Z.bit_length() // 8)+1)


#end