
set(COMPONENT_SRCS "i2c_init.c"
                   "inv_mpu.c"
		           "inv_mpu_dmp_motion_driver.c"
		           "mpu9250.c")

set(COMPONENT_INCLUDEDIRS "include")

idf_component_register(SRCS "${COMPONENT_SRCS}"
                    INCLUDE_DIRS "${COMPONENT_INCLUDEDIRS}"
                    REQUIRES driver esp_timer)
