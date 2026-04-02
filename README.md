# Unit Converter

A lightweight command-line unit converter written in C. It supports conversions across three categories: temperature, currency, and mass.

## Features

- **Temperature** — Fahrenheit ↔ Celsius
- **Currency** — Kenyan Shilling (KSH) to USD, Euro, or Japanese Yen
- **Mass** — Ounces or Grams to Pounds

## Getting Started

### Prerequisites

A C compiler such as `gcc`.

### Build

```bash
gcc cConverter.c -o converter
```

### Run

```bash
./converter
```

## Usage

The program guides you step by step through the conversion:

1. Select a category: `t` (Temperature), `c` (Currency), or `m` (Mass)
2. Select a specific conversion from the sub-menu
3. Enter the value to convert
4. The result is printed to the console

### Example

```
Welcome to the Unit Converter!
Please select a category for conversion:
Enter 't' for Temperature conversion
Enter 'c' for Currency conversion
Enter 'm' for Mass conversion
Enter your choice (t/c/m): t

You have selected Temperature conversion.
Enter 1 for Fahrenheit to Celsius
Enter 2 for Celsius to Fahrenheit
Enter your choice (1/2): 1

Enter temperature in Fahrenheit: 98
Temperature in Celsius: 36
```

## Conversion Rates

| Conversion         | Rate used             |
|--------------------|-----------------------|
| KSH → USD          | 1 USD = 110 KSH       |
| KSH → Euro         | 1 EUR = 130 KSH       |
| KSH → Japanese Yen | 1 JPY = 1.2 KSH       |
| Ounce → Pound      | 1 lb = 16 oz          |
| Gram → Pound       | 1 lb = 453.592 g      |

> **Note:** Currency rates are hardcoded and may not reflect current market values.

## Limitations

- Accepts only integer inputs (decimal values are truncated)
- Currency conversion results are also stored as integers internally, which may cause minor rounding loss
- Only one conversion is performed per run; restart the program for another
