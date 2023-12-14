import React from 'react';
import './App.css';
import {BrowserRouter, Routes, Route} from 'react-router-dom';

/* pages */
import Home from "./pages/Home/Home";
import Menu from "./pages/Menu/Menu";
import About from "./pages/About/About";

function App() {
  return (
      <BrowserRouter>
          <Routes>
              <Route path='/home' element={< Home/>}/>
              <Route path='/menu' element={<Menu/>}/>
              <Route path='/about' element={<About/>}/>
          </Routes>
      </BrowserRouter>
  );
}

export default App;
