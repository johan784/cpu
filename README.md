# HolyCore
*A 32-bit RV32I RISC-V Processor Designed from Scratch in SystemVerilog*

![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Language](https://img.shields.io/badge/SystemVerilog-HDL-green)
![Status](https://img.shields.io/badge/Status-In%20Development-orange)

---

# Overview

HolyCore is a custom 32-bit RISC-V (RV32I) processor designed entirely in SystemVerilog.

The goal of this project is not only to implement a working processor, but to deeply understand every layer of modern computer architecture—from instruction decoding and datapaths to cache hierarchies, AXI buses, MMIO peripherals and FPGA deployment.

Rather than relying on existing processor cores, HolyCore is being developed module-by-module with extensive simulation, verification and documentation.

The project is currently verified using Cocotb + Verilator and is being ported to the Digilent Nexys4 DDR FPGA.

---

# Project Goals

- Implement a complete RV32I processor
- Modular hardware architecture
- Fully synthesizable SystemVerilog
- FPGA deployment
- AXI compatible memory subsystem
- Custom cache hierarchy
- MMIO peripheral support
- Extensive verification using Cocotb
- Educational documentation explaining every design decision

---

# Current Features

- RV32I Instruction Set
- Register File
- ALU
- Control Unit
- Immediate Generator
- Instruction Memory
- Data Memory
- Branch Logic
- Jump Instructions
- Cocotb Verification
- FPGA Bring-up

---

# Planned Features

- HolyCache
- MMIO Support
- AXI4 Interface
- AXI-Lite Adapter
- UART
- GPIO
- Timer Peripheral
- Interrupt Support
- CSR Implementation
- External DDR Memory
- Performance Counters
- Pipeline
- Branch Prediction

---

# Processor Architecture

(Add architecture block diagram here)

```
                    +----------------------+
                    |      HolyCore        |
                    +----------+-----------+
                               |
                 +-------------+-------------+
                 |                           |
           Instruction Memory         Data Memory
                 |                           |
          +------+-------+          +--------+-------+
          | Control Unit |          | HolyCache      |
          +------+-------+          +--------+-------+
                 |                           |
          +------+-------+          +--------+-------+
          | Register File|          | AXI Interface  |
          +------+-------+          +--------+-------+
                 |                           |
                 +-------------+-------------+
                               |
                             ALU
```

---

# Datapath

(Add datapath image here)

The datapath forms the computational backbone of HolyCore.

Responsibilities:

- Instruction Fetch
- Decode
- Execute
- Memory Access
- Write Back

Important Components:

- Program Counter
- ALU
- Immediate Generator
- Register File
- Branch Logic
- Multiplexers

Design Philosophy:

Rather than optimizing aggressively, the datapath prioritizes readability and modularity so each stage can be independently verified.

---

# Control Unit

The control unit decodes every instruction and generates the control signals required by the datapath.

Outputs include:

- ALU Control
- Register Write Enable
- Memory Write Enable
- Branch
- Jump
- ALU Source Select
- Immediate Source
- Writeback Source

Supported Instructions:

(Add instruction table later)

---

# ALU

The ALU performs all arithmetic and logical operations.

Supported operations include:

- ADD
- SUB
- XOR
- OR
- AND
- SLL
- SRL
- SRA
- SLT
- SLTU

Outputs:

- Result
- Zero Flag
- Sign Flag

---

# Register File

32 General Purpose Registers

- Dual Read Ports
- Single Write Port
- x0 hardwired to zero

Supports simultaneous reads and single-cycle writeback.

---

# Immediate Generator

Supports all RV32I immediate formats:

- I-Type
- S-Type
- B-Type
- U-Type
- J-Type

Responsible for sign extension and immediate decoding.

---

# Instruction Memory

Current implementation:

- Local memory initialized using HEX files

Future:

- AXI Memory
- DDR Interface

---

# Data Memory

Current implementation:

- Simple word-addressable memory

Future:

- Cache hierarchy
- MMIO
- AXI

---

# HolyCache

(Currently under development)

Goals:

- Direct Mapped Cache
- Write Back
- Dirty Bits
- Valid Bits
- Miss Handling
- MMIO Bypass

Future upgrades:

- Set Associative
- Victim Cache
- Prefetching

---

# MMIO

Memory Mapped IO allows peripherals to appear as normal memory addresses.

Example:

```
0x00000000 - RAM

0x40000000 - UART

0x40000004 - LEDs

0x40000008 - Switches
```

MMIO accesses bypass cache to ensure peripherals always receive immediate transactions.

---

# AXI Architecture

(Add AXI block diagram)

HolyCore is designed around an AXI-based memory subsystem.

Current roadmap:

CPU

↓

HolyCache

↓

AXI Master

↓

AXI Interconnect

↓

DDR Memory

↓

AXI-Lite Peripherals

---

# AXI-Lite Adapter

One interesting challenge during development was interfacing a burst-capable AXI master with simple AXI-Lite peripherals.

Since AXI-Lite does not support burst transactions, an adapter converts each burst into multiple independent single transactions.

Example:

CPU requests:

Read 8 words

↓

Adapter performs

Read Word 1

Read Word 2

Read Word 3

...

Read Word 8

↓

Returns burst back to CPU

For MMIO devices this conversion is usually unnecessary because MMIO accesses are intentionally generated as single-beat transactions.

---

# FPGA Deployment

Target Board

Digilent Nexys4 DDR

Current Status

- Vivado Project Created
- Synthesis Successful
- FPGA Communication Verified
- LED Test Successful

Next milestone:

Execute HolyCore on FPGA and expose Program Counter through onboard LEDs.

---

# Verification

Simulation:

- Verilator
- Cocotb

Tested Components:

- ALU
- Register File
- Immediate Generator
- Control Unit
- CPU Integration
- HolyCache (ongoing)

Waveforms generated using VCD.

---

# Major Challenges

## Designing a Cache

The cache required handling:

- Hits
- Misses
- Dirty Lines
- Writeback
- MMIO Bypass

The solution was to build the cache independently before integrating AXI.

---

## AXI Integration

Challenge:

AXI supports burst transactions while peripherals generally expect single accesses.

Solution:

Introduce a lightweight AXI → AXI-Lite bridge responsible for transaction splitting.

---

## FPGA Bring-up

Initial FPGA deployment focused on verifying:

- Toolchain
- Constraints
- Clock generation
- Programming flow
- LED output

This incremental approach isolates hardware issues before introducing the CPU.

---

# Future Roadmap

Phase 1

- Stable RV32I Core

Phase 2

- HolyCache

Phase 3

- MMIO

Phase 4

- AXI Bus

Phase 5

- UART Console

Phase 6

- External DDR Memory

Phase 7

- Pipeline

Phase 8

- Interrupts

Phase 9

- Performance Optimization

---

# References

- RISC-V ISA Specification
- ARM AMBA AXI4 Specification
- Digilent Nexys4 DDR Documentation
- Verilator
- Cocotb

---

# Author

Johan Anil

Electronics and Communication Engineering

HolyCore is an educational processor project built to explore modern processor architecture from first principles.
