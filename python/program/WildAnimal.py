
from Animal import Animal

class WildAnimal(Animal):
    def __init__(self, species="", name="", habitat="", endangered=False):
        super().__init__(species, name)
        self.__habitat = habitat
        self.__endangered = endangered
    
    def set_habitat(self, habitat):
        self.__habitat = habitat
    
    def set_endangered(self, endangered):
        self.__endangered = endangered
    
    def get_habitat(self):
        return self.__habitat
    
    def is_endangered(self):
        return self.__endangered