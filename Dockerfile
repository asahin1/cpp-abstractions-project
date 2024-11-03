# Use an official C++ image with development tools
FROM gcc:latest

# Install CMake and other dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* # Clear the apt cache to reduce image size

# Set the working directory inside the container
WORKDIR /usr/src/app

# Copy the entire project into the container
COPY . .

# Create and set up the build directory
RUN mkdir build && cd build && cmake .. && make
