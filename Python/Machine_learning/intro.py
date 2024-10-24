#2
mylist=[1,2,3,4,2,3,4,5,6,7,8,9,5,6,1,2,3,4,5,6,7,8]
myset=set(mylist)
print(myset)


#2
list=[1,2,4,5,6,7,8,9]
list2=[3,2,1,9]
print(set(list) & set(list2))


#3
list=[1,2,4,5,6,7,8,9]
list2=[3,2,1,9]
print(set(list) & set(list2))


#4

pname=input("enter product name:")
price=input("enter price:")
print(f"The Product name:{pname} with price:{price}")


#5
list=[]
count=0

while(1):
    word=input("~")
    if len(word) >=1:
        list.append(word)
        count+=1
    if (word=="END"):
        break
    
print(list[0:len(list) - 1])