import React from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import { Button, Card, Container, Row, Col } from 'react-bootstrap';

function MenuPage() {
    return (
        <div>
            <Navbar />
            <Container className="mt-4">
                <Row xs={1} sm={2} md={2} lg={4}>
                    <Col>
                        <Card>
                            <Card.Img variant="top" src="https://via.placeholder.com/286x180" alt="Food Item" />
                            <Card.Body>
                                <Card.Title>Item 1</Card.Title>
                                <Button variant="primary">Add to Cart</Button>
                            </Card.Body>
                        </Card>
                    </Col>
                    <Col>
                        <Card>
                            <Card.Img variant="top" src="https://via.placeholder.com/286x180" alt="Food Item" />
                            <Card.Body>
                                <Card.Title>Item 2</Card.Title>
                                <Button variant="primary">Add to Cart</Button>
                            </Card.Body>
                        </Card>
                    </Col>
                    <Col>
                        <Card>
                            <Card.Img variant="top" src="https://via.placeholder.com/286x180" alt="Food Item" />
                            <Card.Body>
                                <Card.Title>Item 3</Card.Title>
                                <Button variant="primary">Add to Cart</Button>
                            </Card.Body>
                        </Card>
                    </Col>
                    <Col>
                        <Card>
                            <Card.Img variant="top" src="https://via.placeholder.com/286x180" alt="Food Item" />
                            <Card.Body>
                                <Card.Title>Item 4</Card.Title>
                                <Button variant="primary">Add to Cart</Button>
                            </Card.Body>
                        </Card>
                    </Col>
                </Row>
            </Container>
            <Footer/>
        </div>
    );
}

export default MenuPage;
