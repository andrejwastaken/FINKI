import React, { useState} from 'react';
import Navbar from '../../components/navbar/navbar';
import Footer from '../../components/footer/footer';
import {Button, Card, Col, Container, Form, Row} from 'react-bootstrap';
import menudata from "../../assets/database/menudata";
import Cart from "../../components/cart";
import { ToastContainer, toast } from 'react-toastify';
import 'react-toastify/dist/ReactToastify.css';

function MenuPage() {

    const notifySuccess = () => {
        toast.success('Successfully added to your cart', {
            position: 'top-right',
            autoClose: 3000, // 3 seconds
            hideProgressBar: true,
            closeOnClick: true,
            pauseOnHover: true,
            draggable: true,
        });
    };

    /*    const [user, setUser] = useState(null);

        useEffect(() => {
            const unsubscribe = firestore.auth().onAuthStateChanged((authUser) => {
                setUser(authUser);
            });

            return () => unsubscribe();
        }, []);*/

    const [selectedSize, setSelectedSize] = useState(null);
    const buttonStyle = {
        backgroundColor: '#293849',
        marginTop: '10px',
        float: 'right',
        borderColor: 'black',
        width: '170px',
        alignSelf: 'center',
    };

    const cartButton =
        {
            width: '140px',
            height:'90px',
            alignSelf: 'center',
            borderColor: '#ffffff33',
            marginBottom: '30px',
            marginTop: '60px',
            backgroundColor: '#ffffffb3',
            backgroundImage: 'url("https://static.vecteezy.com/system/resources/previews/019/787/018/original/shopping-cart-icon-shopping-basket-on-transparent-background-free-png.png")',
            backgroundRepeat: 'no-repeat',
            backgroundSize: '140px',
            float: 'left',
            position: 'fixed',
            bottom: '20px',
            right: '20px',
            zIndex: '1000',
        }

    /*   const handleAddToCart = (menuItem) => {
           if (user) {
               addToCart(menuItem);
           } else {
               alert("You need to register or login to add to cart.");

           }*/

    const handleIncrease = (index) => {
        const updatedCart = [...cartItems];
        updatedCart[index].quantity += 1;
        updatedCart[index].price += updatedCart[index].originalPrice;
        setCartItems(updatedCart);
    };


    const handleDecrease = (index) => {
        const updatedCart = [...cartItems];
        if (updatedCart[index].quantity > 1) {
            updatedCart[index].quantity -= 1;
            updatedCart[index].price -= updatedCart[index].originalPrice; // Assuming originalPrice is available
            setCartItems(updatedCart);
        }
    };

    const [cartItems, setCartItems] = useState([]);
    // иницијално не се покажува cart
    const [showCart, setShowCart] = useState(false);

    const toggleCart = () => {
        setShowCart(!showCart);
    }

    const handleCloseCart = () => {
        setShowCart(false);
    };

    const addToCart = (item) => {
        const updatedCart = [...cartItems];
        const existingItem = updatedCart.findIndex((cartItem) => cartItem.title === item.title);

        if (existingItem !== -1) {
            updatedCart[existingItem].quantity += 1;

        } else {
            updatedCart.push({
                ...item,
                quantity: 1,
                details: item.description,
            });
        }

        setCartItems(updatedCart);
        localStorage.setItem('cart', JSON.stringify(updatedCart));

        notifySuccess();
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
            <Form.Group className="d-flex flex-wrap">
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
                        <Card className="d-flex flex-column" style={{
                            height: '100%',
                            backgroundColor: 'rgb(255 244 221)',
                            border: '1px solid rgb(195 178 141)',
                            borderRadius: '20px'
                        }}>
                            <Card.Img variant="top" src={menuItem.image} alt={menuItem.title}/>
                            <Card.Body className="d-flex flex-column justify-content-between">
                                <div>
                                    <Card.Title>{menuItem.title}</Card.Title>
                                    <Card.Text>{menuItem.description}</Card.Text>
                                    {menuItem?.sizes && renderSizeOptions(menuItem.sizes, menuItem)}

                                    <Card.Text>Price: {menuItem.price} ден.</Card.Text>
                                </div>


                                <Button style={buttonStyle} variant="primary"
                                        onClick={() => addToCart(menuItem)}>Add to Cart</Button>
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
            <Navbar/>
            <Button style={cartButton} onClick={toggleCart}></Button>
            <Container className="mt-4">

                <Row xs={1} sm={2} md={2} lg={4} className="mb-3">
                    {renderMenuItems()}
                </Row>
            </Container>
            <Footer/>

            <Cart
                cartItems={cartItems}
                show={showCart}
                handleClose={handleCloseCart}
                handleIncrease={handleIncrease}
                handleDecrease={handleDecrease}
            />
            <Cart cartItems={cartItems} show={showCart} handleClose={handleCloseCart}></Cart>
            <ToastContainer />
        </div>
    );

}
export default MenuPage;

