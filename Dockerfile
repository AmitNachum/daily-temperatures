
# GCC image
FROM gcc:13

# Set working directory
WORKDIR /app

# COPY Source code
COPY . .


# Run make
RUN make

# Run the program
CMD ["./daily_temp"]
