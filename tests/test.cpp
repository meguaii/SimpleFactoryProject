#include <gtest/gtest.h>
#include "ConceptualExample.cpp"

TEST(SimpleFactoryTest, CreateProductA) {
    SimpleFactory factory;
    auto product = factory.createProduct(SimpleFactory::ProductType::A);
    ASSERT_NE(product, nullptr);
    ASSERT_EQ(product->getName(), "ProductA");
}

TEST(SimpleFactoryTest, CreateProductB) {
    SimpleFactory factory;
    auto product = factory.createProduct(SimpleFactory::ProductType::B);
    ASSERT_NE(product, nullptr);
    ASSERT_EQ(product->getName(), "ProductB");
}

TEST(SimpleFactoryTest, InvalidProductType) {
    SimpleFactory factory;
    auto product = factory.createProduct(static_cast<SimpleFactory::ProductType>(-1));
    ASSERT_EQ(product, nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
