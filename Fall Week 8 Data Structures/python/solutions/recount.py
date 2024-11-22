
from collections import defaultdict


counts = defaultdict(int)
while True:
    name = input()
    if name == '***':
        # End of input; stop reading
        break

    # Here 'name' contains the name of the candidate who received a vote

    counts[name] += 1



max_key, max_value = 'Runoff!', 0
for key, value in counts.items():
    if value > max_value:
        # If this candidate received more votes than any previous candidate,    
        # they are the current winner
        max_key, max_value = key, value
    elif value == max_value:
        # If this candidate received the same number of votes as the current winner,
        # they are tied for the lead, so we should print 'Runoff!'
        max_key = 'Runoff!'

print(max_key)
