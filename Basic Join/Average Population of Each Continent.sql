select country.continent, round(avg(city.population)-0.5,0) from city
join country
on city.countrycode=country.code
where city.id is Not null
group by country.continent;
