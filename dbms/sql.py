import mysql.connector
#use command first : pip install mysql-connector-python

# Function to establish a database connection
def connect_to_database():
    try:
        connection = mysql.connector.connect(
            host="localhost",
            user="root",# Replace with your MySQL username
            password="P@ssw0rd",  # Replace with your MySQL password
            database="pyFront"  # Replace with your MySQL database name
        )
        return connection
    except mysql.connector.Error as err:
        print("Error: {}".format(err))
        return None

# Function to create the users table
def create_table(connection):
    cursor = connection.cursor()
    table_query = """
    CREATE TABLE IF NOT EXISTS users (
        id INT AUTO_INCREMENT PRIMARY KEY,
        name VARCHAR(255) NOT NULL,
        age INT NOT NULL
    )
    """
    cursor.execute(table_query)
    print("Table created successfully!")

# Function to add a new record to the database
def add_record(connection, name, age):
    cursor = connection.cursor()
    query = "INSERT INTO users (name, age) VALUES (%s, %s)"
    data = (name, age)
    cursor.execute(query, data)
    connection.commit()
    print("Record added successfully!")

# Function to delete a record from the database
def delete_record(connection, user_id):
    cursor = connection.cursor()
    query = "DELETE FROM users WHERE id = %s"
    data = (user_id,)
    cursor.execute(query, data)
    connection.commit()
    print("Record deleted successfully!")

# Function to update a record in the database
def edit_record(connection, user_id, new_name, new_age):
    cursor = connection.cursor()
    query = "UPDATE users SET name = %s, age = %s WHERE id = %s"
    data = (new_name, new_age, user_id)
    cursor.execute(query, data)
    connection.commit()
    print("Record updated successfully!")

# Function to display all records from the database
def display_records(connection):
    cursor = connection.cursor()
    query = "SELECT * FROM users"
    cursor.execute(query)
    records = cursor.fetchall()
    if not records:
        print("No records found.")
    else:
        for record in records:
            print("ID: {}, Name: {}, Age: {}".format(record[0], record[1], record[2]))

# Main function to handle user input and database operations
def main():
    connection = connect_to_database()
    if connection is None:
        return
    
    create_table(connection)

    while True:
        print("1. Add Record")
        print("2. Delete Record")
        print("3. Edit Record")
        print("4. Display Records")
        print("5. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            name = input("Enter name: ")
            age = int(input("Enter age: "))
            add_record(connection, name, age)
        elif choice == "2":
            user_id = int(input("Enter user ID to delete: "))
            delete_record(connection, user_id)
        elif choice == "3":
            user_id = int(input("Enter user ID to edit: "))
            new_name = input("Enter new name: ")
            new_age = int(input("Enter new age: "))
            edit_record(connection, user_id, new_name, new_age)
        elif choice == "4":
            display_records(connection)
        elif choice == "5":
            break
        else:
            print("Invalid choice. Please try again.")

    connection.close()
    print("Connection closed.")

if __name__ == "__main__":
    main()

