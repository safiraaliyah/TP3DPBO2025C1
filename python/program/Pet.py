
from Animal import Animal

class Pet(Animal):
    def __init__(self, species="", name="", owner="", vaccinated=False):
        super().__init__(species, name)
        self.__owner = owner
        self.__vaccinated = vaccinated
    
    def set_owner(self, owner):
        self.__owner = owner
    
    def set_vaccinated(self, vaccinated):
        self.__vaccinated = vaccinated
    
    def get_owner(self):
        return self.__owner
    
    def is_vaccinated(self):
        return self.__vaccinated