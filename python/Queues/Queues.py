class Queues:
    def __init__(self):
        self.Array =[]
        self.top =-1;
        self.start = 0
        self.max = int(input("Enter a size of your arra "))
#print(p.max)

    def push(self):
       if self.max > self.top:
            num = input("pleas Eneter ")
            self.Array.append(num)
            self.top+=1
       else:
            print("overfllow")
    def pop(self):
          if self.top == -1:
              print("underflow")
          else:
              self.start +=1
    def show(self):
         if self.top == -1:
             print("you dont have any Element show")
         else:
             i=self.start
             while i < self.max :
                 print(self.Array[i])
                 i+=1
p=Queues()
while True:

    print("1 \t push")
    print("2 \t pop")
    print("3 \t show")
    print("4 \t Exit")
    option = int(input("please choose your option:"))
    if option ==1:
           p.push();
    elif option == 2:
            p.pop()
    elif option == 3:
            p.show()
    elif option == 4:
        break
    else:
        print("Pleas choose specific option")
