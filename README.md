# C-101

C 101 programs developed in 2018 during my second semester of college on [Technological University of Panama](http://utp.ac.pa). Special thanks to my Professor Denis Cedeño for all her advice and lessons about
the language, too for providing these excersises!

- **Problems Author:**

  Prof. Denis Cedeño:

  email contact: deniscedeno15@gmail.com

- **Questions about my code solutions?**

  Enrique Shunnar

  email me (preferred):

  xtealer00@gmail.com

  my networks (if you find them):

  @xt34l3r

## MODULE 1 - The Basics

1. Given values **a**, **b** and **y** solve the following equation `(y + b) / (a - b)`, show the answer as output.

2. Given values **a** and **b** solve the following equation `(x + y) / 3`, show the answer as output.

3. Given values **a**, **b** and **c** solve the following equation `(c + b) * (3 - b) / 4^4`, show the answer as output.

4. Given the **height** and **width** of a rectangle, calculate and print on screen the area and perimeter of it `area = height * width; perimeter = 2 * (height + width)`.

5. Given **float** values **a** and **b** calculate their sum, substraction and multiplication, show the answer as output.

6. Given values **a**, **b**, **y** and **x** solve the equation `(x - y) / (3 * (a * b))`, show the answer as output.

7. Ask for the **value** of an item to the cashier and the **cash** amount that the buyer gave, show as answer how much **cash** needs to be given back to the buyer.

8. Ask for the **name**, **weight** (in tons) and **height** (in feet) of a dinosaur. Show as output it's name with the given **weight** (converted to kilograms) and it's **height** (converted to meters). `(1 ton = 1000 kg); (1 feet = 0.3047 m)`.

9. Convert the **price** in **liters** of machines in a fuel shop to **gallons** and calculate the **amount** to be paid by the customer in gallons. `(1L = $1.025) and (1Gallon = 3.785L)`.

10. Given values **a**, **b** and **c** solve the following equation `(a * (3 + b)) / (c *(3 - b))`, show the answer as output.

## MODULE 2 - Arrays, Iterators and Conditionals I

1. Given **5 califications** of a student, show Approved if it's **average** is at least 71 or Failed if
   it's average is below.

2. Given a employee's **worked hours**, **per hour salary** and **deductions** calculate it's net salary,
   depending on this raise by a defined percentage it's current base salary.

   - `net salary 1000 or less: 25% base salary raise`

   - `salary more than 1000 and up to 1500: 21% base salary raise`

   - `salary more than 1500: 18% base salary raise`

3. Given int values for **a** and **b** show as result the following values.

   - `100 * b if a = 1`

   - `100 + b if a = 2`

   - `100 / b if a = 3`

   - `0 if any other number`

4. Given int values of **a**, **b** and **c** show them in descendant order in screen.

5. Calculate the **cost** of a two ways plane ticket after asking the **distace** to be flown and how many **days** the passenger will be staying at it's destination hotel depending on the following criteria:

   - if staying more than 7 days and the flight to and from the destination combined is more than 800KMs,
     apply a 30% discount.

   - The price per KM is \$1.25

6. Give buyers a discount depending on the following criteria:

   - `Purchase amount < 500; discound = 0%`

   - `Purchase amount 500 >= and < 1000; discount = 5%`

   - `Purchase amount >= 1000; discount = 11%`

7. Given the **cost** of a vehicle and it's **brand**, calculate a discount based on the following table:

   - `toyota: 8%`

   - `suzuki: 10%`

   - `nissan: 12%`

   - `dodge: 15%`

8. Ask for the destination of a call and it's length to get to know the final cost based on this table:

   - `12: North Americas: $2.00/min`

   - `18: South Americas: $2.50/min`

   - `19: Europe: $3.00/min`

   - `23: Asia: $3.50/min`

   - `25: Africa: $4.00/min`

9. Convert the following measure units from - to as follow:

   - `1 inch = 25.40mm`

   - `1 yard = 0.9144M`

   - `1 mile = 1.6093KMs`

10. Calculate the cost per patient in a hospital, given their **discease** and **age** using the following params:

    - `if age > 14 and < 22; cost + 10%`

    - `type 1: $25/day`

    - `type 2: $16/day`

    - `type 3: $20/day`

    - `type 4: $32/day`

## Module 3 - Advanced Logic, Arrays and Iterators II

1. Print on screen the square and cube of the first 25 natural numbers.

2. Given a **int number**, calculate it's **factorial value**.

3. Convert to Celcius degrees the temperature values from 1 to 200 Fahrenheit.

   - `celcius = ((fahrenheit - 32) * 5) / 9`

4. Ask for one **int value** between 1 and 9 inclusive, then calculate it's exponentiation up to 2000.

5. Given **n** grades from a student, get the following data:

   - `number of Failed Subjects`

   - `number of Approved Subjects`

   - `grades average`

   - `approved grades average`

   - `failed grades average`

6. Get the cost of a product given price and units ordered. Discount 10% if costs exceed \$500.00 (after taxes).

7. Ask for **50 int values** and determine classify them with the following criteria:

   - positive or negative

   - odd or even

8. Get the SUM and PRODUCT of odd values in range of 20 to 400 (inclusive).

9. Given a **int number**, get it's product from 1 to 12 multipliers.

10. Get 3 multiples up to 30, starting from 3.

11. show the number of vowels inside a phrase that is ender by a (.) dot .

12. Given a bills, calculate how many bills are needed (least amount of them);

13. Ask for amount of cash (including coins) and verify the number bills of $1, $5, $10, $20 and the number of coins of value $0.01, $0.05, $0.10, $0.25 and \$0.50.

14. Generate the FIBONACCI series up to a given number by the user.

15. Create a program to replicate the following series:

    - 1 + 2 + 3 + 4 + 5 + 6

    - 2 + 4 + 6 + 8 + 10

    - 3 + 6 + 9 + 12

    - (1/1) + (1/2) + (1/3) + (1/4)

    - 5 - 10 + 15 - 20 + 25 - 30

    - 1 \* 2 \* 3 \* 4 \* 5 \* 6

    - 2 \* 4 \* 6 \* 8 \* 10

    - 1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4)

    - 1 \* 3 \* 6 \* 10 \* 15 \* 21

    - 1 + 2^2 + 3^3 + N^N

    - 1 + 1/2 + 1/3 + 1/N

