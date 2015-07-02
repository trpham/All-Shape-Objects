#include "box.h"
#include "Cylinder.h"

void displayInfo(void);
void rectangleMenu(Rectangle**);
void circleMenu(Circle**);
void mixedMenu(Rectangle*, Circle*);
void boxMenu(Box**);
void cylinderMenu(Cylinder**);
void allObject(Rectangle*, Circle*, Box*, Cylinder*);
void areaRectangle(Rectangle*);
void areaCircle(Circle*);
void volumeBox(Box*);
void volumeCylinder(Cylinder*);

int main() {
  int option;
  Circle* cir = 0;
  Rectangle* rec = 0;
  Box* box = 0;
  Cylinder* cy = 0;

  do {
    cout <<
      "\nMAIN MENU                                  "
      "\n  1. Rectangle Tasks                       "
      "\n  2. Circle Tasks                          "
      "\n  3. Mixed Rectangle & Circle Tasks        "
      "\n  4. Box Tasks                             "
      "\n  5. Cylinder Tasks                        "
      "\n  6. All Object Tasks                      "
      "\n  7. Quit                                  ";

    cout << "\nEnter your option (1 to 7): ";
    cin >> option;

    switch (option) {
    case 1:
      rectangleMenu(&rec);
      break;
    case 2:
      circleMenu(&cir);
      break;
    case 3:
      mixedMenu(rec, cir);
      break;
    case 4:
      boxMenu(&box);
      break;
    case 5:
      cylinderMenu(&cy);
      break;
    case 6:
      allObject(rec, cir, box, cy);
    case 7:
      cout << "\n Having fun." << endl;
      break;
    default:
      cout << "\n Wrong Option." << endl;
    }
  } while (option != 7);
  return 0;
}

void rectangleMenu(Rectangle** rec) {
  int option;
  do {
    cout <<
      "\n  RECTANGLE MENU                            "
      "\n    1. Create two Rectangle objects         "
      "\n    2. Compare by volume                    "
      "\n    3. Compare by area                      "
      "\n    4. Print two Rectangle objects          "
      "\n    5. Quit                                 ";

    cout << "\n  Enter your option (1 to 5): ";
    cin >> option;

    switch (option) {
    case 1:
      delete *rec;
      *rec = 0;
      *rec = new Rectangle[2];
      cout << "\n    Rectangle #1:" << endl;
      cin >> (*rec)[0];
      cout << "\n    Rectangle #2:" << endl;
      cin >> (*rec)[1];
      break;
    case 2:
      if (*rec != 0)
        cout << "\n    The rectangle has 0 volume." << endl;
      else
        cout << "\n    Rectangle ojbects are not fully available." << endl;
      break;
    case 3:
      areaRectangle(*rec);
      break;
    case 4:
      if (*rec != 0) {
        cout << "\n    Rectangle #1:" << endl;
        cout << (*rec)[0];
        cout << "\n    Rectangle #2:" << endl;
        cout << (*rec)[1];
      } else {
        cout << "\n    Rectangle ojbects are not fully available." << endl;
      }
      break;
    case 5:
      break;
    default:
      cout << "\n    Wrong Option!" << endl;
    }
  } while (option != 5);
}

void circleMenu(Circle** cir) {
  int option;
  do {
    cout <<
      "\n  CIRCLE MENU                             "
      "\n    1. Create two Circle objects          "
      "\n    2. Compare by volume                  "
      "\n    3. Compare by area                    "
      "\n    4. Print two Circle objects           "
      "\n    5. Quit                               ";

    cout << "\n  Enter your option (1 to 5): ";
    cin >> option;

    switch (option) {
    case 1:
      delete *cir;
      *cir = 0;
      *cir = new Circle[2];
      cout << "\n    Cricle #1:" << endl;
      cin >> (*cir)[0];
      cout << "\n    Cricle #2:" << endl;
      cin >> (*cir)[1];
      break;
    case 2:
      if (cir != 0)
        cout << "\n    The circle has 0 volume." << endl;
      else
        cout << "\n    Cricle ojbects are not fully available." << endl;
      break;
    case 3:
      areaCircle(*cir);
      break;
    case 4:
      if (*cir != 0) {
        cout << "\n    Circle #1:" << endl;
        cout << (*cir)[0];
        cout << "\n    Circle #2:" << endl;
        cout << (*cir)[1];
      } else {
        cout << "\n    Cirlce ojbects are not fully available." << endl;
      }
      break;
    case 5:
      break;
    default:
      cout << "\n    Wrong Option!" << endl;
    }
  } while (option != 5);
}

