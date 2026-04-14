from abc import ABC , abstractmethod


class Project(ABC):
    def details(self):
        print("I am xyz project")

    @abstractmethod
    def security(self):
        pass

class App(Project):
    def security(self):
        print("App security applied")

    def details(self):
        print("I am xyz project")


a = App()
a.details()
a.security()


    