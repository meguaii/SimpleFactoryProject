#include <gtest/gtest.h>
#include "../SimpleFactoryProject/ConceptualExample.h"
#include "../SimpleFactoryProject/Documents.h"
#include "../SimpleFactoryProject/MobilePhones.h"
#include "../SimpleFactoryProject/Points.h"
#include "../SimpleFactoryProject/Pizza.h"

TEST(ShapeFactoryTest, CreateCircle) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("circle");
    ASSERT_NE(shape, nullptr);
    ASSERT_EQ(shape->getName(), "Circle");
}

TEST(ShapeFactoryTest, CreateSquare) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("square");
    ASSERT_NE(shape, nullptr);
    ASSERT_EQ(shape->getName(), "Square");
}

TEST(ShapeFactoryTest, CreateRectangle) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("rectangle");
    ASSERT_NE(shape, nullptr);
    ASSERT_EQ(shape->getName(), "Rectangle");
}

TEST(DocumentFactoryTest, CreatePdf) {
    DocumentFactory factory;
    auto document = factory.createDocument("pdf");
    ASSERT_NE(document, nullptr);
    ASSERT_EQ(document->getName(), "PDF");
}

TEST(DocumentFactoryTest, CreateDoc) {
    DocumentFactory factory;
    auto document = factory.createDocument("doc");
    ASSERT_NE(document, nullptr);
    ASSERT_EQ(document->getName(), "DOC");
}

TEST(PhoneFactoryTest, CreateIPhone) {
    PhoneFactory factory;
    auto phone = factory.createPhone("iPhone");
    ASSERT_NE(phone, nullptr);
    ASSERT_EQ(phone->getName(), "iPhone");
}

TEST(PhoneFactoryTest, CreateSamsung) {
    PhoneFactory factory;
    auto phone = factory.createPhone("Samsung");
    ASSERT_NE(phone, nullptr);
    ASSERT_EQ(phone->getName(), "Samsung");
}

TEST(PointFactoryTest, CreateCartesian) {
    PointFactory factory;
    auto point = factory.createPoint("cartesian");
    ASSERT_NE(point, nullptr);
    ASSERT_EQ(point->getName(), "Cartesian");
}

TEST(PointFactoryTest, CreatePolar) {
    PointFactory factory;
    auto point = factory.createPoint("polar");
    ASSERT_NE(point, nullptr);
    ASSERT_EQ(point->getName(), "Polar");
}

TEST(PizzaFactoryTest, CreateVeggiePizza) {
    PizzaFactory factory;
    auto pizza = factory.createPizza("veggie");
    ASSERT_NE(pizza, nullptr);
    ASSERT_EQ(pizza->getName(), "Veggie Pizza");
}

TEST(PizzaFactoryTest, CreatePepperoniPizza) {
    PizzaFactory factory;
    auto pizza = factory.createPizza("pepperoni");
    ASSERT_NE(pizza, nullptr);
    ASSERT_EQ(pizza->getName(), "Pepperoni Pizza");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
