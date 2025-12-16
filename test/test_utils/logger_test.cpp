/**
 * @file test/test_utils/logger_test.cpp
 * @brief Unit tests for the Logger utility
 */
#include <gtest/gtest.h>

#include "utils/logger.hpp"

using namespace loramesher;

/**
 * @class LoggerTest
 * @brief Test fixture for testing the Logger utility
 */
class LoggerTest : public ::testing::Test {
   protected:
    void SetUp() override {
        // Setup code for Logger tests
    }

    void TearDown() override {
        // Clean up any resources
    }
};

/**
 * @brief Test logging at different levels
 */
TEST_F(LoggerTest, LogLevelTest) {
    // Set log level to Info
    LOG.SetLogLevel(LogLevel::kInfo);

    // This Debug message should not appear
    LOG.Debug("This is a debug message: %d", 1);

    // This Info message should appear
    LOG.Info("This is an info message: %s", "info");

    // This Warning message should appear
    LOG.Warning("This is a warning message");

    // This Error message should appear
    LOG.Error("This is an error message: %.2f", 3.14);

    // Change log level to Debug
    LOG.SetLogLevel(LogLevel::kDebug);

    // Now Debug messages should appear
    LOG.Debug("This is another debug message: %d", 2);
}