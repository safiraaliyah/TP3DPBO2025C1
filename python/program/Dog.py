
from Pet import Pet

class Dog(Pet):
    def __init__(self, species="", name="", owner="", vaccinated=False, breed="", weight=0.0):
        super().__init__(species, name, owner, vaccinated)
        self.__breed = breed
        self.__weight = weight
    
    def set_breed(self, breed):
        self.__breed = breed
    
    def set_weight(self, weight):
        self.__weight = weight
    
    def get_breed(self):
        return self.__breed
    
    def get_weight(self):
        return self.__weight