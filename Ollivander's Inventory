SELECT w.ID, wp.age, w.coins_needed, w.POWER FROM wands w, wands_property wp
WHERE w.code = wp.code and w.coins_needed = (SELECT MIN(w2.coins_needed) FROM wands w2 ,wands_property wp2 
WHERE w2.code = wp2.code and w.POWER = w2.POWER AND wp.age = wp2.age AND wp2.is_evil = 0) 
ORDER BY w.POWER DESC, wp.age DESC;
