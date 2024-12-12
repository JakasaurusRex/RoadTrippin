# Road Trippin' 🚗🏞🏝
Interactive Road Trip poster you can hang on your wall! Add pins for places you have been to and watch them light up! Check out my [blog posts](https://jakasaurusrex.github.io/CakeBlog/) to learn more about it! 

***

## Repo Organization

There are only two files in the project. The file RoadTrippin.ino is the code that allows you to enable the lights connected to the poster when touching the ESP32's touch capacitive sensors! 

The other file, RoadTrippin.dxf, contains the laser cutting sketch I used to cut my map!

## The final product!!

{Insert Video}

## What is this? 🎨

This is an interactive poster made for the final project for Creative Embedded systems. We were tasked to use our knowledge and skills acquired by working with the ESP32 over the semester to design a project that has interactive features and sits in an enclosure. My goal was to create a interactive poster inspired by Crafted Stories by Irene Posch, a project that I investigated earlier in the semester for our related works project! The interactive poster would allow you to place pins on a map to chart out a roadtrip on a map of the east coast states. Placing pins in holes in states would light up the state indicating you had been there. All the technical components would be contained in the back of the poster and the ESP32 is contain at the bottom allowing for you to plug in the poster.

Here are some of the tools and materials that I used to create the project and what you would need to replicate it:  
- ESP32 TTGO T-display + USB-C Cable
- Plywood + Laser Cutter
- Adobe Illustrator for creating the sketch for cutting and scanning
- Soldering Iron and many wires for soldering
- Arudino IDEs
- Conductive Tape

## How to Build 🔨
1. Clone the repo!
```bash
git clone https://github.com/JakasaurusRex/RoadTrippin.git
```
2.  Download RoadTrippin.dxf or create your own sketch for cutting out the map!
3.  Laser cut and assemble the map! I used hot glue and tape to keep things in tact! Additionally, I cut out the states and then shrunk them and connected them together and cut again to create the multi-layered effect seen in my project!
4.  Design and setup your circuit for however many states you want to be able to light up. My ESP32 only had 7 touch capacitive sensors and 7 additional pins, so I could only light 7 states. 
5.  Hook up the circuitry to the map and setup the capacitive touch capabilties!
6.  Set up the poster for display and plug it in!


## How I made it! ⚙️✏️

This section will be divided into multiple unordered parts that all came together in the end:
- Designing the Map
- Desgining the Circuit
- Setting up the capacitive touch capabilities.


## Designing the Map!
<img width="238" alt="Screenshot 2024-12-12 at 1 07 19 AM" src="https://github.com/user-attachments/assets/8d3d2dca-4194-46a0-b11d-71640e257faa" />
<img width="187" alt="Screenshot 2024-12-12 at 1 07 13 AM" src="https://github.com/user-attachments/assets/074aa56d-79ac-4038-a967-7393bd9efbd3" />

My original goal for the map was inspired by a poster like this one I found online:
<img width="389" alt="Screenshot 2024-12-12 at 1 09 32 AM" src="https://github.com/user-attachments/assets/1c1e54f9-85dd-4585-87d6-8987dabbae70" />

With this in mind, I started designing my map on illustrator. I originally had planned to make an entire US map, but I limited the scope of the project down to just the East Coast states. After image tracing a map and seperating out all the states and clearing it up I ended up making my sketch to be passed to the laser cutter!

<img width="439" alt="Screenshot 2024-12-12 at 1 11 42 AM" src="https://github.com/user-attachments/assets/c073b44b-b1ce-4701-9c6f-419a72313cf5" />

With my laser cut sketch ready, I brought it to my laser cutter and I cut out the states and the outline. After doing this, I unioned the area of all of the states and shrunk that down and cut that out of a rectangle of wood. Then I glued together my states and attached them to pegs and glued that structure to the cutout rectangle. This created the 3D effect seen when viewing the poster. I additionally added some text in the laser cutter software that says "Beautiful Appalachia" to commemerate my beautiful east coast road trip! 

The results are shown below! It turned out super cool and theres lots of space in the back of the design for the circuitry to be placed! 

<img width="419" alt="Screenshot 2024-12-12 at 1 06 45 AM" src="https://github.com/user-attachments/assets/70cee217-56b5-4e57-8328-a64b5347128b" />


## Designing the Circuit
<img width="913" alt="Screenshot 2024-12-12 at 1 05 58 AM" src="https://github.com/user-attachments/assets/a49773c5-bc85-4044-8c38-4a588bd73e84" />
<img width="675" alt="Screenshot 2024-12-12 at 1 17 24 AM" src="https://github.com/user-attachments/assets/96967ee5-1c03-4191-a502-786b32c4e88a" />

Above are the diagrams I created before setting up my circuit! I had planned to setup a bunch of circuits with LEDs to light up the states. I would set the LED pins to high when a user had pressed a touch capacitive sensor of the respective state. I planned to use conductive tape to keep the circuit low profile when connecting everything to the map in the end. Here are some photos I took while assembling the circuit!

<img width="566" alt="Screenshot 2024-12-12 at 1 27 02 AM" src="https://github.com/user-attachments/assets/51dead39-cc3e-42f8-816f-a404cc8066b2" />
<img width="551" alt="Screenshot 2024-12-12 at 1 27 18 AM" src="https://github.com/user-attachments/assets/909c5dd2-bc94-4bfe-a9f7-b7bd445c1e56" />

In the end. I ended up using the conductive tape for the ground strip mostly and making connections stronger. I ended up using alligator clips to clip the LED circuits to ground, as that was just easiest to get setup while I was approaching the deadline for the project. It also gave me the flexibility to move stuff around more easily, but it did take up more space in the enclosure which was frustrating. 

The rest of the circuitry is soldered together! I labeled almost every cable so that it was clear what cable did what and to avoid confusion in the future. This was super useful when setting up the capacitive touch capabilties! The only issue that arose was that 2 of the pins on my board were not working, so in the end I only had 5 LEDs that would light up. 

## Setting up the capacitive touch capabilities

The last thing that I did when assembling this project was set up the capacitive touch capabailities. In order to acheive this, I used the capacitive touch sensors on the ESP32 board. There are 7 touch capacitive sensors on the board that change values when a conductive material touches them. To active them, I planned on soldering wires to the pins and then connecting the wires to aluminum foil or copper tape. Then I could touch the sensing area beneat the map with a pin with copper tape around it. 

For the most part, I was working on this concurrently with the circuit designing. Here is a gif showcasing my first bit of progress where I got a capacitive touch sensor to turn on one of the LEDs. 

![IMG_8849](https://github.com/user-attachments/assets/792351fc-e117-4901-b2ae-c46fc25978b0)

After doing this, I was able to extend this to work with multiple LEDs! 

https://github.com/user-attachments/assets/051fd605-8ccc-4d97-9e67-a0f030736416

In the video, the values that I checked as a threshhold were a little too high! I lowered them later from a threshold pin value from 60 to 55. This stopped the flickering seen in the video. 
