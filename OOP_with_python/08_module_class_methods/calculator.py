# calculator
# simple calculator (class and method)

class Calculator:
    brand="Casio"
    ops=["add","sub",'mul','div']
    price=5000

    # methods
    def add(self,a,b):
        return a+b
    
    def sub(self,a,b):
        return a-b
    
    def mul(self,a,b):
        return a*b
    
    def div(self,a,b):
        return a/b


my_calc=Calculator()
print(my_calc.price)
print(my_calc.brand)


add=my_calc.add(3,7)
print(add)
div=my_calc.div(30,7)
print(div)


