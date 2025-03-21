minutes = int(input('Please enter a number of minutes greater than 60: '))
print ('The number of minutes you entered was ', minutes)
converted = minutes // 60
seconds = minutes % 60
print ('The equivalent time is',converted, 'hours', 'and', seconds, 'minutes')

