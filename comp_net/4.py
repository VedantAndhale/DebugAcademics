# Initialize the distance matrix with some large value (999) for unreachable nodes
num_nodes = int(input("Enter the number of nodes: "))
dm = []
for i in range(num_nodes):
    row = input(f"Enter distances from node {i} to all other nodes (space-separated, use 999 for unreachable): ").split()
    dm.append([int(val) for val in row])

# Function to find the shortest path
def find_shortest_path(dm):
    num_nodes = len(dm)
    
    for k in range(num_nodes):
        for i in range(num_nodes):
            for j in range(num_nodes):
                if dm[i][j] > dm[i][k] + dm[k][j]:
                    dm[i][j] = dm[i][k] + dm[k][j]

# Call the function to calculate the shortest path
find_shortest_path(dm)

# Display the shortest path matrix
print("Shortest Path Matrix:")
for row in dm:
    print(row)

