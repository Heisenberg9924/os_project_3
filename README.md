# 🚀 my_ps — Custom Linux Command (Process Viewer)

## 📌 Overview

**my_ps** is a simple C program that behaves like a Linux command. It merges the outputs of two process-monitoring commands into one combined view:

* **`ps aux`** → Shows running processes with CPU, memory, user, and command details
* **`ps -eLf`** → Shows process + thread-level information

The program collects both outputs, stores them in files, merges them, and prints the result in the terminal.

---

## ⚙️ What Happens When You Run `my_ps`

When you type `my_ps` in the terminal:

1. The program runs:

   * `ps aux`
   * `ps -eLf`
2. Their outputs are saved into:

   * `x1.txt`
   * `x2.txt`
3. Both files are merged into:

   * `merged.txt`
4. The combined result is displayed on the terminal.

This gives you process info + thread info together in one place.

---

## 📂 Files Generated

* **x1.txt** → Output of `ps aux`
* **x2.txt** → Output of `ps -eLf`
* **merged.txt** → Final combined output

---

## 🛠️ Prerequisites

Make sure you have:

* Linux / WSL environment
* GCC compiler installed

Install GCC if needed:

```bash
sudo apt update
sudo apt install build-essential
```

---

## 🔧 Compilation

Compile the program using:

```bash
gcc my_ps.c -o my_ps
```

---

## ▶️ Run as a Normal Program

```bash
./my_ps
```

---

## 💻 Make It Behave Like a Real Linux Command

Move the compiled file to a system PATH directory:

```bash
sudo mv my_ps /usr/local/bin/
sudo chmod +x /usr/local/bin/my_ps
```

Now you can run it from anywhere like a built-in command:

```bash
my_ps
```

(No `./` needed anymore.)

---

## 🧠 Concepts Used

This assignment demonstrates:

* Use of **`system()`** to execute Linux commands
* Basic **file handling in C**:

  * `fopen()`
  * `fgetc()`
  * `fputc()`
  * `fprintf()`
  * `fclose()`
* Creating a **user-defined Linux command**
* Working with **process information in Linux**

---

## 📖 Expected Output

The terminal will show:

* First section → Output of `ps aux`
* Second section → Output of `ps -eLf`

Both combined and printed from `merged.txt`.

---

## 👨‍💻 Contributors

* **RUPDEEP RAY (24CS8023)**

* NIJAMPUDI RAM CHARAN (24CS8024)
* Hemant Saini (24CS8030)
