class Rectangle:
	def __init__(self,l=0,b=0):
		self.l=l
		self.b=b
	def area(self):
		return self.l*self.b
	def perimeter(self):
		return 2*(self.l+self.b)
	def compare(self, s):
		if(self.area()>s.area()):
			print("Area of rectangle 1 is greater")
		else:
			print("Area of rectangle 2 is greater")


print("Enter parameters of rectangle 1 : ")
l1=int(input("Enter length : "))
b1=int(input("Enter breadth : "))
	
print("Enter parameters of rectangle 2 : ")
l2=int(input("Enter length : "))
b2=int(input("Enter breadth : "))	

s1= Rectangle(l1,b1)
s2= Rectangle(l2,b2)

print("Area of rectangle 1 : ",s1.area())
print("Perimeter of rectangle 1 : ",s1.perimeter())


print("Area of rectangle 2 : ",s2.area())
print("Perimeter of rectangle 2 : ",s2.perimeter())

s1.compare(s2)
