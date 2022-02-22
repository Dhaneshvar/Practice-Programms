CREATE TABLE student(rollNo INT(12), NAME TEXT(34),marks INT(34));FROM  
INSERT INTO student VALUES(111,"Dhan",234);
SELECT *FROM student;	
INSERT INTO student (rollNo,NAME) VALUES (222,"Krishna");
UPDATE student SET marks=98 WHERE NAME="Krishna";
INSERT INTO student VALUES(333,"Karan",100);
DELETE FROM student WHERE rollNo=333;
INSERT INTO student VALUES(444,"hari",45); 
UPDATE student SET marks=90 WHERE rollNo=444;
TRUNCATE student;	/*Not Flexiblity but works similar to delete. deleted have id to delete. It will not delete the scheema */
DESCRIBE student;
DROP TABLE student;	/*remove all heading also 8*/
DROP DATABASE btechdb;	/*removes the database . refresh at left side . Now database has gone. */

/*
SELECT *from student where department="IT" AND loacation="Chennai";
SELECT *FROM student WHERE department="IT" or loacation="Chennai";
*/

SELECT *FROM student ORDER BY NAME ASC; /*ASC in ascending order.*/
SELECT *FROM student ORDER BY NAME; /* This is default by the desending*/

SELECT DISTINCT marks FROM student; /*Select only Unique marks from stduent column */

SELECT SUM(emp_sal), emp_city FROM student GROUP BY emp_city; /* group only chennai its salary, Del  sum is aggerate function*/
SELECT SUM(emp_sal), emp_city FROM student GROUP BY emp_city HAVING SUM(emp_salary)>5000; /* group salary must be greater than 5000 should be reterived */

SELECT COUNT(rollno), age FROM student GROUP BY age HAVING COUNT(rollno)>=2;

CREATE TABLE student(rollno INT(12) PRIMARY KEY, NAME TEXT(244),marks INT(23));
CREATE TABLE student(rollno INT(12), NAME TEXT(244),marks INT(23),PRIMARY KEY(rollno));
CREATE TABLE student1(rollno INT(12) , NAME TEXT(244),marks INT(23));
DESC student;
DESC student1;
INSERT INTO student VALUES(111,"THANA",123); /* This command will be executed only once because it contian primary key */