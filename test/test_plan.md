
# Smart Classroom Comfort Monitor
## Test Plan

### Objective
Verify that the temperature monitoring system
correctly identifies normal and warning conditions,
calculates averages, saves data, and controls the LED.

### Test Case 1: Normal Temperature
Input: 72 F
Expected Status: NORMAL
Expected LED: OFF
Actual Result: Not tested
Result: Pending

### Test Case 2: High Temperature
Input: 79 F
Expected Status: WARNING
Expected LED: ON
Actual Result: Not tested
Result: Pending

### Test Case 3: Low Temperature
Input: 65 F
Expected Status: WARNING
Expected LED: ON
Actual Result: Not tested
Result: Pending

### Test Case 4: Lower Boundary
Input: 68 F
Expected Status: NORMAL
Expected LED: OFF
Actual Result: Not tested
Result: Pending

### Test Case 5: Upper Boundary
Input: 76 F
Expected Status: NORMAL
Expected LED: OFF
Actual Result: Not tested
Result: Pending

### Additional Tests

Test 6: Enter 72, 79, and 65 F.
Expected Average: 72.00 F

Test 7: Change the acceptable range to 70-75 F.
Enter 76 F.
Expected Status: WARNING

Test 8: Verify each valid reading is saved
to data/temperature_log.csv.

Test 9: Verify status.txt updates to NORMAL
or WARNING after each reading.

### Final Verification
All tests must be executed on the Raspberry Pi.
Record actual results and mark each test PASS or FAIL.

Physical LED operation must be verified separately
from the printed LED status.
  
