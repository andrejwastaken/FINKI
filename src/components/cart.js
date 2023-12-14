// Cart.js

import React from 'react';
import { Modal, Button } from 'react-bootstrap';

const Cart = ({ cartItems, show, handleClose }) => {
    return (
        <Modal show={show} onHide={handleClose}>
            <Modal.Header closeButton>
                <Modal.Title>Your Cart</Modal.Title>
            </Modal.Header>
            <Modal.Body>
                {cartItems.map((item, index) => (
                    <div key={index}>
                        <h5>{item.title}</h5>
                        <p>Price: {item.price}</p>
                        <p>Details: {item.description}</p>
                        <p>Quantity: {item.quantity}</p>
                        <hr />
                    </div>
                ))}
            </Modal.Body>
            <Modal.Footer>
                <Button variant="secondary" onClick={handleClose}>
                    Close
                </Button>
                <Button variant="primary">
                    Checkout
                </Button>
            </Modal.Footer>
        </Modal>
    );
};

export default Cart;
