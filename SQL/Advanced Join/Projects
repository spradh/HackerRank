
Select Start_Date, min(End_Date) from 
(SELECT Start_Date FROM Projects WHERE Start_Date NOT IN (SELECT End_Date FROM Projects)) a,
(SELECT End_Date FROM Projects WHERE End_Date NOT IN (SELECT Start_Date FROM Projects)) b
where Start_Date<End_Date
group by Start_Date
order by datediff(min(End_Date),Start_Date), Start_Date;
