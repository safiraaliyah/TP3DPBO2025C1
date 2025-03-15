# PetShop.py
from Dog import Dog
from Cat import Cat
from Bird import Bird
from PetProduct import PetProduct

class PetShop:
    def __init__(self, name="", location="", dogs=None, cats=None, birds=None, products=None):
        self.__name = name
        self.__location = location
        self.__dogs = dogs if dogs is not None else []
        self.__cats = cats if cats is not None else []
        self.__birds = birds if birds is not None else []
        self.__products = products if products is not None else []
    
    def set_name(self, name):
        self.__name = name
    
    def set_location(self, location):
        self.__location = location
    
    def set_dogs(self, dogs):
        self.__dogs = dogs
    
    def set_cats(self, cats):
        self.__cats = cats
    
    def set_birds(self, birds):
        self.__birds = birds
    
    def set_products(self, products):
        self.__products = products
    
    def add_dog(self, dog):
        self.__dogs.append(dog)
    
    def add_cat(self, cat):
        self.__cats.append(cat)
    
    def add_bird(self, bird):
        self.__birds.append(bird)
    
    def add_product(self, product):
        self.__products.append(product)
    
    def get_name(self):
        return self.__name
    
    def get_location(self):
        return self.__location
    
    def get_dogs(self):
        return self.__dogs
    
    def get_cats(self):
        return self.__cats
    
    def get_birds(self):
        return self.__birds
    
    def get_products(self):
        return self.__products