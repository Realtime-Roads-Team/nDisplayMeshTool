Morgan Skillicorn
Abertay University
Technical Art and VFX 2024/25

nDisplay Static Projection Mesh Procedural Generation Tool for Virtual Production

In a virtual production (VP) setting it is often the case that a curved LED volume is used. Currently Unreal Engine’s nDisplay content projection system only natively supports the creation of flat screens/walls making it difficult to generate the static geometry required to facilitate a VP shoot without the need for complex manual 3D modelling. The plugin I have developed aims to speed up this process considerably allowing the user to generate geometry in seconds that fits the physical LED wall on set.
Project Repository: https://github.com/MorganSkilly/nDisplayMeshTool 
Demonstration Video: https://youtu.be/lXZg8AWq6VU 

LedProduct.h
The LedProduct class inherits the DataAsset class to store important information regarding an individual LED panel. This workflow allows studios to build a catalogue of LED products and ensure that constant referencing of LED technical specifications is not required. Having this data readily available also allows the plugin to scale things like the LED shader to be physically accurate given the pixel pitch, resolution and subpixel layout. The class also contains useful helper functions such as GetAspectRatio().
  
ProceduralNdisplaySection.h
This is the primary class for the plugins procedural content. An LED product is loaded and used to calculate the size and layout of the mesh based on the specified wall setup.
 

Generate Procedural Mesh:
Using the specified parameters generate a procedural mesh component of the LED wall.
Convert To Static Mesh:
Converts the procedural mesh component to a static mesh and saves it to the project.
Auto Update:
Automatically run Generate Procedural Mesh when a change is detected.
Section To Snap To:
If selected then begin generating this mesh from the rightmost point of another mesh. Useful when using a multi node setup that requires multiple meshes for a single section of wall.
Array Width/Height:
The number of LED panels in the panel array.
Panel Angles:
An array containing the angle offset of each panel in the array width. This is required to add a curve to an LED volume.
LED Product Data Asset:
The data asset containing information about the products being used to construct the LED volume.
Starting Angle:
Offsets the entire mesh by a starting angle. Useful depending on the studios calibration setup.
Starting Pos:
Offsets the entire mesh by a starting transform. Useful depending on the studios calibration setup.
