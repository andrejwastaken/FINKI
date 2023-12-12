import React from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import './Home.css';
import sliki from '../../assets/sliki'; // Import your assets

function Home(props) {
    return (
        <div className="Home">
            <Navbar />
            <div className="room-container">
                <div className="video">
                    <video autoPlay muted loop>
                        <source src={sliki.doner_video} type="video/mp4" />
                        Your browser does not support the video tag.
                    </video>
                </div>
                <div className="order-now">
                    <p className="best-doners-text">The best Doners in the universe</p>
                    <button>Order Now</button>
                </div>
            </div>

            <Footer />
        </div>
    );
}

export default Home;