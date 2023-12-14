import React from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import Contact from '../../components/contact/contact';
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

            <Contact />
            <Footer />
        </div>
    );
}

export default Home;