# AUTOSAR-Compliant Blind Spot Monitoring System

A comprehensive blind spot monitoring system implementation using MATLAB/Simulink with full AUTOSAR compliance, developed for safety-critical automotive applications.

## 🎯 Project Overview

This project demonstrates a complete development cycle for an AUTOSAR-compliant blind spot monitoring system, including:

- Component-based architecture with 4 Software Components (SWCs)
- Advanced temporal logic for warning hold/suppression
- AUTOSAR RTE interfaces and ARXML generation
- Comprehensive simulation-based testing
- Full documentation and test reports

## 🏗️ System Architecture

### Software Components (SWCs)

1. **RadarSensorSWC** - Simulates radar sensors for vehicle detection
2. **VehicleStatusSWC** - Provides vehicle status information (speed, turn signals)
3. **BlindSpotLogicSWC** - Core logic with advanced temporal processing
4. **WarningDisplaySWC** - Visual warning indicators and dashboard

### System Composition

The system is integrated through a top-level composition (`BlindSpotComposition`) that orchestrates all SWCs via Referenced Models with proper AUTOSAR RTE interfaces.

## 📁 File Structure

```
├── BlindSpotDetection/
│   ├── BlindSpotComposition.slx           # Main system composition
│   ├── BlindSpotLogicSWC.slx             # Core blind spot logic
│   ├── RadarSensorSWC.slx                # Radar sensor simulation
│   ├── VehicleStatusSWC.slx              # Vehicle status provider
│   ├── WarningDisplaySWC.slx             # Warning display system
│   ├── BlindSpotDataTypes.sldd           # Shared data dictionary
│   └── *_autosar_rtw/                    # Generated ARXML files
├── Screenshots/
│   ├── composition.png                    # System composition view
│   ├── swc-logic.png                     # BlindSpotLogicSWC
│   ├── swc-radarsensor.png              # RadarSensorSWC
│   ├── swc-vehiclestatus.png            # VehicleStatusSWC
│   ├── swc-warningdisplay.png           # WarningDisplaySWC
│   └── testing/                          # Test execution screenshots
├── report.pdf                            # Technical documentation
└── test_results.pdf                      # Testing results
```

## 🔧 Key Features

### Advanced Temporal Logic

- **2-second warning hold mechanism** using Simulink Extender blocks
- **Immediate reset capability** when turn signals are deactivated
- **Enum-to-boolean conversion** for turn signal integration (NONE=0, LEFT=1, RIGHT=2)

### AUTOSAR Compliance

- **RTE interfaces** for inter-component communication
- **ARXML generation** for system integration
- **Standardized component architecture** following AUTOSAR guidelines

### Testing & Validation

- **Manual test controls** for interactive simulation
- **Comprehensive test suite** with 100% success rate
- **Real-time demonstration** capabilities
- **Visual feedback** through dashboard indicators

## 🚀 Getting Started

### Prerequisites

- MATLAB R2019b or later
- Simulink
- Embedded Coder
- AUTOSAR Blockset

### Installation & Setup

1. **Clone the repository**

   ```bash
   git clone https://github.com/yourusername/AUTOSAR-BlindSpotMonitoring.git
   cd AUTOSAR-BlindSpotMonitoring
   ```

2. **Open MATLAB and navigate to the project directory**

3. **Load the main composition**

   ```matlab
   open('BlindSpotDetection/BlindSpotComposition.slx')
   ```

4. **Configure sample time (if needed)**
   - All models are configured for 0.1s fixed-step discrete simulation

### Running the System

1. **Interactive Simulation**

   - Open `BlindSpotComposition.slx`
   - Use manual switches for real-time testing
   - Monitor dashboard indicators for visual feedback

2. **Automated Testing**
   - Execute the comprehensive test suite
   - Review results in `test_results.pdf`

## 📊 System Specifications

| Parameter               | Value                            |
| ----------------------- | -------------------------------- |
| Sample Time             | 0.1s (fixed-step discrete)       |
| Warning Hold Duration   | 2 seconds                        |
| Turn Signal Integration | Enum-based (NONE/LEFT/RIGHT)     |
| Radar Detection Range   | Configurable via manual controls |
| System Response Time    | < 100ms                          |

## 🧪 Testing Results

The system has been thoroughly tested with:

- **100% test success rate**
- **Comprehensive scenario coverage**
- **Real-time performance validation**
- **AUTOSAR compliance verification**

Detailed results are available in [`test_results.pdf`](./test_results.pdf).

## 📄 Documentation

### Technical Report

Comprehensive technical documentation is available in [`report.pdf`](./report.pdf), covering:

- System requirements and architecture
- Implementation details
- AUTOSAR compliance analysis
- Performance evaluation
- Future enhancement recommendations

### Screenshots

Visual documentation of all system components and testing phases:

- [System Composition](./Screenshots/composition.png)
- [BlindSpotLogicSWC](./Screenshots/swc-logic.png)
- [RadarSensorSWC](./Screenshots/swc-radarsensor.png)
- [VehicleStatusSWC](./Screenshots/swc-vehiclestatus.png)
- [WarningDisplaySWC](./Screenshots/swc-warningdisplay.png)

## 🔄 Development Methodology

This project follows a complete automotive software development cycle:

1. **Requirements Analysis** - Safety-critical system requirements
2. **Architecture Design** - AUTOSAR-compliant component architecture
3. **Implementation** - Simulink model development
4. **Integration** - System composition and interface definition
5. **Testing** - Comprehensive simulation-based validation
6. **Documentation** - Technical reports and user guides

## 🛠️ Technical Highlights

### Temporal Logic Implementation

```
Hold Logic: Warning active for 2 seconds after detection
Reset Logic: Immediate reset when turn signal deactivated
State Management: Enum-to-boolean conversion for robust control
```

### AUTOSAR Integration

- **RTE Interface Generation** - Automatic interface creation
- **ARXML Export** - Standard-compliant system description
- **Component Composition** - Modular, reusable architecture

## 🚗 Real-World Applications

This system design is suitable for:

- **Production vehicles** with AUTOSAR-based ECUs
- **Advanced Driver Assistance Systems (ADAS)**
- **Safety-critical automotive applications**
- **Research and development** in autonomous vehicles

## 📈 Future Enhancements

- Integration with camera-based object detection
- Machine learning-based vehicle classification
- Multi-sensor fusion capabilities
- Over-the-air update mechanisms
- ISO 26262 functional safety compliance

## 👥 Contributing

This project was developed as part of advanced automotive software architecture coursework. For questions or contributions, please refer to the technical documentation.

## 📜 License

This project is developed for educational and research purposes under the [MIT License](LICENSE). AUTOSAR and MATLAB licenses are owned by their respective parties. All rights reserved.

[MIT License](https://opensource.org/licenses/MIT)

---

**Note**: This project demonstrates advanced automotive software engineering principles and AUTOSAR compliance for safety-critical systems. All implementations follow industry best practices and standards.
