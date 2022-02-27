import logo from './logo.svg';
import './App.css';
//i have done manually
import React from 'react';
import ReactDOM from 'react-dom';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Hi I have Edited! <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
      </header>
    </div>
  );
}

class MyWebSite extends React.Component
{
  render()//This is inbuilt render method
  {
    return <h1> From APP.js file running MyWebSite First class is here.</h1>
  }
}
export default MyWebSite;
// export default App;
