
class Food:
    def __init__(self, brand="", type=""):
        self.__brand = brand
        self.__type = type
    
    def set_brand(self, brand):
        self.__brand = brand
    
    def set_type(self, type):
        self.__type = type
    
    def get_brand(self):
        return self.__brand
    
    def get_type(self):
        return self.__type
