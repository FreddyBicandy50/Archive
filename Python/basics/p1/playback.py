def playback(message):
    return(message.replace(" ", "..."))

def main():
    message = input("Enter a message: ")
    print(playback(message))

main()
