🚀 NOVA AI Assistant (C++)

«A modular, extensible, terminal-based AI assistant built in C++ with a scalable architecture.»

---

🧠 Overview

NOVA is a lightweight, local AI assistant designed with a clean modular architecture.
It simulates intelligent behavior using intent detection, memory handling, and skill-based execution.

This project demonstrates system design, modular coding, and real-world C++ structuring — making it perfect for showcasing on GitHub.

---

✨ Features

- 💬 Interactive CLI-based assistant
- 🧠 Memory system (stores interactions locally)
- ⚡ Intent detection engine
- 🧩 Modular skill system (system, web, utility)
- 🌐 Open websites via commands
- 📊 System information retrieval
- 📝 Logging of conversations
- 🔌 Easily extendable architecture

---

📁 Project Structure

nova-cpp/
│
├── main.cpp
├── CMakeLists.txt
│
├── core/
│   ├── Brain.cpp / Brain.h
│   ├── Intent.cpp / Intent.h
│   ├── Memory.cpp / Memory.h
│
├── skills/
│   ├── System.cpp / System.h
│   ├── Web.cpp / Web.h
│   ├── Utility.cpp / Utility.h
│
├── utils/
│   ├── Logger.cpp / Logger.h
│
└── data/
    └── memory.txt

---

⚙️ Installation & Setup

1. Clone the Repository

git clone https://github.com/yourusername/nova-cpp.git
cd nova-cpp

2. Build with CMake

mkdir build
cd build
cmake ..
make

3. Run the Assistant

./nova

---

💻 Usage

Example commands you can try:

time
open youtube
system info
memory
clear memory
exit

---

🧠 How It Works

🔹 Brain Module

Handles user input and routes it based on detected intent.

🔹 Intent Engine

Simple NLP-like keyword detection system.

🔹 Memory System

Stores and retrieves past interactions locally.

🔹 Skills Layer

Each capability is separated into modules:

- "System" → OS & hardware info
- "Web" → Open websites
- "Utility" → Time & helper functions

---

🔧 Future Improvements

- 🤖 Integrate real AI APIs (LLMs)
- 🎤 Voice input/output
- 🖥 GUI (Qt or Web dashboard)
- ⚡ Async task execution
- 🧠 Smarter NLP (custom parser / ML model)

---

📸 Demo (Optional)

Add a GIF or screenshot here to make your repo look more attractive

---

🤝 Contributing

Contributions are welcome!
Feel free to fork the repo and submit a pull request.

---

📜 License

This project is licensed under the MIT License.

---

👨‍💻 Author

Your Name
GitHub: https://github.com/rohitvxrma77

---

⭐ Support

If you like this project, give it a ⭐ on GitHub!
