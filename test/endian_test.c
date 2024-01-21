#include "unity.h"
#include "littledb.h"

void setUp(void) {}

void tearDown(void) {}

void test_littledb_is_system_big_endian() {
    unsigned short test_target = 0x1234;
    bool big_endian = *((unsigned char*)&test_target + 1)== 0x34;

    TEST_ASSERT(big_endian == littledb_is_system_big_endian());
}

void test_littledb_switch_endian() {
    unsigned int target = 0x12345678;
    littledb_switch_endian((char*)&target, sizeof(target)); 

    TEST_ASSERT(target == 0x78563412);
}

void test_littledb_big_endian() {
    unsigned int target = 0x12345678;
    littledb_big_endian((char*)&target, sizeof(target));

    if (littledb_is_system_big_endian()) {
        TEST_ASSERT(target == 0x12345678);
    } else {
        TEST_ASSERT(target == 0x78563412);
    }
}

void test_littledb_little_endian() {
    unsigned int target = 0x12345678;
    littledb_little_endian((char*)&target, sizeof(target));

    if (littledb_is_system_big_endian()) {
        TEST_ASSERT(target == 0x78563412);
    } else {
        TEST_ASSERT(target == 0x12345678);
    }
}

int main() {
    UNITY_BEGIN();

    RUN_TEST(test_littledb_is_system_big_endian);
    RUN_TEST(test_littledb_switch_endian);
    RUN_TEST(test_littledb_big_endian);

    return UNITY_END();
}
