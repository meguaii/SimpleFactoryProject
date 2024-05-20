#include <gtest/gtest.h>
#include "../ConceptualExample.cpp"
#include "../Documents.cpp"
#include "../MobilePhones.cpp"
#include "../Points.cpp"
#include "../Pizza.cpp"

TEST(SimpleFactoryTest, CreateProductA) {
    ConceptualExample::SimpleFactory factory;
    auto product = factory.createProduct(ConceptualExample::SimpleFactory::ProductType::A);
    ASSERT_NE(product, nullptr);
    ASSERT_EQ(product->getName(), "ProductA");
}

TEST(SimpleFactoryTest, CreateProductB) {
    ConceptualExample::SimpleFactory factory;
    auto product = factory.createProduct(ConceptualExample::SimpleFactory::ProductType::B);
    ASSERT_NE(product, nullptr);
    ASSERT_EQ(product->getName(), "ProductB");
}

TEST(SimpleFactoryTest, InvalidProductType) {
    ConceptualExample::SimpleFactory factory;
    auto product = factory.createProduct(static_cast<ConceptualExample::SimpleFactory::ProductType>(-1));
    ASSERT_EQ(product, nullptr);
}

// Тест для класса Documents
TEST(DocumentFactoryTest, CreateDocument) {
    Documents::DocumentFactory factory;
    auto document = factory.createDocument(Documents::DocumentType::PDF);
    ASSERT_NE(document, nullptr);
    ASSERT_EQ(document->getType(), "PDF");
}

// Тест для класса MobilePhones
TEST(MobilePhoneFactoryTest, CreatePhone) {
    MobilePhones::PhoneFactory factory;
    auto phone = factory.createPhone(MobilePhones::PhoneType::IPHONE);
    ASSERT_NE(phone, nullptr);
    ASSERT_EQ(phone->getName(), "iPhone");
}

// Тест для класса Points
TEST(PointFactoryTest, CreatePoint) {
    Points::PointFactory factory;
    auto point = factory.createPoint(Points::PointType::CARTESIAN);
    ASSERT_NE(point, nullptr);
    ASSERT_EQ(point->getType(), "Cartesian");
}

// Тест для класса Pizza
TEST(PizzaFactoryTest, CreatePizza) {
    Pizza::PizzaFactory factory;
    auto pizza = factory.createPizza(Pizza::PizzaType::MARGHERITA);
    ASSERT_NE(pizza, nullptr);
    ASSERT_EQ(pizza->getName(), "Margherita");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
