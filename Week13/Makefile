CC = clang++
SOURCE = GeometricObject.cpp DerivedCircle.cpp DerivedRectangle.cpp 
OBJ = geometricObject
POLY = poly

geobj:
	$(CC) $(SOURCE) TestGeometricObjects.cpp -o $(OBJ)

poly:
	$(CC) $(SOURCE) polymorphismDemo.cpp -o $(POLY)

clean:
	rm $(OBJ) $(POLY)
