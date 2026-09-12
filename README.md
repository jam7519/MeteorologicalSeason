# Meteorological Season

## Description
This C++ program determines the meteorological season based on the hemisphere and month entered by the user.

The user enters:

- `N` for the Northern Hemisphere
- `S` for the Southern Hemisphere
- A month number from `1` to `12`

The program validates the input and displays the correct season.

## Seasons

### Northern Hemisphere
- December - February: Winter
- March - May: Spring
- June - August: Summer
- September - November: Fall

### Southern Hemisphere
- December - February: Summer
- March - May: Fall
- June - August: Winter
- September - November: Spring

## Input Validation

The program checks for invalid input.

If the hemisphere is not `N` or `S`, the program displays:

```text
Please enter a valid hemisphere (N - S).

If the month is less than 1 or greater than 12, the program displays:
Please enter a valid month number (1 - 12).

Example
Enter a hemisphere (N - S): N
Enter a month number (1 - 12): 3
The season is Spring.
Testing

The program was tested with the following cases:

N and 3 -> Spring
lowercase n -> Invalid hemisphere
S and 13 -> Invalid month


Technologies Used

C++
Microsoft Visual Studio
Git
GitHub
Author

James Jakubczyk

