import qrcode

img = qrcode.make("https://www.google.com/")

img.save("Week-06-Python/QRCode.png", "PNG")