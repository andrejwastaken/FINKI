import { initializeApp } from 'firebase/app';
import { getFirestore } from '@firebase/firestore';
import { getAuth } from 'firebase/auth'; // auth - функционалности за регистрација и најава

// Your web app's Firebase configuration
const firebaseConfig = {
    apiKey: "AIzaSyDvAI2-OjVx39yg6PMbvo8ZTfOxht_4Kq8",
    authDomain: "plaset-5.firebaseapp.com",
    projectId: "plaset-5",
    storageBucket: "plaset-5.appspot.com",
    messagingSenderId: "1079523321719",
    appId: "1:1079523321719:web:ff9fac6584593a8675a372"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
export const firestore = getFirestore(app);
export const auth = getAuth(app);