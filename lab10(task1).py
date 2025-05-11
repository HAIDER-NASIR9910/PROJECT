# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 1: Inventory Management System

store_inventory = {}

def add_new_product(product_name, unit_price, stock_quantity):
    """Adds a new product to the inventory."""
    if product_name in store_inventory:
        print(f"{product_name} already exists. Use update_product_quantity() to change its quantity.")
    else:
        store_inventory[product_name] = {
            "price": unit_price,
            "quantity": stock_quantity
        }
        print(f"{product_name} added successfully.")

def update_product_quantity(product_name, quantity_to_add):
    """Updates the stock quantity of an existing product."""
    if product_name in store_inventory:
        store_inventory[product_name]["quantity"] += quantity_to_add
        print(f"{product_name}'s quantity updated to {store_inventory[product_name]['quantity']}.")
    else:
        print(f"{product_name} does not exist in the inventory.")

def calculate_total_value():
    """Calculates and returns the total value of the inventory."""
    total = sum(item["price"] * item["quantity"] for item in store_inventory.values())
    return total

def show_inventory():
    """Displays all products in the inventory."""
    if not store_inventory:
        print("Inventory is currently empty.")
        return
    print("\nInventory Details:")
    print(f"{'Product':<12} {'Price (Rs)':<12} {'Quantity':<10}")
    print("-" * 36)
    for product, details in store_inventory.items():
        print(f"{product:<12} {details['price']:<12.2f} {details['quantity']:<10}")

# Example Usage
add_new_product("Apple", 0.5, 100)
add_new_product("Banana", 0.3, 150)
update_product_quantity("Apple", 50)
show_inventory()
print(f"\nTotal Inventory Value: Rs {calculate_total_value():.2f}")

# ----------------------------- COMMENTS -----------------------------
# 1. add_new_product() - Adds a new item to the inventory only if it doesn't already exist.
# 2. update_product_quantity() - Increases the quantity of an existing item.
# 3. calculate_total_value() - Calculates the total value of all inventory items.
# 4. show_inventory() - Displays a neatly formatted list of all products in the inventory.