void mixedMenu(Rectangle* rec, Circle* cir) {
  int option;
  do {
    cout <<
      "\n  MIXED MENU                                 "
      "\n    1. Compare by area                       "
      "\n    2. Compare by volume                     "
      "\n    3. Print ALL objects                     "
      "\n    4. Quit                                  ";

    cout << "\n  Enter your option (1 to 4): ";
    cin >> option;

    switch (option) {
    case 1:
      areaRectangle(rec);
      areaCircle(cir);
      break;
    case 2:
      cout << "\n    Rectangle and Cirlce has 0 volume" << endl;
      break;
    case 3:
      if (rec != 0) {
        cout << rec[0];
        cout << rec[1];
      } else {
        cout << "\n    Rectangle ojbects are not fully available." << endl;
      }
      if (cir != 0) {
        cout << cir[0];
        cout << cir[1];
      } else {
        cout << "\n    Cirlce ojbects are not fully available." << endl;
      } break;
    case 4:
      break;
    default:
      cout << "\nWrong Option!" << endl;
    }
  } while (option != 4);
}

void boxMenu(Box** box) {
  int option;
  do {
    cout <<
      "\n  BOX MENU                            "
      "\n    1. Create two Box objects               "
      "\n    2. Compare by volume                    "
      "\n    3. Compare by area                      "
      "\n    4. Print two Box objects                "
      "\n    5. Quit                                 ";

    cout << "\n  Enter your option (1 to 5): ";
    cin >> option;

    switch (option) {
    case 1:
      delete *box;
      *box = 0;
      *box = new Box[2];
      cout << "\n    Box #1:" << endl;
      cin >> (*box)[0];
      cout << "\n    Box #2:" << endl;
      cin >> (*box)[1];
      break;
    case 2:
		volumeBox(*box);
      break;
    case 3:
      if (*box != 0)
        cout << "\n    The boxes have 0 area." << endl;
      else
        cout << "\n    Box ojbects are not fully available." << endl;
      break;
    case 4:
      if (*box != 0) {
        cout << "\n    Box #1:" << endl;
        cout << (*box)[0];
        cout << "\n    Box #2:" << endl;
        cout << (*box)[1];
      } else {
        cout << "\n    Box ojbects are not fully available." << endl;
      }
      break;
    case 5:
      break;
    default:
      cout << "\n    Wrong Option!" << endl;
    }
  } while (option != 5);
}

void cylinderMenu(Cylinder** cy) {
  int option;
  do {
    cout <<
      "\n  CYLINDER MENU                                  "
      "\n    1. Create two Cylinder objects               "
      "\n    2. Compare by volume                         "
      "\n    3. Compare by area                           "
      "\n    4. Print two Cylinder objects                "
      "\n    5. Quit                                      ";

    cout << "\n  Enter your option (1 to 5): ";
    cin >> option;

    switch (option) {
    case 1:
      delete *cy;
      *cy = 0;
      *cy = new Cylinder[2];
      cout << "\n    Cylinder #1:" << endl;
      cin >> (*cy)[0];
      cout << "\n    Cylinder #2:" << endl;
      cin >> (*cy)[1];
      break;
    case 2:
		  volumeCylinder(*cy);
      break;
    case 3:
      if (*cy != 0)
        cout << "\n    The cylinder has 0 area." << endl;
      else
        cout << "\n    Cylinder ojbects are not fully available." << endl;
      break;
    case 4:
      if (*cy != 0) {
        cout << "\n    Cylinder #1:" << endl;
        cout << (*cy)[0];
        cout << "\n    Cylinder #2:" << endl;
        cout << (*cy)[1];
      } else {
        cout << "\n    Cylinder ojbects are not fully available." << endl;
      }
      break;
    case 5:
      break;
    default:
      cout << "\n    Wrong Option!" << endl;
    }
  } while (option != 5);
}

