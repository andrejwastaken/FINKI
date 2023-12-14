import React from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import './Home.css';
import sliki from '../../assets/sliki'; // Import your assets

function Home(props) {
    return (
        <div className="Home">
            <Navbar />
            <div className="background-container">

                <div className="order-now-section">
                    <button className="order-now-btn">ORDER NOW!</button>
                </div>

            </div>


            <div class="location" id="loc1" >
                <h3>Кеј</h3>
                <p>Понеделник - Сабота
                    <br></br>  10:00 - 00:00
                    <br></br>   Недела
                    <br></br>   10:00 - 23:30
                    <br></br>   070/278-417
                </p>
            </div>

            <div class="location" id="loc2">
                <h3>Чаир</h3>
                <p>Понеделник - Сабота
                    <br></br>  10:00 - 00:00
                    <br></br>  Недела
                    <br></br>   10:00 - 23:30
                    <br></br>   070/342-452 </p>

            </div>

            <div  class="location" id="loc3">
                <h3 class="upper-line">Тетово</h3>
                <p>Понеделник - Сабота
                    <br></br>  10:00 - 00:00
                    <br></br>  Недела
                    <br></br>  10:00 - 23:30
                    <br></br>  072/229-824
                </p>
            </div>

            <Contact />
            <Footer />
        </div>
    );
}

export default Home;