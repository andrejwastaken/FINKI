import React from 'react';
import './navbar.css'; // Import the CSS file for styling
import sliki from '../../assets/sliki';
function Navbar() {
    return (
        <nav className="navbar">
            <div className="logo">
                <img src={sliki.logo} /> {/* Add alt text for accessibility */}
            </div>
            <ul className="nav-links">
                <li><a href="/home">Home</a></li>
                <li><a href="/menu">Menu</a></li>
                <li><a href="/locations">Locations</a></li>
                <li><a href="/about">About</a></li>
                <li><a href="/contact">Contact</a></li>
                <li className="shopping-cart-icon">
                    <a href = "/shopping-cart">
                        <img src={sliki.shopping_cart} alt="Shopping Cart" />
                    </a>
                </li>
            </ul>
        </nav>
    );
}

export default Navbar;