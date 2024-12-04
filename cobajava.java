<!DOCTYPE html>
<html>
<head>
    <title>Kalkulator Persegi Panjang</title>
</head>
<body>
    <h1>Kalkulator Persegi Panjang</h1>
    <label for="panjang">Panjang:</label>
    <input type="number" id="panjang" required>
    <br>
    <label for="lebar">Lebar:</label>
    <input type="number" id="lebar" required>
    <br>
    <button onclick="hitungLuasKeliling()">Hitung</button>
    <br>
    <p id="hasil"></p>

    <script src="script.js"></script>
</body>
</html>