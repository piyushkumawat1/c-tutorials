# import itertools
# from PyPDF2 import PdfReader

# # Function to attempt to open the PDF with the given password
# def try_password(pdf_reader, password):
#     try:
#         if pdf_reader.decrypt(password) == 1:
#             print(f"Password found: {password}")
#             return True
#     except Exception as e:
#         print(f"Error with password {password}: {str(e)}")
#     return False

# # Brute-force attack
# def brute_force_pdf(pdf_path):
#     # Define character and number sets
#     characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
#     numbers = "0123456789"

#     # Load the PDF
#     pdf_reader = PdfReader(open(pdf_path, "rb"))

#     # Generate all possible 8-character passwords
#     for combo in itertools.product(characters, repeat=4):
#         for num_combo in itertools.product(numbers, repeat=4):
#             # Combine characters and numbers to form a password
#             password = ''.join(combo) + ''.join(num_combo)
#             print(f"Trying password: {password}")
#             if try_password(pdf_reader, password):
#                 return

#     print("Password not found.")

# # Usage example:
# pdf_path = '/Users/mac/Downloads/beginner_python_projects_full.pdf'
# brute_force_pdf(pdf_path)
# "There is nothing to say me that why i am here to say there java s"
numbers = [1,2,3,4,5,6]
def is_even(x) :
    return x%2 ==0
result = list(filter(is_even,numbers))
print(result)