import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import './App.css';
import styles from './demo.modules.css'
import reportWebVitals from './reportWebVitals';
import './index.css';
import MyWebSite from './App.js'
// ReactDOM.render(
//   <React.StrictMode>
//     <App />
//   </React.StrictMode>,
//   document.getElementById('root')
// );

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
// reportWebVitals();
/****************************************************************************************************************/
//https://learn.co/lessons/react-create-element

// //This is without JSX Code
// const myEle = React.createElement('h1',{},"Hello World!");
// ReactDOM.render(myEle,document.getElementById('root'));
/*--------------------------------------------------------------------------------------------------------------*/
// //With JSX Code
//JavaScript XML allows us to write HTML in React.
//JSX allows us to write HTML elements in JavaScript and place them in the DOM without and createElement().
// const jsx = <h1>With JSX CODE</h1>;
// ReactDOM.render(jsx,document.getElementById('root'));
/****************************************************************************************************************/

// // //multiple Tags. Here <div> is the Parent Tag. Below Comming tags are child tag. Dropping of Element.
// // const multiple = <div>
// // <h1>EveryOne Is here ?</h1>
// // <h2>OK lets us start </h2>
// // </div>
// // ReactDOM.render(multiple,document.getElementById('root'));

/****************************************************************************************************************/
// const styling = {color:'red',textAlign:'center',backgroundColor:'yellow'}
// //Here We want to use CamelCase. (i.e) "text-align" in css, in react js The second word first letter must be Capital "textAlign" 
// const myStyle =
// // Here use CurlyBracket 
// <div style={styling}> 
// <h1>We are Added Style and added into 'styling' in div element.</h1>
// </div>
// ReactDOM.render(myStyle,document.getElementById('root'));

/****************************************************************************************************************/

// // Creating class. We use class="demo" and define class in style.
// // But here. we use "className" in element and Write css in index.css.
// // import './index.css';
// const externalstyle = <center>
// <h1 className="header"> Writting style in index.css </h1></center>
// ReactDOM.render(externalstyle,document.getElementById('root'));

/****************************************************************************************************************/
//Functional Component
/*--------------------------------------------------------------------------------------------------------------*/
//Single Function
//Always give function,class Name First Letter in "Caps"(Important) else output will not be visible.
// function Navbar()
// {
//   //to return multiple element use div(parent) and use element inside it.
//   return <div>
//     <h1>navbar</h1>
//     <h2>Yes navbar only</h2>
//   </div>
// }

// function Sidebar()
// {
//   return <h1>Sidebar</h1>
// }
/*--------------------------------------------------------------------------------------------------------------*/
//Multiple Function Calling
// function Website() 
// {
//   return <div>
//   <Navbar />
//   <Sidebar />
//   </div>
// }

// ReactDOM.render(<Website />,document.getElementById('root'));
// **************************************************************************************************************
// Class Component
/*--------------------------------------------------------------------------------------------------------------*/
//Single Class
// class MyWebSite extends React.Component
// {
//   render()//This is inbuilt render method
//   {
//     return <h1>MyWebSite First class is here.</h1>
//   }
// }
/*--------------------------------------------------------------------------------------------------------------*/
//Multiple Class
// class MynewWebSite extends React.Component
// {
//   render()
//   {
//     return <div>
//     <h1>MynewWebSite Second Class is here</h1>
//     <MyWebSite />
//     </div>
//   }
// }
// ReactDOM.render(<MynewWebSite/>,document.getElementById('root'));

/****************************************************************************************************************/
// React Props means Propertiies.
// act as global Variable or Object, cannot be mutable.
// syntax : this.props.propsName;
//Single Props
// class NewProperties extends React.Component
// {
//   render()
//   {
//     return <h1>We are going to learn {this.props.topic}</h1>;
//   }
// }

//Single Props
// class NewProperties extends React.Component
// {
//   render()
//   {
//     return <h1>We are going to learn {this.props.topic}</h1>;
//   }
// }
// // Multiple Props
// class AgainProperties extends React.Component
// {
//   render()
//   {
//     var v = "English";//or pass object v = {'a':"Mango",'b':'banana',;'o':"Orange"} this.props.a //Mango is answer
//     return <NewProperties topic={v} />
//   }
// }
// ReactDOM.render( <AgainProperties/> , document.getElementById('root'));
// -----------------------------------------------------------------------------------------------------------------
// // default passing value in props.
// /*-----------------------------------------------------------------------------------------------------------------*/
// class LearnreactProperties extends React.Component
// {
//   render()
//   {
//     return <h1>Learn React {this.props.concept} in {this.props.language}</h1>
//   }
// }
// //This is default passing value in props.
// LearnreactProperties.defaultProps = {concept:"angular",language:"English"}
// ReactDOM.render(<LearnreactProperties concept="vue" />,document.getElementById("root"));

/****************************************************************************************************************/

// React State
/*
React Component has built-in state object.
To define a state, you have to first declare a default set of values for defining the Component's initial state
To do this, add a class constructor which assigns an initial state using this.state.
The this.state property can be rendered inside render() method.
Syntax:
this.state.propertyName
If you want to change a value in the state object, use the below
this.setState()
When a value in the state object changes, the Component will re-render, so the output will change accordingly 
to user values.
*/

