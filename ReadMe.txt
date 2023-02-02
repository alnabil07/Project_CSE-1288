DEVOLOPMENT OF PARKING MANAGEMENT SYSTEM USING C PROGRAMMING


Title:Development of Parking Management System Using C Programming.



Introduction:

The project titled " Development of a Parking Management System" is a program designed to manage the parking of vehicles in a parking lot. The program allows users to park a car, show the current status of the parking lot, remove a car, and delete all data. The program has the capability to store and display the number of buses, cars, and bikes parked in the lot, as well as the total number of vehicles and the total earnings. The program is written in C language and utilizes various libraries such as stdio.h, conio.h, and stdlib.h. The program consists of various functions including the main function, menu function, and functions for parking and removing vehicles. The program also has the ability to store data in an array for the spaces in the parking lot, keeping track of which spaces are occupied and which are available. Overall, the " Development of a Parking Management System Using C Programming." program is a useful tool for efficiently managing and organizing the parking of vehicles in a parking lot.


How the project works:

After the execution of the Code, the C program is a parking management system that allows a user to park, remove, and view the status of vehicles in a parking lot. It has a menu-driven interface that allows the user to select different options. The options include:
1.	Parking a vehicle.
2.	Viewing the status of the parking lot.
3.	Removing a vehicle.
4.	Deleting all data.
5.	Exiting the program. 
The program keeps track of the number of buses, rickshaws, cycles, and the total number of vehicles in the parking lot. It also keeps track of the total earnings and the number of occupied spaces in the parking lot.
•	When a user selects the option to park a vehicle, they are asked to enter the type of vehicle they want to park, which can be a bus, car, or bike. The program then adds the vehicle to the parking lot and updates the relevant data, such as the number of vehicles, the total earnings, and the number of occupied spaces.
•	When the user selects the option to view the status of the parking lot, the program displays the occupied spaces, the number of buses, cars, bikes, and the total number of vehicles in the parking lot, as well as the total earnings.
•	When the user selects the option to remove a vehicle, they are asked to enter the space number of the vehicle they want to remove. The program then removes the vehicle from the parking lot and updates the relevant data.
•	When the user selects the option to delete all data, the program resets all data, such as the number of vehicles, the total earnings, and the number of occupied spaces, to zero.


Algorithm:

Step 1: Start.

Step 2:  Initialize constant NUM_SPACES and variables:
•	noc: number of cars
•	nob: number of buses
•	nok: number of bikes
•	amount: total earnings
•	count: total number of vehicles
•	num_occupied: number of occupied parking spaces
•	spaces: an array of size NUM_SPACES to keep track of occupied parking spaces.

Step 3: Display the main menu and prompt the user for a choice.

Step 4: Based on the user's choice, perform the following actions:
1.	If the choice is 1, call the park_a_vehicle() function. 
And go to Step 5.
2.	If the choice is 2, call the show_data() function.
And go to Step 6.
3.	If the choice is 3, call the remove_a_vehicle() function.
And go to Step 7.
4.	If the choice is 4, call the Delete() function.
And go to Step 8.
5.	If the choice is 5, exit the program.
And go to Step 12.

Step 5: In the park_a_vehicle() function:
•	If all parking spaces are occupied, display a message saying that the parking lot is full.
•	If there are available parking spaces, prompt the user to choose a type of vehicle to park (car, bike, or bus).
•	Based on the user's choice, call the appropriate function 
If the choice is 1; call the bus() function and go to Step 9.
If the choice is 2; call car() function and go to Step 10.
If the choice is 3; call bike() function and go to Step 11.

Step 6: In the show_data() function:
•	Display the list of parking spaces and their occupied status.
•	Display the number of cars, buses, bikes, and the total number of vehicles.
•	Display the total earnings.

Step 7: In the remove_a_vehicle() function:
•	If there are no vehicles in the parking lot, display a message saying that the parking lot is empty.
•	If there are vehicles in the parking lot, prompt the user to enter the space number of the vehicle they want to remove.
•	If the space number is invalid or the space is already empty, display an error message.
•	If the space number is valid and the space is occupied, mark the space as empty and decrement the num_occupied variable.

Step 8: In the Delete() function:
Set all variables to 0 (noc, nob, nok, amount, count, num_occupied).

Step 9: In the bus() function:
•	Increment nob by 1.
•	Increment amount by 100 (the fee for bus parking).
•	Increment count by 1.
•	If all parking spaces are occupied, display a message saying that the parking lot is full.
•	If there are available parking spaces, prompt the user to enter the space number where they want to park their bus.
•	If the space number is invalid, display an error message.
•	If the space number is valid and the space is occupied, display an error message.
•	If the space number is valid and the space is not occupied, mark the space as occupied and increment the num_occupied variable.

Step 10: In the car() function:
•	Increment noc by 1.
•	Increment amount by 50 (the fee for car parking).
•	Increment count by 1.
•	If all parking spaces are occupied, display a message saying that the parking lot is full.
•	If there are available parking spaces, prompt the user to enter the space number where they want to park their car.
•	If the space number is invalid, display an error message.
•	If the space number is valid and the space is occupied, display an error message.
•	If the space number is valid and the space is not occupied, mark the space as occupied and increment the num_occupied variable.

Step 11: In the bike() function:
•	Increment nok by 1.
•	Increment amount by 20 (the fee for bike parking).
•	Increment count by 1.
•	If all parking spaces are occupied, display a message saying that the parking lot is full.
•	If there are available parking spaces, prompt the user to enter the space number where they want to park their bike.
•	If the space number is invalid, display an error message.
•	If the space number is valid and the space is occupied, display an error message.
•	If the space number is valid and the space is not occupied, mark the space as occupied and increment the num_occupied variable.

Step 12: End.


