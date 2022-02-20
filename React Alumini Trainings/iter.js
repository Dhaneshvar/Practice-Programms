/*ECMAScript (/ˈɛkməskrɪpt/) (or ES) is a JavaScript standard meant to ensure the interoperability of web pages across different 
web browsers. ... ECMAScript is commonly used for client-side scripting on the World Wide Web, and it is increasingly being used 
for writing server applications and services using Node.js.
*/

//https://www.freecodecamp.org/news/write-less-do-more-with-javascript-es6-5fd4a8e50ee2/

/************* Square Root of Array using Math.sqrt *********/
// const items = [4,16,81,64,25];
// let sqare = items.map(Math.sqrt);
// console.log(sqare);

/********** Map function ***************/
// const items = [4,16,81,64,25];
// let num = items.map(va => va);
// console.log(num);

/********* Template Literals ************/
// const func= (name,year) => `${name} is studying ${year}`;
// console.log(func('Dhanesh',2));

/*******Default Paramter ***********/
// const func = (name,year=2) => `${name} is studying ${year}`;
// console.log(func('Dhanesh'));

/********	Destruction Another Name *************/
 // const func = {name:"Dhanesh",age:12,year:2}
 // let {name,age:a,year} = func;	//if we use age : a this means "a" is the another  name for "age"
 // console.log(name);
 // console.log(a);
 // console.log(year);

 /* For the Array */
 // const arr = ["Dhanesh",12,2];
 // let [name,age,year] = arr;
 // console.log(name,age,year);


 // /** filter ***/
 // const age = [12,23,34,1,3,56,18];
 // // let grthan = age.filter(greaternum);

 // const greaternum = (age) => {
 // 	return age>18;
 // }
 // let grthan = age.filter(greaternum);	//calling. This is know as Call Back Function.
 // // function greaternum(age)
 // // {
 // // 	return age>18;
 // // }
 // console.log(grthan); 




 const d = {'name':'Dhanesh','age':12,'year':2};


 console.log(d['name'])
 console.log(d.name)


