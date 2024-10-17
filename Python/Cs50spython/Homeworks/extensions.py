def verify(file):
    nfile = file.lower().strip(" ")
    if nfile.endswith(".gif"):
        return "image/gif"
    elif nfile.endswith(".jpg"):
        return "image/jpeg"
    elif nfile.endswith(".jpeg"):
        return "image/jpeg"
    elif nfile.endswith(".png"):
        return "image/png"
    elif nfile.endswith(".pdf"):
        return "application/pdf"
    elif nfile.endswith(".txt"):
        return "text/plain"
    elif nfile.endswith(".zip"):
        return "application/zip"
    else:
        return "application/octet-stream"
    

def main():
    file = str(input("File name: "))
    print(verify(file), end="")

main()