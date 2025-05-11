# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 4: Contact Book Management System
contact_book = {}

def add_or_update_contact(name, phone, email):
    """Adds a new contact or updates an existing contact's phone and email."""
    contact_book[name] = {"phone": phone, "email": email}
    print(f"Contact for {name} has been added/updated.")

def delete_contact(name):
    """Deletes a contact if it exists in the contact book."""
    if name in contact_book:
        del contact_book[name]
        print(f"Contact for {name} has been deleted.")
    else:
        print(f"Contact '{name}' does not exist.")

def get_contact(name):
    """Retrieves and displays contact details for a given name."""
    if name in contact_book:
        contact = contact_book[name]
        print(f"{name} - Phone: {contact['phone']}, Email: {contact['email']}")
    else:
        print(f"Contact '{name}' not found.")

def display_all_contacts():
    """Displays all contacts currently stored in the contact book."""
    if not contact_book:
        print("Contact book is empty.")
    else:
        print("\nAll Contacts:")
        for name, info in contact_book.items():
            print(f"{name} - Phone: {info['phone']}, Email: {info['email']}")

# Sample Data
add_or_update_contact("Haider", "03059123889", "Haider_Nasir@gmail.com")
add_or_update_contact("Babar", "03337865677", "babar1212gmail.com")
get_contact("Haider")
delete_contact("Babar")
display_all_contacts()

# ----------------------------- COMMENTS -----------------------------
# 1. add_or_update_contact() - Adds a contact if new, or updates if it already exists.
# 2. delete_contact() - Removes a contact from the book if it exists.
# 3. get_contact() - Fetches and displays details for a specific contact.
# 4. display_all_contacts() - Lists all contacts stored in the contact_book.
