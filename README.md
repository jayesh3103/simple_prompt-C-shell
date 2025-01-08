# simple_prompt-C-shell

Welcome to **simple_prompt-C-shell**! 🚀 A simple, custom shell implementation written in C to mimic basic shell functionalities. This project aims to provide a minimalist yet functional command-line interface for users, allowing them to explore the internal workings of a shell.

---

## 📖 Overview
The `simple_prompt-C-shell` is a lightweight shell program that supports basic commands and offers a clean and educational approach for understanding shell mechanics. It executes user commands interactively and manages processes efficiently.

---

## ✨ Features
- **Interactive Command Line:** Accepts user input dynamically.
- **Command Execution:** Executes built-in and system commands like `ls`, `cd`, `pwd`, etc.
- **Process Management:** Handles foreground and background processes.
- **Custom Prompt:** A personalized prompt for the shell experience.
- **Error Handling:** Provides informative error messages.
- **Expandable Codebase:** Easy to modify and add new features.

---

## 🛠️ Setup

### Prerequisites
- GCC compiler (or any C compiler)
- A Unix-based system (Linux/MacOS/WSL on Windows)

### Installation Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/jayesh3103/simple_prompt-C-shell.git
   ```

2. Navigate to the project directory:
   ```bash
   cd simple_prompt-C-shell
   ```

3. Compile the code:
   ```bash
   gcc -o simple_shell shell.c
   ```

4. Run the shell:
   ```bash
   ./simple_shell
   ```

---

## 🧑‍💻 Usage
1. Launch the shell by running the compiled executable.
2. Type commands like `ls`, `pwd`, `cd`, etc., and hit **Enter**.
3. To run a background process, append `&` to the command, e.g., `sleep 10 &`.
4. Type `exit` to leave the shell.

---

## 🗂️ File Structure
```
├── shell.c         # Main source code file
├── README.md       # Documentation file
└── Makefile        # Optional: For easy build and cleanup
```

---

## 🌟 Example Session
```shell
$ ./simple_shell
[simple_shell]> pwd
/home/user/simple_prompt-C-shell
[simple_shell]> ls
README.md  shell.c  simple_shell
[simple_shell]> cd ..
[simple_shell]> exit
Goodbye! 👋
```

---

## 🚀 Roadmap
Future improvements and features:
- Add piping and redirection support.
- Implement a history feature.
- Enhance built-in command support.

---

## 🤝 Contributing
Contributions are always welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch-name`).
3. Make your changes and commit them (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature-branch-name`).
5. Open a Pull Request.

---

## 🛡️ License
This project is licensed under the MIT License. Feel free to use, modify, and distribute it as you wish.

---

## 🙌 Acknowledgements
Special thanks to:
- **C programming community** for inspiring this project.
- **Unix/Linux pioneers** for their groundbreaking work in shell development.

---

## 📧 Contact
For any inquiries or suggestions, feel free to reach out:
- **Name:** Jayesh Muley
- **Email:** mr.jayeshvmuley@gmail.com
- **GitHub:** [GitHub Profile](https://github.com/jayesh3103)

---

Happy coding! 🎉
