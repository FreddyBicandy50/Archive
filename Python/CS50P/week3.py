#Fuel Gauge
def fuelcheck():
    print(FuelGauge("Fraction:"))



def FuelGauge(prompt):
    while True:
        try:
            fraction=input(prompt)
            x,y=fraction.split("/")
            res=(int(x)/int(y))*100
            if(res>=99):
                return 'F'
            elif(res<=1):
                return 'E'
            else:
                return res
        except ValueError:
            pass
        except ZeroDivisionError:
            pass

#Felipe’s Taqueria
def FelipeT():
    while True:
        print(f"Total:{order('item:')}$")


def order(prompt):
    menu={
        "Baja Taco": 4.00,
        "Burrito": 7.50,
        "Bowl": 8.50,
        "Nachos": 11.00,
        "Quesadilla": 8.50,
        "Super Burrito": 8.50,
        "Super Quesadilla": 9.50,
        "Taco": 3.00,
        "Tortilla Salad": 8.00
    }
    try:
        item=input(prompt)
        if item in menu:
            return str(menu[item])
    except EOFError:
        pass




#Grocery List
def GroceryList():
    list=GLIST()
    for key in list:
        print(list[key],key)
def GLIST():
    list={}
    while True:
        try:
            item=input("").upper()
            if item.isalpha():
                if item in list:
                    list[item]+=1
                else:
                    list[item] = 1 
        except EOFError:
            return list
        
GroceryList()