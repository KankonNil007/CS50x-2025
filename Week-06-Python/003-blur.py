from PIL import Image, ImageFilter

before = Image.open("Week-06-Python/bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("Week-06-Python/out.bmp")