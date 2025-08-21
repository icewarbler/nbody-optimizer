# nbody-optimizer 

A C++ simulation of gravitational forces between hundreds or thousands of particles, with Python scripts for analysis and visualization.

## Overview

This project simulates N-body gravitational interactions:

- **Physics & Simulation**: implemented in C++
- **Visualization & Analysis**: Python scripts for plotting and animation
- **Alogirhtms**:
    - Start with a naive $O(n^2)$ Runge-Kutta integrator
    - Later optimizz using the Barnes-Hut algorithm for $O(N\text{log } N)$ runtime

## Features (planned)

- Configurable number of particles, timesteps, and time step size
- Output particle positions/velocities per timestep to CSV
- Python scripts to visualize trajectories and energy evolution
- Modular design: reusable physics library

## Getting Started 

### Build Instructions

```bash
git clone https://github.com/icewarbler/nbody-optimizer.git
cd nbody-optimizer
mkdir build && cd build
cmake ..
cmake --build .
./nbody
```