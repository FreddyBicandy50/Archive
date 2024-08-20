#camel Case
def fetch(camelcase):
    snake=""
    for letter in camelcase:
        if(letter.isupper()):
           snake+="_"
           snake+=letter.lower()
        else: 
           snake+=letter.lower()
    return snake
def camelCase():
    print(f"snake_case:{fetch(input('CameclCase:'))}")
 
#Coke Machine
def insertcoin(Coin,amount):  
    if Coin==5 or Coin==10 or Coin==25:
        return amount - Coin
    else: 
        return amount
def CokeMachine():
     amount=50 
     while(amount>0):
        print("amount due:",amount)
        amount=insertcoin(int(input("insert Coin:")),amount)  
     print("change own:",amount*-1)

#Just setting up my twttr
def setting(inpt): 
    temp=""
    for vowel in inpt:
        if(vowel=='a' or vowel=='e' or vowel=='i' or vowel=='o' or vowel=='u'): 
           continue
        else: 
           temp+=vowel
    return temp
def twttr():
    print(f"Output:{setting(input('Input:').lower())}")
 
#Vanity Plates
def is_valid(s):
    #check length if >6
    if(len(s)>6 or len(s)<2):  
        return False
    else: 
        punclist=['.','$',' ','#',',','^','%','_','-','=','+','/','*']
        for i in s:
            if i in punclist:
                return False
        start=0 
        for j in range(2):
            #check first 2 character if letters
            if(s[j].isalpha()):
                start+=1 
                 
        if(start<2): 
            return False
        else: 
            if(len(s)==2):
                return True
            else:  
                digit=False 
                for i in range(2,len(s)):
                    if s[i].isdigit(): 
                            if s[i]=='0' and not digit:
                                return False
                            else:
                                digit=True
                    else:
                        if(digit):
                            return False
    return True

                     
def VanityPlates(): 
    if is_valid(input("Plate: ").upper()):
        print("Valid")
    else:
        print("Invalid")


#Nutrition Facts
def check(item=""):
     Poster =[
        {"name":"apple",
         "calorie":"130"},
        {"name":"avocado",
         "calorie":"50"},
        {"name":"banana",
         "calorie":"110"},
        {"name":"kiwifruit",
         "calorie":"90"},
        {"name":"orange",
         "calorie":"80"}
    ]
     for i in range(0,len(Poster)-1):
        if Poster[i]["name"]==item:
            print("Calories:",Poster[i]["calorie"]) 
            return
        
def NutritionFacts():
    check(input("Item:").lower())

