# Task-aware-Framework-using-Machine-Learning-for-Long-lasting-Green-IoT-Sensing-Devices
This is an open source code used in the experiments and evaluations of our paper "Sensing Information-aware Framework using Machine Learning for Long-lasting Green IoT Sensing Devices". A detailed specifications of the repository is presented below. 

## About
The source code aims to implement a time-series prediction neural network model onto a Bluetooth Low Energy beacon hardware. This implementation is developed for nRF52832 BLE SoC or any nRF52 series equipped with Floating Point Unit (FPU). The code is developed and built on top of nRF SDK 15.3.0. 

## What's included
1. A neural network library implementing deep correlation and attention network: [/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/nn_header/](https://github.com/sbeacon/Task-aware-Framework-using-Machine-Learning-for-Long-lasting-Green-IoT-Sensing-Devices/tree/main/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/nn_header)
2. Example code importing and using the library: [/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/examples/ble_peripheral/ble_app_template/
](https://github.com/sbeacon/Task-aware-Framework-using-Machine-Learning-for-Long-lasting-Green-IoT-Sensing-Devices/tree/main/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/examples/ble_peripheral/ble_app_template)

## User Guideline
### Specifications
- Windows 10
- Keil uVision MDK5 [download here](https://www.keil.com/download/product/)
- nRF52832 or any nRF52 series SoC with FPU
- J-LINK (or nRF52 development kit)
- J-LINK RTT Viewer

### Running Example Code
1. Navigate to [/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/examples/ble_peripheral/ble_app_template/pca10040/s132/arm5_no_packs/](https://github.com/sbeacon/Task-aware-Framework-using-Machine-Learning-for-Long-lasting-Green-IoT-Sensing-Devices/tree/main/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/examples/ble_peripheral/ble_app_template/pca10040/s132/arm5_no_packs)
2. Open [ble_app_template_pca10040_s132.uvprojx](https://github.com/sbeacon/Task-aware-Framework-using-Machine-Learning-for-Long-lasting-Green-IoT-Sensing-Devices/blob/main/nRF5SDK15/nRF5_SDK_15.3.0_59ac345/examples/ble_peripheral/ble_app_template/pca10040/s132/arm5_no_packs/ble_app_template_pca10040_s132.uvprojx)
3. Connect the J-LINK with your nRF chipset (keep them connected at all time)
4. Flash S132 softdevice
5. Compile code
6. Flash code
7. Check device operation through J-LINK RTT Viewer 

## Todo
1. Add nn architecture
2. Add how it works