## Module 4 - Advanced Data Types and Pointers

1. Ask for int positive number, show them on screen in ascendant order.

2. Ask for a word and an int value between 1 and 5 (inclusive), codify it swaping the letter 3 characters away with the current one and returning to the first one of the word if overflow happens.

3. Fill a 10x10 Matrix with positive int numbers, do the following operations:

   - `Load the first diagonal line in a vector`

   - `Show the sum of both diagonal`

   - `Show the sum of the four corners`

   - `Show the sum of the cross`

   - `Find an item comparing to the ones readed`

4. Show on screen the letters inside a given word in alphabetic order.

5. Store 5 int values in a vector and solve the following operations:

   - `print the items on screen`

   - `sum and the items and show on screen`

   - `find the average of these`

   - `find the amount of even numbers`

   - `find the amount of odd number`

   - `find the amount of negative numbers`

   - `find the amount of positive numbers`

   - `find the sum of numbers between 50 and 100 (inclusive)`

   - `find the average of numbers between 100 and 200 (inclusive)`

6. Read 10 leters as chars and do the following operations:

   - `show the vector on screen`

   - `show the vector on screen reversed`

   - `convert all characters to uppercase`

   - `convert all characters to lowercase`

   - `find how many letters are vowels`

   - `find how many letters are consonants`

7. Find the number of words in a given string. Every new word comes after a space character.

8. Replace every `c` for a `*` inside a given string. Don't use the replace function.

9. Remove all whitespaces from a given string and show the result on screen.

10. Read the data from 50 persons and show as output the following:

    - How many Men that age > 17

    - How many women that age < 18

    - Total of persons that age > 17

    - Total of persons that age < 18

    - Percentage of persons that age > 17

    - Percentage of persons that age < 18

11. Ask the montly total sales of a store and show the following:

    - `The Month with more sales`

    - `The Month with less sales`

    - `Total sales during the year`

    - `Year sales average`
