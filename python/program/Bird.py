
from Pet import Pet

class Bird(Pet):
    def __init__(self, species="", name="", owner="", vaccinated=False, can_fly=False, beak_type=""):
        super().__init__(species, name, owner, vaccinated)
        self.__can_fly = can_fly
        self.__beak_type = beak_type
    
    def set_can_fly(self, can_fly):
        self.__can_fly = can_fly
    
    def set_beak_type(self, beak_type):
        self.__beak_type = beak_type
    
    def can_fly(self):
        return self.__can_fly
    
    def get_beak_type(self):
        return self.__beak_type