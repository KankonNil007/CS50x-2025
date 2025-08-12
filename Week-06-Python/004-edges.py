from PIL import Image, ImageFilter

before = Image.open("Week-06-Python/bridge.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("Week-06-Python/out.bmp")