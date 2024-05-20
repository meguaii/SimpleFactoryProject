#include <gtest/gtest.h>
#include "../ConceptualExample.cpp"

TEST(ShapeFactoryTest, CreateRectangle) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("Rectangle");
    ASSERT_NE(shape, nullptr);
    ASSERT_EQ(typeid(*shape).name(), typeid(ConceptualExample::Rectangle).name());
}

TEST(ShapeFactoryTest, CreateSquare) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("Square");
    ASSERT_NE(shape, nullptr);
    ASSERT_EQ(typeid(*shape).name(), typeid(ConceptualExample::Square).name());
}

TEST(ShapeFactoryTest, CreateCircle) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("Circle");
    ASSERT_NE(shape, nullptr);
    ASSERT_EQ(typeid(*shape).name(), typeid(ConceptualExample::Circle).name());
}

TEST(ShapeFactoryTest, InvalidShapeType) {
    ConceptualExample::ShapeFactory factory;
    auto shape = factory.getShape("InvalidShape");
    ASSERT_EQ(shape, nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
