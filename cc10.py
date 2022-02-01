class computer:
    def __init__(self, spec):
        self.spec = spec
    def getspec(self):
        self.spec = input("ENTER SPECIFICATION")

class laptop(computer):
    def __init__(self,laptopspec):
        self.laptopspec = laptopspec
    def putspec(self):
        self.laptopspec = input("ENTER SPECIFICATION")

    def display(self):
        print("LAPTOP SPECIFCATION ARE:", self.laptopspec)

class desktop(computer):
    def __init__(self,desktopspec):
        self.desktopspec = desktopspec
    def putspec(self):
         self.desktopspec=input("ENTER SPECIFICATION")
    def display(self):
         print("DESKTOP SPECIFCATION ARE:",self.desktopspec)


obj=laptop(" ")
#obj.getspec()
obj.putspec()
obj.display()

obj=desktop(" ")
#obj.getspec()
obj.putspec()
obj.display()
