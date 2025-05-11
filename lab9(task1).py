# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 1
def create_inventory_data():
    # Each item is stored as: (ID, Name, Size, Price, Quantity)
    items = [
        (1, "Blue Denim Jacket", "M", 49.99, 10),
        (2, "Red Hoodie", "L", 39.99, 5),
        (3, "White T-Shirt", "S", 14.99, 0),
        (4, "Black Jeans", "M", 59.99, 7),
        (5, "Green Sweater", "L", 29.99, 0),
    ]
    return items

def show_all_inventory(items):
    print(f"{'Item ID':<8} {'Item Name':<22} {'Size':<6} {'Price($)':<10} {'Stock':<6}")
    print("=" * 60)
    for itm in items:
        print(f"{itm[0]:<8} {itm[1]:<22} {itm[2]:<6} {itm[3]:<10.2f} {itm[4]:<6}")

def search_by_size(items, target_size):
    print(f"\nItems Available in Size '{target_size.upper()}':")
    print(f"{'Item ID':<8} {'Item Name':<22} {'Size':<6} {'Price($)':<10} {'Stock':<6}")
    print("-" * 60)
    found = False
    for itm in items:
        if itm[2].upper() == target_size.upper():
            print(f"{itm[0]:<8} {itm[1]:<22} {itm[2]:<6} {itm[3]:<10.2f} {itm[4]:<6}")
            found = True
    if not found:
        print("No items found in this size.")

def calculate_inventory_worth(items):
    total = sum(itm[3] * itm[4] for itm in items)
    print(f"\nTotal Inventory Value: ${total:.2f}")

def show_out_of_stock(items):
    print("\nItems That Are Out of Stock:")
    print(f"{'Item ID':<8} {'Item Name':<22} {'Size':<6} {'Price($)':<10} {'Stock':<6}")
    print("-" * 60)
    empty = True
    for itm in items:
        if itm[4] == 0:
            print(f"{itm[0]:<8} {itm[1]:<22} {itm[2]:<6} {itm[3]:<10.2f} {itm[4]:<6}")
            empty = False
    if empty:
        print("All items are currently in stock.")

# Main Program Execution
inventory_data = create_inventory_data()
show_all_inventory(inventory_data)
search_by_size(inventory_data, "s")
calculate_inventory_worth(inventory_data)
show_out_of_stock(inventory_data)

# ----------------------------- COMMENTS -----------------------------
# 1. The create_inventory_data() function initializes a list of item records.
# 2. show_all_inventory() displays all the inventory items in a formatted table.
# 3. search_by_size() filters and displays only those items that match the given size.
# 4. calculate_inventory_worth() calculates the total value of all items in stock.
# 5. show_out_of_stock() identifies and lists the items with zero quantity.
