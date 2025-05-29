# EchoForge: A 2D Cooperative Puzzle Game

## Overview
EchoForge is a unique 2D cooperative puzzle game built in C++ using the SFML library. Players control two characters whose movements are mirrored across a central axis, requiring synchronized actions to navigate obstacles and activate switches to reach the level's exit. The game blends cooperative mechanics with spatial puzzle-solving, offering a fresh experience distinct from traditional puzzle or platformer games.

This open-source project is designed for developers, gamers, and educators interested in C++ game development, cooperative mechanics, and innovative puzzle design. By sponsoring EchoForge via GitHub Sponsors, you support new features, level designs, and educational resources for the community.

## Features
- **Mirrored Movement**: Control two characters with mirrored inputs, requiring precise coordination.
- **Environmental Puzzles**: Solve puzzles by activating switches and navigating obstacles in sync.
- **Minimalist Visuals**: Clean 2D graphics with distinct character and environment designs.
- **Cross-Platform**: Runs on Windows, macOS, and Linux via SFML.
- **Modular Codebase**: Well-structured C++ code for easy extension and learning.

## Getting Started

### Prerequisites
- **C++ Compiler**: GCC, Clang, or MSVC with C++17 support.
- **SFML Library**: Version 2.5.1 or later (install via [SFML's official site](https://www.sfml-dev.org/) or package manager).
- **CMake**: Version 3.10 or later for building.

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/echoforge.git
   cd echoforge
   ```
2. Create a build directory:
   ```bash
   mkdir build && cd build
   ```
3. Configure with CMake:
   ```bash
   cmake ..
   ```
4. Build the project:
   ```bash
   cmake --build .
   ```
5. Run the game:
   ```bash
   ./EchoForge
   ```

## Gameplay
- **Objective**: Guide both characters to the exit by solving puzzles through synchronized movement.
- **Controls**:
  - **WASD**: Move the primary character (secondary character mirrors across the central axis).
  - **Space**: Interact with switches (both characters must align with switches).
  - **R**: Reset the level.
  - **Esc**: Pause or exit.
- **Mechanics**: The primary character’s movements are mirrored by the secondary character across the screen’s vertical axis. Coordinate movements to avoid obstacles and activate switches simultaneously.

## Project Structure
- `src/main.cpp`: Game entry point and main loop.
- `src/Entity.hpp`: Base class for game entities (characters, switches, exit).
- `src/Game.hpp`: Core game logic, mirrored movement, and rendering.
- `assets/`: Placeholder for textures/fonts (add your own or use SFML defaults).

## Contributing
Contributions are welcome! Fork the repo, create a feature branch, and submit a pull request. For major changes, open an issue to discuss your ideas.

## Sponsorship
Support EchoForge’s development through [GitHub Sponsors](https://github.com/sponsors/yourusername)! Your contributions fund:
- New puzzle levels and cooperative mechanics.
- Enhanced movement and interaction systems.
- Tutorials for C++ and game development.
- Optimizations for broader platform support.

## License
Licensed under the MIT License. See [LICENSE](LICENSE) for details.

## Acknowledgments
- Built with [SFML](https://www.sfml-dev.org/) for graphics and input.
- Inspired by cooperative puzzle games and mirrored mechanics.
- Thanks to the open-source community for feedback and inspiration.

---

**Sponsor EchoForge to forge new paths in cooperative gaming!**