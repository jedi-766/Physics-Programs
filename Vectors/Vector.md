# 2D Vector Addition Calculator

A simple C program that computes the **resultant vector** from two 2D vectors given in polar form (magnitude and direction in degrees).

> ✅ Converts polar → Cartesian → adds components → converts back to polar  
> 📐 Handles all quadrants correctly using `atan2()`  
> 🌐 Output angle normalized to `[0°, 360°)`

---

## 🖥️ Example
```bash
Enter magnitude and angle of vector 1: 5 30
Enter magnitude and angle of vector 2: 3 120

Resultant magnitude: 5.831
Resultant direction: 60.964 degrees
```

---

## 📦 Build & Run

### Requirements
- C compiler (e.g., `gcc`)
- Standard math library (`-lm`)

### Compile
```bash
gcc VectorCalc.c -o VectorCalc -lm
```
### Run [Note: The -lm flag is required to link the math library (sin, cos, atan2, etc.)]
```bash
./vector_add
```
### Code Structure
1. Input: Two vectors as (magnitude, angle_in_degrees)
2. Convert each to Cartesian components:
  x = r * cos(θ_rad)
  y = r * sin(θ_rad)
3. Add components:
  Rx = x1 + x2, Ry = y1 + y2
4. Compute resultant:
  Magnitude: R = √(Rx² + Ry²)
  Direction: θ = atan2(Ry, Rx) → degrees → normalized to [0°, 360°)
5. Uses atan2() for quadrant-safe angle calculation
6. Normalizes negative angles (e.g., -30° → 330°)

### License 
```bash
MIT License — feel free to use, modify, and distribute.
```




   
