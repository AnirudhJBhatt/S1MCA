class Rectangle:
	def __init__(self, l, b):
		self.l=l
		self.b=b
		
	def area(self):
		return self.l*self.b

	def __lt__(self, s):
		return self.area()<s.area()

print("Enter parameters of rectangle 1 : ")
l1=int(input("Enter length : "))
b1=int(input("Enter breadth : "))
s1= Rectangle(l1,b1)
print("Area of rectangle 1",s1.area())

print("Enter parameters of rectangle 2 : ")
l2=int(input("Enter length : "))
b2=int(input("Enter breadth : "))	
s2= Rectangle(l2,b2)
print("Area of rectangle 2",s2.area())

if(s1<s2):
	print("Area of rectangle 2 is greater")
else:
	print("Area of rectangle 1 is greater")
