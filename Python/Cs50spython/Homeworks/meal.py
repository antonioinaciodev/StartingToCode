def main():
    time = str(input("What time is it? "))
    print(convert(time), end="")


def convert(time):
    hours, minutes = time.split(":")
    h = int(hours)
    m = int(minutes)
    if h == 7 and 00 <= m <= 59:
        return "breakfast time"
    elif h == 8 and 00 == m:
        return "breakfast time"
    elif h == 12 and 00 <= m <= 59:
        return "lunch time"
    elif h == 13 and 00 == m:
        return "lunch time"
    elif h == 18 and 00 <= m <= 59:
        return "dinner time"
    elif h == 19 and 00 == m:
        return "dinner time"

if __name__ == "__main__":
    main()