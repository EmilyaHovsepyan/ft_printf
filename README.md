# ft_printf

![42 Project](https://img.shields.io/badge/42%20School-Project-blue)
![Language](https://img.shields.io/badge/language-C-informational)
![License](https://img.shields.io/badge/status-Completed-success)

> Custom implementation of the standard C `printf` function, developed as part of the 42 School curriculum.  
> This project deepens knowledge of variadic functions, formatting, and memory management by reproducing the behavior of `printf`.
---

## Project Overview

`ft_printf` aims to replicate the behavior of the C standard library function `printf`. It supports multiple conversion specifiers, flags, and ensures robust and efficient output formatting. The project strengthens understanding of variadic arguments, string manipulation, and modular C programming following 42 norms.

## Features

- Handles format specifiers:
  - `%c` — character
  - `%s` — string
  - `%p` — pointer (hexadecimal)
  - `%d` / `%i` — signed decimal integers
  - `%u` — unsigned decimal integers
  - `%x` / `%X` — hexadecimal (lowercase / uppercase)
  - `%%` — percent sign literal
- Properly parses and applies flags and field widths where applicable
- Uses variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
- Memory-safe and norm-compliant code
- Modular design for maintainability and clarity

## 📄 Subject PDF
You can read the full subject [here](subject.pdf).

## Usage

### Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/ft_printf.git
cd ft_printf

