import math
class Distance:
    def __init__(self):
          self.x1 = int(input("please Enter X Axis coordinate"))
          self.y1 = int(input("please Enter y Axis coordinate"))
          self.x2 = int(input("please Enter x Axis coordinate"))
          self.y2 = int(input("please Enter y Axis coordinate"))

    def calculateDistance(self):
         D = math.sqrt(((self.x2 - self.x1)**2) + ((self.y2 - self.y1)**2))
         print("Distance is ",D)

    def calulateslope(self):
        slope = (self.y2-self.y1)/(self.x2-self.x1)
        print("Slope Is :",slope)
obj = Distance()
obj.calculateDistance()
obj.calulateslope()
