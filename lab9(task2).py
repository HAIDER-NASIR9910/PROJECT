# Haider Nasir
# B24S0308AI088
# AI- Blue
# Task 2
def create_student_list():
    # Each student is represented as: (ID, Name, DOB, Major)
    records = [
        ("S001", "Haider", "15-03-2001", "Computer Science"),
        ("S002", "Abbas", "22-07-2000", "Mechanical Engineering"),
        ("S003", "Ali", "05-11-2002", "Computer Science"),
        ("S004", "Raheel", "19-09-1999", "Business Administration"),
        ("S005", "Abuzar", "30-12-2001", "Electrical Engineering")
    ]
    return records

def show_all_students(records):
    print("\n===== Complete Student Records =====")
    for stu in records:
        print(f"ID: {stu[0]:<5} | Name: {stu[1]:<10} | DOB: {stu[2]:<12} | Major: {stu[3]}")

def search_students_by_major(records, target_major):
    print(f"\n===== Students Majoring in '{target_major}' =====")
    found = False
    for stu in records:
        if stu[3].lower() == target_major.lower():
            print(f"ID: {stu[0]:<5} | Name: {stu[1]:<10} | DOB: {stu[2]}")
            found = True
    if not found:
        print("No students found in this major.")

def compute_student_ages(records, current_date="08-04-2025"):
    print("\n===== Student Ages =====")
    curr_day, curr_month, curr_year = map(int, current_date.split("-"))
    for stu in records:
        b_day, b_month, b_year = map(int, stu[2].split("-"))
        age = curr_year - b_year
        if (curr_month, curr_day) < (b_month, b_day):
            age -= 1
        print(f"{stu[1]:<10} is {age} years old.")

def students_born_before(records, year):
    print(f"\n===== Students Born Before {year} =====")
    found = False
    for stu in records:
        birth_year = int(stu[2].split("-")[2])
        if birth_year < year:
            print(f"ID: {stu[0]:<5} | Name: {stu[1]:<10} | DOB: {stu[2]}")
            found = True
    if not found:
        print(f"No students born before {year}.")

# Main Execution Block
if __name__ == "__main__":
    student_list = create_student_list()
    show_all_students(student_list)
    search_students_by_major(student_list, "Computer Science")
    compute_student_ages(student_list)
    students_born_before(student_list, 2001)

# ----------------------------- COMMENTS -----------------------------
# 1. create_student_list() initializes a list of student records (ID, Name, DOB, Major).
# 2. show_all_students() prints all student details in a nicely formatted layout.
# 3. search_students_by_major() filters and prints students with a given major.
# 4. compute_student_ages() calculates each student's age based on the current date.
# 5. students_born_before() lists all students born before a specified year.
