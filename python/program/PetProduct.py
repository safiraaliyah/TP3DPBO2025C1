
from Food import Food
from Toy import Toy

class PetProduct(Food, Toy):
    def __init__(self, brand="", type="", material="", target_age="", price=0.0, stock_quantity=0):
        Food.__init__(self, brand, type)
        Toy.__init__(self, material, target_age)
        self.__price = price
        self.__stock_quantity = stock_quantity
    
    def set_price(self, price):
        self.__price = price
    
    def set_stock_quantity(self, stock_quantity):
        self.__stock_quantity = stock_quantity
    
    def get_price(self):
        return self.__price
    
    def get_stock_quantity(self):
        return self.__stock_quantity