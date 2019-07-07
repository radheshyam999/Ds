class Queues:
    #Queues(5,6)
    def __init__(self, x, y,x1,y1):

        self.x = x
        self.y = y;
        # this formula to get Distance between two point
        # (x-x1)^2+(y-y1)^2

        distance2 = ((x - x1)*(x-x1)) * ((y -y1)*(y-y1))
        l = distance2
        e = 0.000001
        n =1;
        while l - n > e:
            x = (x+y)/2
            y = distance2/x

        print(x)
    def getall():
        x=5
        y =6
        print(x)
        print(y)# 3y

    getall();
    #def show():
    #   x=45;
    #    if x <= 5000:
    #        print("you dont need to pay taxes")
    #    else:
    #        print("you need to pay taxes")
    # show()
x = int(input("Eneter x Axis"))
y = int(input("Eneter y axis: "))
print("Enter second coordinate")
x1 = int(input("Eneter x Axis :"))
y1 = int(input("Enter y axis : "))
p=Queues(x,y,x1,y1)