void allObject(Rectangle* rec, Circle* cir, Box* box, Cylinder* cy) {

  Shape* shapePtr[8] = {0};

  shapePtr[0] = &rec[0];
  shapePtr[1] = &rec[1];
  shapePtr[2] = &cir[0];
  shapePtr[3] = &cir[1];
  shapePtr[4] = &box[0];
  shapePtr[5] = &box[1];
  shapePtr[6] = &cy[0];
  shapePtr[7] = &cy[1];

  int option;
  do {
    cout <<
      "\n  All OBJECT MENU                            "
      "\n    1. Compare by area                       "
      "\n    2. Compare by volume                     "
      "\n    3. Print ALL objects                     "
      "\n    4. Quit                                  ";

    cout << "\n  Enter your option (1 to 4): ";
    cin >> option;

    switch (option) {
    case 1:
      cout << "\n    Box and Cylinder have 0 area" << endl;

      if (rec != 0) {
        cout << "\n    Area of Rectangles: " << endl;
        cout << "\n      Rectangle #1: " << shapePtr[0]->computeArea();
        cout << "\n      Rectangle #2: " << shapePtr[1]->computeArea();
        if (shapePtr[0]->computeArea() > shapePtr[1]->computeArea()) {
          cout << "\n      Rectangle #1 > Rectangle #2 " << endl;
        } else if (shapePtr[0]->computeArea() < shapePtr[1]->computeArea()) {
          cout << "\n      Rectangle #1 < Rectangle #2 " << endl;
        } else {
          cout << "\n      Rectangle #1 = Rectangle #2 " << endl;
        }
      } else {
        cout << "\n    Rectangle ojbects are not fully available." << endl;
      }

      if (cir != 0) {
        cout << "\n    Area of Circles: " << endl;
        cout << "\n      Cricle #1: " << shapePtr[2]->computeArea();
        cout << "\n      Cirlce #2: " << shapePtr[3]->computeArea();
        if (shapePtr[2]->computeArea() > shapePtr[3]->computeArea()) {
          cout << "\n      Circle #1 > Circle #2 " << endl;
        } else if (shapePtr[2]->computeArea() < shapePtr[3]->computeArea()) {
          cout << "\n      Circle #1 < Circle #2 " << endl;
        } else {
          cout << "\n      Circle #1 = Circle #2 " << endl;
        }
      } else {
        cout << "\n    Circle ojbects are not fully available." << endl;
      }
    break;

    case 2:
      cout << "\n    Rectangle and Cirlce have 0 volume" << endl;

      if (box != 0) {
        cout << "\n    Volume of Boxes: " << endl;
        cout << "\n      Box #1: " << shapePtr[4]->computeVolume();
        cout << "\n      Box #2: " << shapePtr[5]->computeVolume();
        if (shapePtr[4]->computeVolume() > shapePtr[5]->computeVolume()) {
          cout << "\n      Box #1 > Box #2 " << endl;
        } else if (shapePtr[4]->computeVolume() < shapePtr[5]->computeVolume()) {
          cout << "\n      Box #1 < Box #2 " << endl;
        } else {
          cout << "\n      Box #1 = Box #2 " << endl;
        }
      } else {
        cout << "\n    Box ojbects are not fully available." << endl;
      }

      if (cy != 0) {
        cout << "\n    Volume of Cylinders: " << endl;
        cout << "\n      Cylinder #1: " << shapePtr[6]->computeVolume();
        cout << "\n      Cylinder #2: " << shapePtr[7]->computeVolume();
        if (shapePtr[6]->computeVolume() > shapePtr[7]->computeVolume()) {
          cout << "\n      Cylinder #1 > Cylinder #2 " << endl;
        } else if (shapePtr[6]->computeVolume() < shapePtr[7]->computeVolume()) {
          cout << "\n      Cylinder #1 < Cylinder #2 " << endl;
        } else {
          cout << "\n      Cylinder #1 = Cylinder #2 " << endl;
        }
      } else {
        cout << "\n    Cylinder ojbects are not fully available." << endl;
      }
      break;

    case 3:
      if (rec != 0) {
        cout << "\n    Rectangle #1:" << endl;
        shapePtr[0]->print();
        cout << "\n    Rectangle #2:" << endl;
        shapePtr[1]->print();
      } else {
        cout << "\n    Rectangle ojbects are not fully available." << endl;
      }

      if (cir != 0) {
        cout << "\n    Circle #1:" << endl;
        shapePtr[2]->print();
        cout << "\n    Circle #2:" << endl;
        shapePtr[3]->print();
      } else {
        cout << "\n    Cirlce ojbects are not fully available." << endl;
      }

      if (box != 0) {
        cout << "\n    Box #1:" << endl;
        shapePtr[4]->print();
        cout << "\n    Box #2:" << endl;
        shapePtr[5]->print();
      } else {
        cout << "\n    Box ojbects are not fully available." << endl;
      }

      if (cy != 0) {
        cout << "\n    Cylinder #1:" << endl;
        shapePtr[6]->print();
        cout << "\n    Cylinder #2:" << endl;
        shapePtr[7]->print();
      } else {
        cout << "\n    Cylinder ojbects are not fully available." << endl;
      }
      break;
    case 4:
      break;
    default:
      cout << "\nWrong Option!" << endl;
    }
  } while (option != 4);
}