// class Reactstate extends React.Component
// {
//   constructor()
//   {
//     super();
//     this.state = {initialvalue:"Welcome", name:"Guys"};

//   }
//   changevalue = () =>
//   {
//     this.setState({initialvalue:"Thanks for watching"});
//   }
//   render()
//   {
//     return
//     <div>
//     <h1>{this.state.initialvalue} {this.state.name} </h1>
//     <br/>
//     <button type="button" onClick={this.changevalue}>Exit</button>
//     </div>
//   }
// }
// ReactDOM.render(<Reactstate/>, document.getElementById('root'));

/*********************************************************************************/
//React LifeCycle
// class Lifecycle extends React.Component
// {
//   constructor()
//   {
//     super();
//     this.state = {value:"Welcome",name:"Guys"}
//   }
//   componentWillMount()  //Executed first
//   {
//     alert("componentWillMount will called before render method");
//   }
//   render()
//   {
//     return 
//     <div>
//     <h1>{this.state.value} {this.state.name}</h1>
//     <button type="button" onClick={this.changvalue}>Change Value</button>
//     <button type="button" onClick={this.deleteheader}>Change Value</button>
//     </div>
//   }
//   changevalue = () =>
//   {
//     this.setState = ({value:"Your are changed"});
//   }
//   // In this after 5 sec value changed to Thank You
//   componentDidMount()
//   {
//     setTimeout(()=>{
//     this.setState({value:"Thank You"})  //Executed 3
//   }
//   ,5000);
//   }
//   componentWillUpdate()   //Executed 2nd
//   {
//     alert("Do You Want To UPDATED componentWillUpdate?");
//   }
//   componentDidUpdate()    //Executed 4th
//   {
//     document.getElementById("mydiv").innerHTML = "NEW VALUE UPDATED SUCCESSFULLY " +this.state.value;
//   }
//   shouldComponentUpdate()   //True or false condition when true update happens
//   {
//     return true;
//   }
//   deleteheader = () =>
//   {
//     this.setState({value:false,name:false})
//   }
//   componentWillUnmount()    //When click on that header value will be set false. 
//   {
//     alert("Header Deleted");
//   }
// }
// ReactDOM.render(<Lifecycle/>, document.getElementById('root'));

/*************************************************************************************************************************/
/*-------------------------------------------------------------------------------------------*/
// React this Keyword
/*--------------------------------------------------------------------------------------------*/
// class RegvsArr
// {
//   ChangeColor = function()
//   {
//     document.getElementById('demo').innerHTML += this;  //OUTPUT : DEMO GOES HERE :[object Window][object HTMLDivElement][object HTMLButtonElement][object HTMLDivElement]
//   }
//   // ChangeColor = () =>
//   // {
//   //   document.getElementById('demo').innerHTML += this;  //OUTPUT : DEMO GOES HERE :[object Object][object Object][object Object][object Object]
//   // }
// }
// const obj = new RegvsArr;
// //window object calls the function
// window.addEventListener("load",obj.ChangeColor);
// //A button object calls the function
// document.getElementById('btn').addEventListener("click",obj.ChangeColor);
// //A div object calls the function
// document.getElementById("mydiv").addEventListener('click',obj.ChangeColor);
// //A heading Object calls the function
// document.getElementById("myHead").addEventListener("click",obj.ChangeColor);

/***********************************************************************************************************************************/
// React Event Handling
/*---------------------------------------------------------------------------------------------------------------------------------*/
// 1.An Event is an action that could be tiggered as a result of the user action or system generated event.
// 2.For Example : a mouse click, loading of a web page, pressing a key, etc..
// 3.React Event Handler named using camelCase rather than Lowercase.
// 4.In React , with help of JSX you pass a function as the even Handler, rather than a string . onClick={shoot} instead of onClick="Shoot()".

// class Eventbind extends React.Component
// {
//   constructor()
//   {
//     super()
//     this.state={
//       msg:"welcome"
//     }
//   }

//   clickEvent = (a) =>    //clickEvent = (a) =>{this.setState = ({msg:a})}
//   {
//     this.setState = (
//       {
//         msg:a
//       })
//   }
//   render()
//   {
//     return
//     <div>
//     <h1>{this.state.msg}</h1>
//     //<button onClick={()=>this.clickEvent("Hello")}> click  </button>
//     <button onClick={this.clickEvent.bind(this,"Hello")}> Click  </button>
//     </div>
//   }
// }
// ReactDOM.render(<Eventbind />,document.getElementById('root')); 

class ReactStyle extends React.Component{
  render()
  {
    const mystyle = {color:"blue",fontFamily:"Arial"};
  
    return(
      <div>
      //Internal Styling
      <h1 style={{color:"red",textAlign:"center"}}> Hello World </h1>
      //External JS File
      <h2 style={mystyle}>Welcome</h2>
      //demo.modules.css   .heading{} defined there
      <h3 className={styles.heading}>Thank You </h3>
      <h4 className="App">OOK</h4>
      </div>
      )
  }
}