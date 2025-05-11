# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 3

def create_all_recipes():
    # Each recipe is a list of ingredients (name, quantity, unit)
    recipe_1 = [
        ("Tomato", 2, "pieces"),
        ("Salt", 1, "tsp"),
        ("Olive Oil", 2, "tbsp")
    ]

    recipe_2 = [
        ("Flour", 200, "grams"),
        ("Egg", 2, "pieces"),
        ("Milk", 250, "ml")
    ]

    recipe_3 = [
        ("Chicken", 500, "grams"),
        ("Salt", 1.5, "tsp"),
        ("Garlic", 3, "cloves")
    ]

    return [recipe_1, recipe_2, recipe_3]

def show_all_recipes(recipes):
    print("\n===== Recipe List =====")
    for i, recipe in enumerate(recipes, start=1):
        print(f"\n--- Recipe {i} ---")
        for item in recipe:
            print(f"• {item[0]}: {item[1]} {item[2]}")

def search_recipes_by_ingredient(recipes, search_item):
    print(f"\n===== Recipes That Use '{search_item}' =====")
    found = False
    for i, recipe in enumerate(recipes, start=1):
        if any(ing[0].lower() == search_item.lower() for ing in recipe):
            print(f"• Recipe {i}")
            found = True
    if not found:
        print("No recipes found with that ingredient.")

def get_total_ingredient_quantities(recipes):
    print("\n===== Total Ingredients Needed =====")
    totals = {}
    for recipe in recipes:
        for name, quantity, unit in recipe:
            key = (name.lower(), unit)
            if key in totals:
                totals[key] += quantity
            else:
                totals[key] = quantity

    for (name, unit), total in totals.items():
        print(f"• {name.capitalize()}: {total} {unit}")

def filter_recipes_by_min_quantity(recipes, ingredient_name, min_qty):
    print(f"\n===== Recipes Using More Than {min_qty} of '{ingredient_name}' =====")
    found = False
    for i, recipe in enumerate(recipes, start=1):
        for name, qty, unit in recipe:
            if name.lower() == ingredient_name.lower() and qty > min_qty:
                print(f"• Recipe {i} ({qty} {unit})")
                found = True
                break
    if not found:
        print("No recipes meet the quantity requirement.")

# Main Execution
if __name__ == "__main__":
    all_recipes = create_all_recipes()
    show_all_recipes(all_recipes)
    search_recipes_by_ingredient(all_recipes, "Salt")
    get_total_ingredient_quantities(all_recipes)
    filter_recipes_by_min_quantity(all_recipes, "Salt", 1)

# ----------------------------- COMMENTS -----------------------------
# 1. create_all_recipes() returns a list of recipes with ingredients.
# 2. show_all_recipes() prints each recipe and its ingredients.
# 3. search_recipes_by_ingredient() finds and lists recipes containing a specific ingredient.
# 4. get_total_ingredient_quantities() adds up total amounts of each ingredient across all recipes.
# 5. filter_recipes_by_min_quantity() finds recipes using more than a certain quantity of a specific ingredient.
