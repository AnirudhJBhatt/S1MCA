# CO3/Graphics/Rectangle.py

def area(l, b):
	return l*b
def perimeter(l, b):
	return 2*(l+b)

# CO3/Graphics/Circle.py

import math
def area(r):
	return math.pi*r**2
def perimeter(r):
	return 2*math.pi*r

# CO3/Graphics/3DGraphics/Cuboid.py

def surface_area(l, b, h):
	return 2*(l*b+b*h+h*l)
def volume(l, b, h):
	return l*b*h

# CO3/Graphics/3DGraphics/Sphere.py

import math
def surface_area(r):
	return 4*math.pi*r**2
def volume(r):
	return (4/3)*math.pi*r**3
def area(l, b):
	return l * b
def perimeter(l, b):
	return 2 * (l + b)

# CO3/CO3PGM2.py

from graphics import Rectangle, Circle
from graphics.subgraphics import Cuboid,Sphere
print("Area and Perimeter of Rectangle")
l=int(input("Enter length : "))
b=int(input("Enter breadth : "))
print("Area of the Rectangle : ",Rectangle.area(l,b),"\nPerimeter of the Rectangle : ",Rectangle.perimeter(l,b))

print("Area and Perimeter of Circle")
r=int(input("Enter the radius : "))
print("Area of the Circle : ",Circle.area(r),"\nPerimeter of the Circle : ",Circle.perimeter(r))

print("Surface area and Volume of Cuboid")
l=int(input("Enter length : "))
b=int(input("Enter breadth : "))
h=int(input("Enter height : "))
print("Surface area of the Cuboid : ",Cuboid.surface_area(l,b,h),"\nVolume of the Cuboid : ",Cuboid.volume(l,b,h))

print("Surface area and Volume of Sphere")
r=int(input("Enter the radius : "))
print("Surface area  of the Sphere : ",Sphere.surface_area(r),"\nVolume of the Sphere : ",Sphere.volume(r))
