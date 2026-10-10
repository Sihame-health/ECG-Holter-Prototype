# 🩺 Portable ECG Holter System (Prototype)

This repository contains the hardware design, firmware, and mobile application for a **Portable ECG Holter System prototype**, developed as a Bachelor's Degree Final Project (Projet de Fin d'Études - PFE) in Biomedical Equipment Maintenance at the Higher School of Technology of Fez (ESTF)

---

## 📌 Project Overview & Objectives
Cardiovascular diseases are a leading cause of global mortality. Continuous ambulatory monitoring (Holter ECG) is crucial for detecting sporadic arrhythmias that standard short ECGs miss. 

The initial goal of this project was to design a complete ambulatory Holter device capable of recording and storing 24-hour ECG data on a patient's smartphone. However, due to scope and time constraints, the current prototype focuses on:
1. Signal acquisition and analog conditioning (preamplification, filtering, and right-leg driver protection).
2. Real-time wireless transmission via Bluetooth to an Android application built with MIT App Inventor.
3. Real-time waveform visualization on the mobile screen rather than local 24-hour file storage.

---
## ⚠️ Project Limitations
While the hardware filtering chain and wireless transmission were successfully designed, the current prototype has the following limitations:
1. **No Real-Subject Testing:** Due to practical and safety constraints, live clinical testing with human electrodes and subjects was not performed; instead, validation tests were conducted on the bench using a function generator (GBF) to simulate bio-signals.
2. **No Local Storage:** Although the original aim included long-term data logging, the current software implementation is restricted to real-time waveform display on the smartphone interface rather than saving 24-hour recordings persistently.

---

## ⚙️ Hardware Architecture & Testing Limits

* **Preamplification:** An **AD620** instrumentation amplifier boosts low-level biosignals with high Common-Mode Rejection.
* **Filtering & Safety:** Includes a **TL071** right-leg driver circuit for patient safety and an **LM741** notch filter targeting 50Hz power line interference.
* **Processing & Transmission:** An **Arduino Uno** paired with a Bluetooth module streams the processed signal.
* **Testing Conditions:** Due to practical constraints, real-world clinical testing with human electrodes was not performed. Instead, bench-level testing and validation were successfully conducted using a **Function Generator (GBF)** to simulate biosignals.

---

## 📂 Repository Structure
```text
📂 PFE-Holter-ECG
├── 📂 hardware         # Proteus schematics, PCB layouts, and manufacturing files (typons)
├── 📂 firmware         # Arduino source code for data acquisition and Bluetooth transmission
├── 📂 software         # MIT App Inventor source (.aia) and compiled Android app (.apk)
└── 📂 docs             # Complete PFE technical report (PDF)
