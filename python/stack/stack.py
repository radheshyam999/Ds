class stack:
  cars="sujki";

  def __init__(self):
        self.nu = []
        self.top =0

        self.max = int(input("What would be size of array "));
        self.end = self.max
  def push(self):
     if self.top < self.max:
          x = int(input("Enter a Number "))
          p.nu.append(x)
          self.top+=1
     else:
          print("overfllow")

  def pop(self):
     if self.top ==0:
        print("underflow")
     else:
         self.end =self.end-1 
  def show(self):
     if self.top > self.max:
         print("overflow")
     else:
         i = 0
         while i < self.end:
             print(self.nu[i])
             i+=1
p=stack()
while True:
   print("1 \t push")
   print("2 \t pop")
   print("3 \t show")
   print("4 \t Exit")
   option = int(input("choose option "))
   if option == 1:
        p.push();
   elif option == 2:
        p.pop();
   elif option == 3:
        p.show()
   elif option == 4:
       break
   else:
       print("faiiled")

               # print(c)
               # for c in p.nu[]:
