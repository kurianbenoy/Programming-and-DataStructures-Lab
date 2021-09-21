#Task: to model a simple car
# requires wheels, name, model, company etc

class Car:
    def __init__(self, name, model, company, price) -> None:
        self.name = name
        self.model = model
        self.company = company
        self.price = price

    def price_range(self):
        if(self.price <= 500000):
            self.range = "LOW"
        elif (self.price >= 500000) and (self.price<=1500000):
            self.range = "MEDIUM"
        elif (self.price >= 1500000):
            self.range = "HIGH"

        return self.range


if __name__ == "__main__":
    c1 = Car(name="Baleno", model="SUV", company="Maruthi", price=3000000)
    print(c1.name)
    print(c1)
    print(c1.price_range())
