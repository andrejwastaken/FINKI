import React from 'react';
import 'bootstrap/dist/css/bootstrap.min.css';
/*import Registration from '../Register';*/
import { useState } from 'react';
import Button from 'react-bootstrap/Button';
import Modal from 'react-bootstrap/Modal';
import Registration from "../register/register";
import SignIn from "../sign-in/sign-in";


function RegistrationLogin(props) {
    const [show, setShow] = useState(false);

    const handleClose = () => setShow(false);
    const handleShow = () => setShow(true)
    return (
        <>
            <Button variant="primary" onClick={handleShow}>
                Launch demo modal
            </Button>

            <Modal show={show} onHide={handleClose}>
                <Modal.Header closeButton>
                    <Modal.Title>Modal heading</Modal.Title>
                </Modal.Header>
                <Modal.Body>

                    <Registration/>

                    <div style={{borderTop: '1px solid black', marginTop: '100px',
                        marginBottom: '20px'}}></div>

                    <SignIn/>

                </Modal.Body>


                <Modal.Footer>
                    <Button variant="secondary" onClick={handleClose}>
                        Close
                    </Button>
                    <Button variant="primary" onClick={handleClose}>
                        Save Changes
                    </Button>
                </Modal.Footer>
            </Modal>
        </>
    );
}
export default RegistrationLogin;