CREATE DATABASE trainerdb;
USE trainerdb;
CREATE	TABLE trainerdb(rollno INT (23), NAME TEXT(90));
SELECT *FROM trainerdb;
ALTER TABLE trainerdb  ADD (noofStudent INT(23));	/*Adding Particular row using ADD(columnName size(23)); */
DESC trainerdb;
ALTER TABLE trainerdb DROP COLUMN noofStudent;		/*Drop Column using alter */
ALTER TABLE trainerdb MODIFY noofStudent INT(12);	/* Modify the size of noofStudent from INT(23) to INT(12) */