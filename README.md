# camera-cropper with cover & pinch to zoom
- Requirements 
1) Cordova Camera Plugin.
2) iOS version > 3.5.0

# Installation:
- Download the zip from repository.
- Add plugin to your cordova project via terminal command - $ cordova plugin add /path-to-plugin/plugin-1-crop-cover 
- Add ios platform - $  cordova platform add ios
- Now build your project - $ cordova build ios

# Implementation:
- call the following method :

-  plugins.crop(function success(data) {},function fail(err) {}, imageData, { quality: 100 , cropType: 1 or 2});

- cropType 1 Screenshot :

![preview](https://user-images.githubusercontent.com/24712232/28715889-e14fceaa-73b7-11e7-8141-41e82c77b68e.jpeg)

- cropType 2 Screenshot :

![plugin4](https://user-images.githubusercontent.com/24712232/30471273-bf407664-9a15-11e7-9702-87ba6a52923f.jpeg)
![plugin1](https://user-images.githubusercontent.com/24712232/30470807-e04f2320-9a13-11e7-8eea-762c91b9dc82.jpeg)

- imageData - Image to be Cropped , quality default value : 100 (10-100)
- success(data) - will return the image in BASE64 format.

- Final , build your project & run in XCODE IDE.

# Credits:

Terasol Technologies Pvt Ltd.
http://www.terasoltechnologies.com
# plugin-1-crop-cover
