SELECT City, char_length (City) as lenofcity
FROM STATION
ORDER BY char_length(City) ASC, City
limit 1;

SELECT City, char_length (City) as lenofcity
FROM STATION
ORDER BY char_length(City) desc, City
limit 1;
