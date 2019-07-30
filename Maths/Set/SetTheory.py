class SetTheory:
    """docstring forSetTheory."""

    def __init__(self):

         self.Member = int(input("How Many Member Do You Have"))
         self.max = 0
         self.SetMy = []
         self.Mem =0
         if self.Member >= self.max:
               if self.max !=self.Member:
                    i=0;
                    self.Mem = input("Enter Set Member")
    def isAvaliable(self,mem):
        i = 0;
        while i <= self.max:
            if i < self.max:
                if self.SetMy[i] == mem:
                    return False
            i+=1
        return True
    # def GetMember(self):
    #
    #
    #             self.SetMy.append(self.Mem)
    #             self.max+=1
    def ShowMember(self):
        i = 0
        while i < self.max:
            print(self.SetMy[i])
            i+=1

SetTake=SetTheory()
while True:

    option = int(input("Choose option:1p \n /2s"))
    x = SetTake.isAvaliable(SetTake.Mem)
    if option==1:
        if x == True:
            SetTake.SetMy.append(SetTake.Mem)
            SetTake.max+=1
            print("appended")
    else:
        SetTake.ShowMember()
