# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 2: Student Gradebook System
gradebook = {}

def add_or_update_grade(student_name, subject_name, grade_value):
    """Adds a new grade or updates an existing grade for a student in a subject."""
    if student_name not in gradebook:
        gradebook[student_name] = {}
    gradebook[student_name][subject_name] = grade_value
    print(f"{student_name}'s grade in {subject_name} set to {grade_value}.")

def calculate_average_grade(student_name):
    """Calculates the average grade of a student across all subjects."""
    if student_name in gradebook and gradebook[student_name]:
        grades = gradebook[student_name].values()
        return sum(grades) / len(grades)
    else:
        return 0

def is_student_passing(student_name):
    """Checks if a student's average grade is 60 or higher."""
    average = calculate_average_grade(student_name)
    return average >= 60

def show_gradebook():
    """Displays all students, their average grades, and pass/fail status."""
    if not gradebook:
        print("The gradebook is currently empty.")
        return
    print("\nStudent Gradebook:")
    print(f"{'Student':<12} {'Average':<10} {'Status':<10}")
    print("-" * 34)
    for student, subjects in gradebook.items():
        avg = calculate_average_grade(student)
        status = "Passing" if is_student_passing(student) else "Failing"
        print(f"{student:<12} {avg:<10.2f} {status:<10}")

# Sample data entry
add_or_update_grade("Haider", "Math", 85)
add_or_update_grade("Ali", "Science", 78)
add_or_update_grade("Babar", "Math", 55)
add_or_update_grade("Abbas", "History", 60)
add_or_update_grade("Abdullah", "Math", 45)

# Displaying the full gradebook
show_gradebook()

# ----------------------------- COMMENTS -----------------------------
# 1. add_or_update_grade() - Adds or updates a student's grade in a subject.
# 2. calculate_average_grade() - Computes the average grade for a student.
# 3. is_student_passing() - Determines if a student's average is 60 or more.
# 4. show_gradebook() - Displays student names, their averages, and whether they are passing.