void areaCircle(Circle* cir) {
  if (cir != 0) {
    cout << "\n    Area of Rectangles: " << endl;
    cout << "\n      Cricle #1: " << cir[0].computeArea();
    cout << "\n      Cirlce #2: " << cir[1].computeArea();
    if (cir[0].computeArea() > cir[1].computeArea()) {
      cout << "\n      Circle #1 > Circle #2 " << endl;
    } else if (cir[0].computeArea() < cir[1].computeArea()) {
      cout << "\n      Circle #1 < Circle #2 " << endl;
    } else {
      cout << "\n      Circle #1 = Circle #2 " << endl;
    }
  } else {
    cout << "\n    Circle ojbects are not fully available." << endl;
  }
}

void areaRectangle(Rectangle* rec) {
  if (rec != 0) {
    cout << "\n    Area of Circles: " << endl;
    cout << "\n      Rectangle #1: " << rec[0].computeArea();
    cout << "\n      Rectangle #2: " << rec[1].computeArea();
    if (rec[0].computeArea() > rec[1].computeArea()) {
      cout << "\n      Rectangle #1 > Rectangle #2 " << endl;
    } else if (rec[0].computeArea() < rec[1].computeArea()) {
      cout << "\n      Rectangle #1 < Rectangle #2 " << endl;
    } else {
      cout << "\n      Rectangle #1 = Rectangle #2 " << endl;
    }
  } else {
    cout << "\n    Rectangle ojbects are not fully available." << endl;
  }
}

void volumeBox(Box* box) {
	if (box != 0) {
		cout << "\n    Volume of Boxes: " << endl;
		cout << "\n      Box #1: " << box[0].computeVolume();
		cout << "\n      Box #2: " << box[1].computeVolume();
		if (box[0].computeVolume() > box[1].computeVolume()) {
			cout << "\n      Box #1 > Box #2 " << endl;
		} else if (box[0].computeVolume() < box[1].computeVolume()) {
			cout << "\n      Box #1 < Box #2 " << endl;
		} else {
			cout << "\n      Box #1 = Box #2 " << endl;
		}
	} else {
		cout << "\n    Box ojbects are not fully available." << endl;
	}
}

void volumeCylinder(Cylinder* cy) {
	if (cy != 0) {
		cout << "\n    Volume of Cylinders: " << endl;
		cout << "\n      Cylinder #1: " << cy[0].computeVolume();
		cout << "\n      Cylinder #2: " << cy[1].computeVolume();
		if (cy[0].computeVolume() > cy[1].computeVolume()) {
			cout << "\n      Cylinder #1 > Cylinder #2 " << endl;
		} else if (cy[0].computeVolume() < cy[1].computeVolume()) {
			cout << "\n      Cylinder #1 < Cylinder #2 " << endl;
		} else {
			cout << "\n      Cylinder #1 = Cylinder #2 " << endl;
		}
	} else {
		cout << "\n    Cylinder ojbects are not fully available." << endl;
	}
}