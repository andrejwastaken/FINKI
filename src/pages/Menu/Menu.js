import React from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import { Button, Card, Container, Row, Col } from 'react-bootstrap';
import menudata from "../../assets/database/menudata";

function MenuPage() {
    const [selectedSize, setSelectedSize] = useState(null);
    const buttonStyle = {
        backgroundColor: '#293849',
        marginTop:'40px',
        float:'right',
        borderColor: 'black',
        width: '170px',
        alignSelf: 'center',
    };

    const [cartItems, setCartItems] = useState([]);
    // иницијално не се покажува cart
    const [showCart, setShowCart] = useState(false);

    const toggleCart = () =>
    {
        setShowCart(!showCart);
    }

    const handleCloseCart = () => {
        setShowCart(false);
    };

    const addToCart = (item) => {
        const updatedCart = [...cartItems];
        const existingItem = updatedCart.find((cartItem) => cartItem.id === item.id);

        if (existingItem) {
            existingItem.quantity += 1;
            // site vo posebna niza
        }
        else
        {
            updatedCart.push({...item, quantity: 1});
        }

        setCartItems(updatedCart);
        localStorage.setItem('cart', JSON.stringify(updatedCart));
    }
    const handleSizeChange = (selectedSize, menuItem) => {
        setSelectedSize(selectedSize);
        if (menuItem?.sizes[selectedSize[0]].price) {
            menuItem.price = menuItem?.sizes[selectedSize[0]].price;
        }
    };
    const renderSizeOptions = (sizes, menuItem) => {
        // console.log( Object.entries(sizes))
        return (
            <Form.Group className="d-flex flex-wrap justify-content-between">
                {
                    Object.entries(sizes).map((size) => (
                    <Form.Check
                        key={size[0]}
                        type="radio"
                        id={`size-${size[0]}`}
                        label={size[0]}
                        name="size"
                        onChange={() => handleSizeChange(size, menuItem)}

                    />

                ))}
            </Form.Group>
        );

    };
    const renderMenuItems = () => {
        const menuItems = [];
        for (const category in menudata.menu) {
            const items = menudata.menu[category];
            for (const itemKey in items) {
                const menuItem = items[itemKey];
                menuItems.push(
                    <Col className="mb-4" key={menuItem.title}>
                        <Card  className="d-flex flex-column" style={{ height: '100%',backgroundColor: '#ffe5a5'}}>
                            <Card.Img variant="top" src={menuItem.image} alt={menuItem.title} />
                            <Card.Body className="d-flex flex-column justify-content-between">
                                <div>
                                    <Card.Title>{menuItem.title}</Card.Title>
                                    <Card.Text>{menuItem.description}</Card.Text>
                                    {menuItem?.sizes && renderSizeOptions(menuItem.sizes, menuItem)}

                                    <Card.Text>Price: {menuItem.price} ден.</Card.Text>
                                </div>

                                    <Button variant="success" style={buttonStyle} onClick={toggleCart}>View cart</Button>
                                    <Button style={buttonStyle} variant="primary" onClick={() => addToCart(menuItem)}>Add to Cart</Button>

                                    <Cart cartItems={cartItems} show={showCart} handleClose={handleCloseCart}></Cart>

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
                <Row xs={1} sm={2} md={2} lg={4} className="mb-3">
                    {renderMenuItems()}
                </Row>
            </Container>
            <Footer />
        </div>
    );
}

export default MenuPage;

