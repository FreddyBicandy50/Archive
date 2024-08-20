#Indoor Voice
def indoorvoice():
    print(input("").lower())


#Playback Speed
def playbackspeed(): 
    print(input("").replace(" ","..."))
#Making Faces
def convert(message):
	message,emote=message.split(" ")
	if(emote==":)"):emote="🙂"
	elif(emote==":("):emote="🙁"
	return message+" "+emote

def makingfaces(): 
    print(convert(input("")))
makingfaces()
#Einstein
def einstein():
    print(formula(int(input("M:")))) 
def formula(m):
    return m*pow(300000000,2) 
  
 
#Tip Calculator
def TIP():
     print(calculate(float(input("How much was the meal?:")),int(input("What percentage would you like to tip?:"))))
def calculate(price,percent): 
     return f"Leave $ {(price*(1+percent/100))-price:.2f}"
