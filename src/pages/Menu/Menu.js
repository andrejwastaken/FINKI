import React from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import { Button, Card, Container, Row, Col } from 'react-bootstrap';
import menudata from "../../assets/database/menudata";

function MenuPage() {
    const renderMenuItems = () => {
        const menuItems = [];
        for (const category in menudata.menu) {
            for (const item in menudata.menu[category]) {
                const menuItem = menudata.menu[category][item];
                menuItems.push(
                    <Col key={menuItem.title}>
                        <Card>
                            <Card.Img variant="top" src={menuItem.image} alt={menuItem.title} />
                            <Card.Body>
                                <Card.Title>{menuItem.title}</Card.Title>
                                <Card.Text>{menuItem.description}</Card.Text>
                                <Card.Text>Price: {menuItem.price} ден.</Card.Text>
                                <Button variant="primary">Add to Cart</Button>
                            </Card.Body>
                        </Card>
                    </Col>
                );
            }
        }
        return menuItems;
    };

    return (
        <div>
            <Navbar />
            <Container className="mt-4">
                <Row xs={1} sm={2} md={2} lg={4}>
                    {renderMenuItems()}
                </Row>
            </Container>
            <Footer/>
        </div>
    );
}

export default MenuPage;
