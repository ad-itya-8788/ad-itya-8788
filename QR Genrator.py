import qrcode

# URL to access your project
url = "http://192.168.224.5/College%20Project/index1.html"

# Generate and save the QR code
qr = qrcode.make(url)
qr.save("localhost_project_qr.png")
