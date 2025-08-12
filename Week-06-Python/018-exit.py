import sys

if (len(sys.argv) != 2):
    print("Missing Command Line Argument!")
    sys.exit(1)

print(f"Hello, {sys.argv[1]}")
sys.exit(0)