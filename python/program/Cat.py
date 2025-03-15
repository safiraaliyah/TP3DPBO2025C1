
from Pet import Pet

class Cat(Pet):
    def __init__(self, species="", name="", owner="", vaccinated=False, fur_color="", long_haired=False):
        super().__init__(species, name, owner, vaccinated)
        self.__fur_color = fur_color
        self.__long_haired = long_haired
    
    def set_fur_color(self, fur_color):
        self.__fur_color = fur_color
    
    def set_long_haired(self, long_haired):
        self.__long_haired = long_haired
    
    def get_fur_color(self):
        return self.__fur_color
    
    def is_long_haired(self):
        return self.__long_haired