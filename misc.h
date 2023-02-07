#pragma once

#include <string>

/**
 * @brief This is a function that does some things
 * 
 */
void func1();
/**
 * @brief This is a function that does some things
 * 
 */
void func2();
/**
 * @brief This is a function that does some things
 * 
 */
void func3();

/**
 * @brief This class does a lot of things and implement a ctor and dtor
 * 
 */
class class1
{
    /**
     * @brief Construct a new class1 object
     * 
     * @param a Don't look too much into it, this param does nothing
     * @param b Don't look too much into it, this param does nothing
     */
    class1(int a, int b);
    /**
     * @brief Destroy the class1 object
     * 
     */
    ~class1();

    /**
     * @brief Construct a new method1 object
     * 
     */
    void method1();

    virtual std::string method2 (int a, int b) = 0;
};

/**
 * @brief Implements what's missig from class1
 * 
 */
class class2 : public class1
{
    /**
     * @brief Construct a new class2 object
     * 
     */
    class2();
    /**
     * @brief Destroy the class2 object
     * 
     */
    ~class2();

    /**
     * @brief This method will do a really useful thing with input param and return something meaningfull
     * 
     * @param a Is the most imprtant param of the all
     * @param b Is less important but still usefull
     * @return std::string Will tell you what has been done in this strange method
     */
    virtual std::string method2(int a, int b) override;
};

/**
 * @brief this class does nothing
 * 
 */
class class3 : public class1
{
};