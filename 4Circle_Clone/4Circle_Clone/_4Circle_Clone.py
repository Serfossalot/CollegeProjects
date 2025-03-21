import turtle
screen = turtle.Screen()
screen.bgcolor("white")
t = turtle.Turtle()
t.speed(4)

def draw_circle(color, x, y):
  t.penup()
  t.goto(x, y)
  t.pendown()
  t.fillcolor(color)
  t.begin_fill()
  t.circle(60)
  t.end_fill()
  
draw_circle("green", -60, 60)
draw_circle("blue", 60, 60)
draw_circle("yellow", -60, -60)
draw_circle("red", 60, -60)
t.hideturtle()
turtle.done()