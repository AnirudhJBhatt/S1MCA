class Publisher:
    def __init__(self, name):
        self.name=name
    def display():
        pass

class Book(Publisher):
    def __init__(self, name, title, author):
        self.title=title
        self.author=author
        super().__init__(name)
    def display():
        pass

class Python(Book):
    def __init__(self, title, author, name, price, no_of_pages):
        self.price=price
        self.no_of_pages=no_of_pages
        super().__init__(name, title, author)
    def display(self):
        print("Book Details")
        print("Title  : ",self.title)
        print("Author  : ",self.author)
        print("Publisher  : ",self.name)
        print("Price  : ",self.price)
        print("No of pages  : ",self.no_of_pages)

title, author, name, price, no_of_pages = input("Enter Book title, author name, Publisher, Price and No of pages : ").split(',')
s= Python(title, author, name, int(price), int(no_of_pages))
s.display()
