# Certificate-Automation-Using-CImg

Code for Automating the process of filling the details in a certificate.

## Prerequisite

📌**students.csv** (containing list and details of the students to be filled)

📌**ImageMagick** (Install it to support reading and Writing on jpg, png files)

📌**certificate.jpg** (The template on which the details are to be pasted)

## Instruction

📌Confirm that CImg.h, students.csv, Makefile, certificate.jpg are in the same folder with index.cpp

📌Aspect ratios of three textfields are declared with #define in the index.cpp file. If it doesn't match, Change those to the comfortable ratios to match with the template.

📌Makefile is already present. So you may only have to type "make" in the terminal to run.