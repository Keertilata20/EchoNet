# 🕸️ EchoNet  
### Graph-Based Social Information Spread Simulator

EchoNet is a C++ simulation project that models how information and rumors spread through realistic social networks.

Unlike simple random-spread models, EchoNet represents social systems with clusters, influencers, and individual behavioral traits. People in the network do not instantly believe information. Instead, belief develops through repeated exposure, trust, skepticism, and social influence.

The project explores how ideas propagate, amplify, or fade across connected communities.

---

## ✨ Features

- Graph-based social network simulation
- Community clusters and friend groups
- Influencer nodes with higher reach
- Repeated-exposure belief model
- Personality traits such as:
  - Trust
  - Skepticism
  - Influence
  - Activity level
- Probabilistic rumor spreading
- Terminal-based simulation output
- Time-step driven propagation analysis

---

## 🧠 Simulation Model

Each person in the network acts as a node with unique behavioral characteristics.

### Possible States

- Unaware
- Considering
- Believer
- Sharer
- Rejector

A sensational rumor begins at one or more nodes and spreads through social connections. Individuals evaluate information based on their personality traits and exposure history.

The simulation tracks:

- Spread speed
- Belief formation
- Influencer impact
- Rumor lifespan
- Network-wide outcomes

---

## ⚙️ Tech Stack

- **Language:** C++
- **Concepts:** Graphs, OOP, Probability, Network Dynamics
- **Interface:** Terminal (V1)

---

## 📁 Project Structure

```text
EchoNet/
│
├── src/
│   ├── Person.cpp
│   ├── Network.cpp
│   ├── Rumor.cpp
│   ├── Simulation.cpp
│
├── include/
│   ├── Person.h
│   ├── Network.h
│   ├── Rumor.h
│   ├── Simulation.h
│
├── data/
│
├── README.md
└── main.cpp
```

---

## 🚀 Future Improvements

- Visual graph simulation
- Competing information / fact-checking
- Advanced social network generation
- Data export and analytics
- Interactive parameter tuning

---

## 🌐 Vision

*EchoNet explores a simple question:*  

**How do ideas echo through networks of people?**