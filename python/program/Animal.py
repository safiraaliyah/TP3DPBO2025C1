# Animal.py
class Animal:
    def __init__(self, species="", name=""):
        self.__species = species
        self.__name = name
    
    def set_species(self, species):
        self.__species = species
    
    def set_name(self, name):
        self.__name = name
    
    def get_species(self):
        return self.__species
    
    def get_name(self):
        return self.__name