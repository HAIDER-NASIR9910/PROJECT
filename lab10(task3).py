# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 3: Dynamic Recipe Book System
recipe_book = {}

def add_recipe(recipe_name, ingredients_dict):
    """Adds a new recipe with its ingredients to the recipe book."""
    if recipe_name in recipe_book:
        print(f"Recipe '{recipe_name}' already exists.")
    else:
        recipe_book[recipe_name] = ingredients_dict
        print(f"Recipe '{recipe_name}' added successfully.")

def adjust_ingredient(recipe_name, ingredient_name, quantity_change):
    """Adjusts the quantity of a given ingredient in a recipe."""
    if recipe_name in recipe_book:
        if ingredient_name in recipe_book[recipe_name]:
            recipe_book[recipe_name][ingredient_name] += quantity_change
            print(f"Adjusted '{ingredient_name}' in '{recipe_name}' to {recipe_book[recipe_name][ingredient_name]}.")
        else:
            recipe_book[recipe_name][ingredient_name] = quantity_change
            print(f"Added new ingredient '{ingredient_name}' to '{recipe_name}' with quantity {quantity_change}.")
    else:
        print(f"Recipe '{recipe_name}' not found.")

def show_all_recipes():
    """Displays all recipes along with their ingredients."""
    if not recipe_book:
        print("Recipe book is empty.")
        return
    print("\nRecipe Book:")
    for recipe_name, ingredients in recipe_book.items():
        print(f"\n{recipe_name}:")
        for ingredient, quantity in ingredients.items():
            print(f"  - {ingredient}: {quantity}")

def search_recipes_by_ingredient(target_ingredient):
    """Finds all recipes that include a specific ingredient."""
    found_recipes = [recipe for recipe, ingredients in recipe_book.items() if target_ingredient in ingredients]
    if found_recipes:
        print(f"\nRecipes containing '{target_ingredient}': {', '.join(found_recipes)}")
    else:
        print(f"\nNo recipes found with ingredient '{target_ingredient}'.")

# Sample Usage
add_recipe("Pancakes", {"Flour": 200, "Milk": 300, "Eggs": 2})
add_recipe("Omelette", {"Eggs": 3, "Cheese": 50, "Milk": 100})
adjust_ingredient("Pancakes", "Milk", 50)
adjust_ingredient("Pancakes", "Butter", 30)
show_all_recipes()
search_recipes_by_ingredient("Milk")
search_recipes_by_ingredient("Chocolate")

# ----------------------------- COMMENTS -----------------------------
# 1. add_recipe() - Adds a new recipe with its list of ingredients.
# 2. adjust_ingredient() - Increases/decreases an existing ingredient or adds a new one.
# 3. show_all_recipes() - Prints all recipes and their ingredients.
# 4. search_recipes_by_ingredient() - Finds all recipes containing a specified ingredient.
