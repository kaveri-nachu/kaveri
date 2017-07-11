import turtle
def tree(branchLen,r):
if branchLen > 5:
r.forward(branchLen)
r.right(20)
tree(branchLen-15,r)
r.left(40)
tree(branchLen-15,r)
r.right(20)
r.backward(branchLen)
def main():
r = turtle.Turtle()
myWin = turtle.Screen()
r.left(90)
r.up()
r.backward(100)
r.down()
r.color("green")
tree(75,r)
myWin.exitonclick()
main()
