
class Toy:
    def __init__(self, material="", target_age=""):
        self.__material = material
        self.__target_age = target_age
    
    def set_material(self, material):
        self.__material = material
    
    def set_target_age(self, target_age):
        self.__target_age = target_age
    
    def get_material(self):
        return self.__material
    
    def get_target_age(self):
        return self.__target_age