import beefDonerBoxImage from './beef_doner_box.jpg';
import burgerCheeseburgerImage from './burger_cheeseburger.jpg';
import burgerCheeseburgerMenuImage from './burger_cheeseburger_menu.jpg';
import burgerChickenBurgerImage from './burger_chicken_burger.jpg';
import burgerChickenBurgerMenuImage from './burger_chicken_burger_menu.jpg';
import burgerChickenCheeseburgerImage from './burger_chicken_cheese_burger.jpg';
import burgerDoubleCheeseburgerImage from './burger_double_cheeseburger.jpg';
import burgerDoubleCheeseburgerMenuImage from './burger_double_cheeseburger_menu.jpg';
import burgerHamburgerImage from './burger_hamburger.jpg';
import burgerHamburgerMenuImage from './burger_hamburger_menu.jpg';
import burgerPlasetBurgerImage from './burger_plaset_burger.jpg';
import burgerPlasetBurgerMenuImage from './burger_plaset_burger_menu.jpg';
import burgerTraditionalBurgerImage from './burger_traditional_burger.jpg';
import chickenDonerBoxImage from './chicken_doner_box.jpg';
import chickenNuggetsImage from './chicken_nuggets.jpg';
import chickenSaladImage from './chicken_salad.jpg';
import chickenWingsImage from './chicken_wings.jpg';
import donerBeefImage from './doner_beef.jpg';
import donerBeefMenuImage from './doner_beef_menu.jpg';
import donerChickenImage from './doner_chicken.jpg';
import donerChickenMenuImage from './doner_chicken_menu.jpg';
import durumBeefImage from './durum_beef.jpg';
import durumBeefMenuImage from './durum_beef_menu.jpg';
import durumChickenImage from './durum_chicken.jpg';
import durumChickenMenuImage from './durum_chicken_menu.jpg';
import friesImage from './fries.jpg';
import onionRingsImage from './onion_rings.jpg';
import potatoWedgesImage from './potato_wedges.jpg';
import toastMenuImage from './toast_menu.jpg';
import wrapChickenImage from './wrap_chicken.jpg';
import wrapChickenMenuImage from './wrap_chicken_menu.jpg';




const menuData = {
    "menu": {
        "doner": {
            "chicken_doner": {
                "title": "Chicken doner",
                "description": "пилешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sauce",
                "price": 180,
                image: donerBeefImage


            },
            "beef_doner": {
                "title": "Beef doner",
                "description": "телешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sauce",
                "price": 180,
                image: donerChickenImage
            }
        },
        "durum": {
            "chicken_durum": {
                "title": "Chicken durum ",
                "description": "пилешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, Andalouse+Samurai Sause",
                "price": 200,
                image: durumChickenImage

            },
            "beef_durum": {
                "title": "Beef durum",
                "description": "телешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sause",
                "price": 200,
                image: durumBeefImage
            }
        },
        "doner_and_durum_menu": {
            "beef_doner_menu": {
                "title": "Beef Doner Menu",
                "description": "телешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sauce",
                "sizes": {
                    "S": {
                        "price": 250
                    },
                    "M": {
                        "price": 280
                    },
                    "L": {
                        "price": 310
                    },
                    "XL": {
                        "price": 320
                    },
                    "XXL": {
                        "price": 360
                    }

                },
                image: donerBeefMenuImage
            },
                "chicken_doner_menu": {
                    "title": "Chicken Doner Menu",
                    "description": "пилешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sauce",
                    "sizes": {
                        "S": {
                            "price": 250
                        },
                        "M": {
                            "price": 280
                        },
                        "L": {
                            "price": 310
                        },
                        "XL": {
                            "price": 320
                        },
                        "XXL": {
                            "price": 360
                        }

                    },
                    image: donerChickenMenuImage
                },
                "beef_durum_menu": {
                    "title": "Beef Durum menu",
                    "description": "телешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sauce\n\n",
                    "sizes": {
                        "S": {
                            "price": 280
                        },
                        "M": {
                            "price": 320
                        },
                        "L": {
                            "price": 360
                        },
                        "XL": {
                            "price": 390
                        },
                        "XXL": {
                            "price": 430
                        }

                    },
                    image: durumChickenMenuImage
                },
                "chicken_durum_menu": {
                    "title": "Chicken Durum menu",
                    "description": "пилешко месо, мешана салата, зелка, кромид, морков, кисели краставички, бел сос, лут сос, аndalouse+samurai Sauce\n\n",
                    "sizes": {
                        "S": {
                            "price": 280
                        },
                        "M": {
                            "price": 320
                        },
                        "L": {
                            "price": 360
                        },
                        "XL": {
                            "price": 390
                        },
                        "XXL": {
                            "price": 430
                        }

                    },
                    image: durumBeefMenuImage
                },
                "chicken_wrap_menu": {
                    "title": "Chicken Wrap Menu",
                    "description": "пилешки нагетс, ајсберг, домат, мајонез",
                    "sizes": {
                        "S": {
                            "price": 270
                        },
                        "M": {
                            "price": 310
                        },
                        "L": {
                            "price": 350
                        }
                    },
                    image: wrapChickenMenuImage
                }
            },
            "snacks": {
                "chicken_nuggets": {},
                "chicken_wings": {},
                "onion_rings": {},
                "potato_wedges": {},
                "fries": {}
            },
            "burger": {
                "chicken_cheese_burger": {},
                "double_cheesburger": {},
                "chicken_burger": {},
                "plaset_burger": {},
                "hamburger": {},
                "cheeseburger": {},
                "traditional_burger": {}
            },
            "burger_menu": {
                "hamburger_menu": {},
                "cheeseburger_menu": {},
                "plaset_burger_menu": {},
                "doublecheese_burger_menu": {},
                "chicken_burger_menu": {},
                "traditional_burger_menu": {}
            },
            "salads": {
                "chicken_salad": {}
            },
            "toasts": {
                "toast_menu": {}
            },
            "doner_box": {
                "chicken_doner_box": {},
                "beef_doner_box": {}
            }
        }
}
export default {
    menuData
}

