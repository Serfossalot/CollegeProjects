import turtle

# Initialize turtle
screen = turtle.Screen()
screen.title("Colorful Circles Design")
screen.bgcolor("white")

# Create a turtle
pen = turtle.Turtle()
pen.speed(5)

# Function to draw a colored circle
def draw_circle(color, x, y):
    pen.penup()
    pen.goto(x, y)
    pen.pendown()
    pen.color(color)
    pen.begin_fill()
    pen.circle(50)  # Radius of 50
    pen.end_fill()

# Draw circles
draw_circle("green", -60, 60)  # Top-left
draw_circle("blue", 60, 60)    # Top-right
draw_circle("yellow", -60, -60) # Bottom-left
draw_circle("red", 60, -60)    # Bottom-right

# Hide the turtle and complete the drawing
pen.hideturtle()
screen.mainloop()
