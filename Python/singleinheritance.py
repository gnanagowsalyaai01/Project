class tree():
    def __init__(self):
        print("The Tree name is APPLE TREE")
    def leaf(self):
        print("The leaf shape is OVATE")
    def color(self):
        print("The fruit color is RED ")
class fruit(tree):
    def __init__(self):
        super().__init__()
        super().leaf()
        super().color()
        print("The fruit name is APPLE")

a=fruit()