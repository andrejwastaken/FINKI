import React from 'react';
import { Navbar, Nav, Container } from 'react-bootstrap';
import './navbar.css';

function NavbarComponent() {
    const linkStyle = {
        color: 'white', // Set the text color to white
        marginRight: '15px', // Add margin between each link
        textDecoration: 'none'
    };

    return (
        <Navbar expand="lg" className="bg-body-tertiary">
            <Container>
                <Navbar.Collapse id="basic-navbar-nav">
                    <Nav className="me-auto" >
                        <Nav.Link href="#home" style={linkStyle}>Home</Nav.Link>
                        <Nav.Link href="/menu" style={linkStyle}>Menu</Nav.Link>
                        <Nav.Link href="/about" style={linkStyle}>About</Nav.Link>

                        <Nav.Link href="/registration-login" style={linkStyle}>
                            <RegistrationLogin onShow={handleRegistrationModalShow} />
                        </Nav.Link>
                    </Nav>
                </Navbar.Collapse>
            </Container>
        </Navbar>
    );
}

export default NavbarComponent;
