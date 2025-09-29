-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND year = 2024;

SELECT * FROM interviews WHERE day = 28 AND month = 7 AND year = 2024;

SELECT * FROM bakery_security_logs WHERE year = 2024 AND month = 7 AND day = 28 AND hour = 10 AND activity = 'exit' AND minute <= 25 AND minute >= 15;

SELECT * FROM atm_transactions WHERE day = 28 AND month = 7 AND year = 2024 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';

SELECT * FROM bank_accounts WHERE account_number IN
(SELECT account_number FROM atm_transactions WHERE day = 28 AND month = 7 AND year = 2024 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw');

SELECT * FROM phone_calls WHERE day = 28 AND month = 7 AND year = 2024 AND duration < 60;

SELECT * FROM flights WHERE year = 2024 AND month = 7 AND day = 29;

SELECT * FROM airports WHERE id = 8;

SELECT * FROM airports WHERE id IN (SELECT destination_airport_id FROM flights WHERE year = 2024 AND month = 7 AND day = 29);

SELECT * FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE year = 2024 AND month = 7 AND day = 29);


SELECT * FROM people WHERE license_plate IN (
SELECT license_plate FROM bakery_security_logs WHERE year = 2024 AND month = 7 AND day = 28 AND hour = 10 AND
 activity = 'exit' AND minute <= 25 AND minute >= 15) AND id IN (
    SELECT person_id FROM bank_accounts WHERE account_number IN
    (SELECT account_number FROM atm_transactions WHERE day = 28 AND month = 7 AND year = 2024 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw')
 ) AND phone_number IN
 (SELECT caller FROM phone_calls WHERE day = 28 AND month = 7 AND year = 2024 AND duration < 60)
  AND passport_number IN (SELECT passport_number FROM passengers WHERE flight_id IN
  (SELECT id FROM flights WHERE year = 2024 AND month = 7 AND day = 29));
