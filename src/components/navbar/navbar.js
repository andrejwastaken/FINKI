import React, {useState} from 'react';
import { Navbar, Nav, Container } from 'react-bootstrap';
import './navbar.css';
import RegistrationLogin from "../registration-login/registration-login";

function NavbarComponent() {

    const linkStyle = {
        color: 'black',
        marginRight: '15px',
        textDecoration: 'none',
    };

    const navbarStyle = {
        backgroundColor: 'transparent',
        borderBottom: 'none',

    };



    const [showRegistrationModal, setShowRegistrationModal] = useState(false);

    const handleRegistrationModalShow = () => setShowRegistrationModal(true);

    return (
        <Navbar expand="lg"  style={navbarStyle} >
            <Container>
                <Navbar.Collapse id="basic-navbar-nav">
                    <Nav className="me-auto" >
                        <Nav.Link href="/home" style={linkStyle}>Home</Nav.Link>
                        <Nav.Link href="/menu" style={linkStyle}>Menu</Nav.Link>
                        <Nav.Link href="/about" style={linkStyle}>About</Nav.Link>
                        <RegistrationLogin/>
                    </Nav>
                </Navbar.Collapse>
            </Container>
        </Navbar>
    );
}

export default NavbarComponent;