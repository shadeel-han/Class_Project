This project tries to implement the jounal paper "Interactive image segmentation 
by maximal similarity based region merging". It could only be run on Windows familiy 
operating system since it was manufactured under Visual Studio for using the .Net 
framework and its UI component.

Exection files(.exe) locate in /DIPfinal/Debug or /DIPfinal/Release.
Under author's test, they could be successfully opened on Wiondows XP and 7.
You should obey following steps to operate exection files, or some segmentation
faults may happen and crash the program.

(1) "Open" files put in /Open directory.
(2) "Smooth" the noisy.
(3) Calculate the "Gradient".
(4) Show "Watershed" result.
(5) "LoadDraw" files put in /LoadDraw.
(6) MSRM-1 -> MSRM-2 -> MSRM-1 -> MSRM-2 -> ... many times as you like,
	but it should converge in 2~3 rounds.
(7) "GetTarget" to get the outline of main object.
